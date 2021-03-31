\context Staff = "tenor" \with { \consists Ambitus_engraver } <<
	\set Staff.instrumentName = "Tenor"
	\set Staff.shortInstrumentName = "T."
	\set Score.skipBars = ##t
	\set Staff.printKeyCancellation = ##f
	\new Voice \global
	\new Voice \globalTempo

	\context Voice = "voz-tenor" {
		\override Voice.TextScript #'padding = #2.0
		\override MultiMeasureRest #'expand-limit = 1

		\clef "treble_8"
		\key e \minor

		R1  |

		% intro
		R1*4  |

		% los niños hebreos...
		r2 r4 b,  |
		e 4. g fis 4  |
		e 4. b, ~ b, 4 ~  |
		b, 1  |
		r4 b, e b,  |
		fis 4. g a 4  |
		b 4. b ~ b 4 ~  |
		b 2 r4 b  |
		c' 4 b a g  |
		fis 4 e dis e  |
		fis 4. g e 4  |
		fis 4. b, ~ b, 4 ~  |
		b, 2 r4 b,  |

		% hosanna en el cielo...
		e 4. g fis 4  |
		e 4. b, 4 r8 b, 4  |
		fis 4. b a 4  |
		g 4. g 4 r8 b 4  |
		c' 4 ( b ) a g  |
		fis 4. ( g fis 4 )  |
		e 1  |
		r2 r4 b,  |

		% portones...
		b 4. b b 4  |
		c' 4. b a 4  |
		b 4. b ~ b 4 ~  |
		b 2 r4 b,  |
		b 4. b b 4  |
		a 4. g fis 4  |
		e 4. e ~ e 4 ~  |
		e 2 r4 d  |

		% va a entrar...
		g 2. g 4  |
		a 2 b 4 c'  |
		b 4. g r4  |
		a 4 a g fis  |
		e 4. e fis 4  |
		g 4. g a 4  |
		b 1 ~  |
		b 2 r4 b,  |

		% hosanna en el cielo...
		e 4. g fis 4  |
		e 4. b, 4 r8 b, 4  |
		fis 4. b a 4  |
		g 4. g 4 r8 b 4  |
		c' 4 ( b ) a g  |
		fis 4. ( g fis 4 )  |
		e 1  |
		R1  |
		\bar "|."
	}

	\lyricsto "voz-tenor" \new Lyrics \lyricmode {
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
		ho -- san __ na_en el cie __ lo!
	}
>>
