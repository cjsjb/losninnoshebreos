\context Staff = "violin" <<
	\set Staff.instrumentName = "Violín"
	\set Staff.shortInstrumentName = "V."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-violin" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \minor

		r2 r4 b'  |
		c'' 4 b' a' g'  |
		fis' 4 e' dis' e'  |
		fis' 4. g' e' 4  |
		fis' 4. b r4  |
		R1*45
		\bar "|."
	}
>>
