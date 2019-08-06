all:
	g++ -o translate RosettaCode.cpp PigLatin.cpp Hiragana.cpp Katakana.cpp Hangul.cpp

clean:
	rm translate
