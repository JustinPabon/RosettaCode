#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Katakana{
public:
  void translateKat(string thisFile);

  string kgCollumn(char kgChar, char kgNextChar, char kgNextChar2);
  string szCollumn(char szChar, char szNextChar, char szNextChar2, char szNextChar3);
  string tdCollumn(char tdChar, char tdNextChar, char tdNextChar2, char tdNextChar3);
  string nCollumn(char nNextChar, char nNextChar2);
  string hbpCollumn(char hbpChar, char hbpNextChar, char hbpNextChar2);
  string mCollumn(char mNextChar, char mNextChar2);
  string rCollumn(char rNextChar, char rNextChar2);
  string yCollumn(char yNextChar);

};
