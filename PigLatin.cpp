#include <iostream>
#include <fstream>
#include <string>
#include "PigLatin.h"
using namespace std;

/*
Converts english written text into Pig Latin.
Made By: Justin Pabon
*/

void PigLatin::translatePL(string thisFile){
  int index = -1, indexWord = 0;

  //Create new text file name.
  for(int i = 0; i < thisFile.length(); i++){
    if(thisFile.substr(i) == ".txt"){
      index = i;
      break;
    }
  }
  string newName = thisFile.substr(0, index) + "PL" + thisFile.substr(index);
  /*cout << newName << '\n';*/
  cout << '\n';


  string line, checkWord = "", newWord = "";
  int wordStart = 0;

  ofstream file;
  file.open(newName);

  //Check each word in given text file.
  ifstream myfile (thisFile);
  if (myfile.is_open())
  {
    while ( getline (myfile,line) )
    {
      //cout << line << '\n';
      wordStart = 0;

      for(int i = 0; i < line.length(); i++){
        /*cout << i << ": " << line[i] << '\n';*/

        if(line[i] == ' ' || line[i] == '.' || line[i] == '?' || line[i] == '!'
        || line[i] == ',' || line[i] == '"' || line[i] == ':' || line[i] == '/' || line[i] == ';'){
          index = i;
          //cout << "wordStart: " << wordStart << '\n';
          //cout << "index: " << index << '\n';

          if(index - wordStart != 0)checkWord = line.substr(wordStart, index - wordStart);
          else checkWord = line.substr(line.length(), line.length());//break;

          //cout << "checkWord: " << checkWord << '\n';
          //cout << "length: " << checkWord.length() << '\n';

          for (int j = 0; j < checkWord.length(); j++) {
            if (checkWord[j] == 'a' || checkWord[j] == 'A' || checkWord[j] == 'e' ||
            checkWord[j] == 'E' || checkWord[j] == 'i' || checkWord[j] == 'I' ||
            checkWord[j] == 'o' || checkWord[j] == 'O' || checkWord[j] == 'u' ||
            checkWord[j] == 'U') {
              indexWord = j;
              break;
            }
          }

          if(checkWord.length() != 0) {
            newWord = checkWord.substr(indexWord) + "-" + checkWord.substr(0, indexWord) + "ay";
            //cout << "newWord: " << newWord << '\n';
            //wordStart = i + 1;
            file << newWord << line[index];
          }

          else file << line[i];
          wordStart = i + 1;
        }
      }

      file << endl;
    }
    myfile.close();

    cout << "Translation Complete!" << '\n';
    cout << "Your translated text from the text file, " << thisFile << ", has been saved in a new text file called " << newName << '\n';
    cout << '\n';
  }

  else cout << "Unable to open file" << '\n';

  file.close();
}
