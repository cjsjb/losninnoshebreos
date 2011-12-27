% This LilyPond file was generated by Rosegarden 1.7.3
\version "2.10.0"
% point and click debugging is disabled
#(ly:set-option 'point-and-click #f)
\header {
	title = "Los niños hebreos"
	composer = "Francisco Palazón Martínez"
	tagline = "Coro Juvenil San Juan Bosco"
}
#(set-global-staff-size 20)
#(set-default-paper-size "letter")
\paper {
	#(define line-width (* 7 in))
	print-first-page-number = ##t
	ragged-bottom = ##t
	first-page-number = 1
}
global = {
	\time 4/4
	\skip 1*50  %% 1-50
}
globalTempo = {
	\tempo 4 = 145  \skip 1*50
}
\score {
	<<
		% force offset of colliding notes in chords:
		\override Score.NoteColumn #'force-hshift = #1.0

		\include "losninnoshebreos-acordes.inc"
		\new StaffGroup <<
			\include "losninnoshebreos-soprano.inc"
			\include "losninnoshebreos-mezzo.inc"
			\include "losninnoshebreos-tenor.inc"
		>>
		\include "losninnoshebreos-violin.inc"

	>>

	\layout { \context { \RemoveEmptyStaffContext } }
}
