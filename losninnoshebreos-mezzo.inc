\context Staff = "mezzosoprano" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Mezzosoprano"
	\set Staff.shortInstrumentName = "M."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-mezzosoprano" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble"
		\key e \minor

		R1  |

		% intro
		R1*4  |
		r2 r4

		% los niños hebreos...
		      b  |
		e' 4. g' fis' 4  |
		e' 4. e' ~ e' 4 ~  |
		e' 1  |
		r4 b e' b  |
		d' 4. e' fis' 4  |
		g' 4. g' ~ g' 4 ~  |
		g' 2 r4 b  |
		c' 4 c' c' c'  |
		e' 4 e' e' e'  |
		dis' 4. e' dis' 4  |
		dis' 4. dis' ~ dis' 4 ~  |
		dis' 2 r4

		% hosanna en el cielo...
		          b  |
		e' 4. g' fis' 4  |
		e' 4. b 4 r8 b 4  |
		d' 4. e' fis' 4  |
		g' 4. g' 4 r8 b 4  |
		c' 2 e' 4 e'  |
		dis' 4. ( e' dis' 4 )  |
		b 1  |
		r2 r4

		% portones...
		      b  |
		g' 4. g' g' 4  |
		a' 4. g' fis' 4  |
		g' 4. g' ~ g' 4 ~  |
		g' 2 r4 b  |
		g' 4. g' g' 4  |
		fis' 4. e' d' 4  |
		b 4. b ~ b 4 ~  |
		b 2 r4

		% va a entrar...
		       d'  |
		g' 2. g' 4  |
		fis' 2 g' 4 a'  |
		g' 4. g' r4  |
		c' 4 c' c' c'  |
		e' 4. e' e' 4  |
		e' 4. e' g' 4  |
		fis' 1 ~  |
		fis' 2 r4

		% hosanna en el cielo...
		          b  |
		e' 4. g' fis' 4  |
		e' 4. b 4 r8 b 4  |
		d' 4. e' fis' 4  |
		g' 4. g' 4 r8 b 4  |
		c' 2 e' 4 e'  |
		dis' 4. ( e' dis' 4 )  |
		b 1  |
		R1  |
		\bar "|."
	}

	\new Lyrics \lyricsto "voz-mezzosoprano" {
		Los ni -- ños he -- bre -- os, __
		lle -- van -- do ra -- mos de_o -- li -- vo, __
		sa -- lie -- ron al en -- cuen -- tro del Se -- ñor a -- cla -- man -- do: __

		¡Ho -- san -- na_en el cie -- lo,
		ho -- san -- na_en el cie -- lo,
		ho -- san __ na_en el cie __ lo!

		Por -- to -- nes, a -- brid los din -- te -- les, __
		que se_al -- cen las puer -- tas e -- ter -- nas. __
		Va_en -- trar el rey de la glo -- ria,
		hé -- roe va -- le -- ro -- so,
		mi Dios de_Is -- ra -- el. __

		¡Ho -- san -- na_en el cie -- lo,
		ho -- san -- na_en el cie -- lo,
		ho -- san -- na_en el cie __ lo!
	}
>>
