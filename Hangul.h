#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Hangul{
public:
  void translateHan(string thisFile);

  bool isAVowel(char thisVowel);
  string vowels(string syllable);
  string gChar(string syllable);
  string kChar(string syllable);
  string nChar(string syllable);
  string dChar(string syllable);
  string tChar(string syllable);
  string rChar(string syllable);
  string mChar(string syllable);
  string bChar(string syllable);
  string pChar(string syllable);
  string sChar(string syllable);
  string jChar(string syllable);
  string chChar(string syllable);
  string hChar(string syllable);
};
