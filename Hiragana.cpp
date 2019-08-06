#include <iostream>
#include <fstream>
#include <string>
#include "Hiragana.h"
using namespace std;

/*
Converts english written text into Hiragana.
Made By: Justin Pabon
*/

//Y Collumn
string Hiragana::yCollumn(char yNextChar){
  if (yNextChar == 'a' || yNextChar == 'A') return "ゃ";
  else if(yNextChar == 'u' || yNextChar == 'U') return "ゅ";
  else if(yNextChar == 'o' || yNextChar == 'O') return "ょ";

  else return "???";
}

//K Collumn
string Hiragana::kgCollumn(char kgChar, char kgNextChar, char kgNextChar2){

  if(kgChar == 'k' || kgChar == 'K'){
    if(kgNextChar == 'a' || kgNextChar == 'A') return "か";
    else if(kgNextChar == 'i' || kgNextChar == 'I') return "き";
    else if(kgNextChar == 'u' || kgNextChar == 'U') return "く";
    else if(kgNextChar == 'e' || kgNextChar == 'E') return "け";
    else if(kgNextChar == 'o' || kgNextChar == 'O') return "こ";
    else if(kgNextChar == 'y' || kgNextChar == 'Y') return "き" + yCollumn(kgNextChar2);

    else return "く";
  }

  else if(kgChar == 'g' || kgChar == 'G'){
    if(kgNextChar == 'a' || kgNextChar == 'A') return "が";
    else if(kgNextChar == 'i' || kgNextChar == 'I') return "ぎ";
    else if(kgNextChar == 'u' || kgNextChar == 'U') return "ぐ";
    else if(kgNextChar == 'e' || kgNextChar == 'E') return "げ";
    else if(kgNextChar == 'o' || kgNextChar == 'O') return "ご";
    else if(kgNextChar == 'y' || kgNextChar == 'Y') return "ぎ" + yCollumn(kgNextChar2);

    else return "ぐ";
  }

  else return "???";
}

//S Collumn
string Hiragana::szCollumn(char szChar, char szNextChar, char szNextChar2, char szNextChar3){

  if(szChar == 's' || szChar == 'S'){
    if(szNextChar == 'a' || szNextChar == 'A') return "さ";
    else if(szNextChar == 'h' || szNextChar == 'H'){
      if(szNextChar2 == 'i' || szNextChar2 == 'I') return "し";
      else if(szNextChar2 == 'y' || szNextChar2 == 'Y') return "し" + yCollumn(szNextChar3);
      else return "???";
    }
    else if(szNextChar == 'u' || szNextChar == 'U') return "す";
    else if(szNextChar == 'e' || szNextChar == 'E') return "せ";
    else if(szNextChar == 'o' || szNextChar == 'O') return "そ";

    else return "す";
  }

  else if(szChar == 'z' || szChar == 'Z'){
    if(szNextChar == 'a' || szNextChar == 'A') return "ざ";
    //else if(szNextChar == 'i' || szNextChar == 'I') return "じ";
    else if(szNextChar == 'u' || szNextChar == 'U') return "ず";
    else if(szNextChar == 'e' || szNextChar == 'E') return "ぜ";
    else if(szNextChar == 'o' || szNextChar == 'O') return "ぞ";

    else return "ず";
  }

  else return "???";
}

//T Collumn
string Hiragana::tdCollumn(char tdChar, char tdNextChar, char tdNextChar2, char tdNextChar3){

  if(tdChar == 't' || tdChar == 'T'){
    if(tdNextChar == 'a' || tdNextChar == 'A') return "た";
    //else if(tdNextChar == 'i' || tdNextChar == 'I') return "し";
    else if((tdNextChar == 's' || tdNextChar == 'S') && (tdNextChar2 == 'u' || tdNextChar2 == 'U')) return "つ";
    else if((tdNextChar == 'z' || tdNextChar == 'Z') && (tdNextChar2 == 'u' || tdNextChar2 == 'U')) return "づ";
    else if(tdNextChar == 'e' || tdNextChar == 'E') return "て";
    else if(tdNextChar == 'o' || tdNextChar == 'O') return "と";

    else return "と";
  }

  else if(tdChar == 'd' || tdChar == 'D'){
    if(tdNextChar == 'a' || tdNextChar == 'A') return "だ";
    //else if(tdNextChar == 'i' || tdNextChar == 'I') return "じ";
    //else if(tdNextChar == 'u' || tdNextChar == 'U') return "づ";
    else if(tdNextChar == 'e' || tdNextChar == 'E') return "で";
    else if(tdNextChar == 'o' || tdNextChar == 'O') return "ど";

    else return "ど";
  }

  else if(tdChar == 'c' || tdChar == 'C'){
    if((tdNextChar == 'h' || tdNextChar == 'H') && (tdNextChar2 == 'i' || tdNextChar2 == 'I')) return "ち";
    else if((tdNextChar == 'h' || tdNextChar == 'H') && (tdNextChar2 == 'y' || tdNextChar2 == 'Y')) return "ち" + yCollumn(tdNextChar3);

    else return "???";
  }

  else return "???";
}

//N Collumn
string Hiragana::nCollumn(char nNextChar, char nNextChar2){

    if(nNextChar == 'a' || nNextChar == 'A') return "な";
    else if(nNextChar == 'i' || nNextChar == 'I') return "に";
    else if(nNextChar == 'u' || nNextChar == 'U') return "ぬ";
    else if(nNextChar == 'e' || nNextChar == 'E') return "ね";
    else if(nNextChar == 'o' || nNextChar == 'O') return "の";
    else if(nNextChar == 'y' || nNextChar == 'Y') return "に" + yCollumn(nNextChar2);

    else return "ん";
}

//H Collumn
string Hiragana::hbpCollumn(char hbpChar, char hbpNextChar, char hbpNextChar2){

  if(hbpChar == 'h' || hbpChar == 'H'){
    if(hbpNextChar == 'a' || hbpNextChar == 'A') return "は";
    else if(hbpNextChar == 'i' || hbpNextChar == 'I') return "ひ";
    else if(hbpNextChar == 'u' || hbpNextChar == 'U') return "ふ";
    else if(hbpNextChar == 'e' || hbpNextChar == 'E') return "へ";
    else if(hbpNextChar == 'o' || hbpNextChar == 'O') return "ほ";
    else if(hbpNextChar == 'y' || hbpNextChar == 'Y') return "ひ" + yCollumn(hbpNextChar2);

    else return "ふ";
  }

  else if (hbpChar == 'f' || hbpChar == 'F') {
    if(hbpNextChar == 'u' || hbpNextChar == 'U') return "ふ";

    else return "???";
  }

  else if(hbpChar == 'b' || hbpChar == 'B'){
    if(hbpNextChar == 'a' || hbpNextChar == 'A') return "ば";
    else if(hbpNextChar == 'i' || hbpNextChar == 'I') return "び";
    else if(hbpNextChar == 'u' || hbpNextChar == 'U') return "ぶ";
    else if(hbpNextChar == 'e' || hbpNextChar == 'E') return "べ";
    else if(hbpNextChar == 'o' || hbpNextChar == 'O') return "ぼ";
    else if(hbpNextChar == 'y' || hbpNextChar == 'Y') return "び" + yCollumn(hbpNextChar2);

    else return "ぶ";
  }

  else if(hbpChar == 'p' || hbpChar == 'P'){
    if(hbpNextChar == 'a' || hbpNextChar == 'A') return "ぱ";
    else if(hbpNextChar == 'i' || hbpNextChar == 'I') return "ぴ";
    else if(hbpNextChar == 'u' || hbpNextChar == 'U') return "ぷ";
    else if(hbpNextChar == 'e' || hbpNextChar == 'E') return "ぺ";
    else if(hbpNextChar == 'o' || hbpNextChar == 'O') return "ぽ";
    else if(hbpNextChar == 'y' || hbpNextChar == 'Y') return "ぴ" + yCollumn(hbpNextChar2);

    else return "ぷ";
  }

  else return "???";
}

//M Collumn
string Hiragana::mCollumn(char mNextChar, char mNextChar2){

    if(mNextChar == 'a' || mNextChar == 'A') return "ま";
    else if(mNextChar == 'i' || mNextChar == 'I') return "み";
    else if(mNextChar == 'u' || mNextChar == 'U') return "む";
    else if(mNextChar == 'e' || mNextChar == 'E') return "め";
    else if(mNextChar == 'o' || mNextChar == 'O') return "も";
    else if(mNextChar == 'y' || mNextChar == 'Y') return "み" + yCollumn(mNextChar2);

    else return "む";
}

//R Collumn
string Hiragana::rCollumn(char rNextChar, char rNextChar2){

    if(rNextChar == 'a' || rNextChar == 'A') return "ら";
    else if(rNextChar == 'i' || rNextChar == 'I') return "り";
    else if(rNextChar == 'u' || rNextChar == 'U') return "る";
    else if(rNextChar == 'e' || rNextChar == 'E') return "れ";
    else if(rNextChar == 'o' || rNextChar == 'O') return "ろ";
    else if(rNextChar == 'y' || rNextChar == 'Y') return "り" + yCollumn(rNextChar2);

    else return "る";
}


void Hiragana::translateHir(string thisFile){
  int index = -1, indexWord = 0;

  //Create new text file name.
  for(int i = 0; i < thisFile.length(); i++){
    if(thisFile.substr(i) == ".txt"){
      index = i;
      break;
    }
  }
  string newName = thisFile.substr(0, index) + "HIR" + thisFile.substr(index);
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
        //cout << i << ": " << line[i] << '\n';

        if(line[i] == ' ' || line[i] == '.' || line[i] == '?' || line[i] == '!'
        || line[i] == ',' || line[i] == '"' || line[i] == ':' || line[i] == '/' || line[i] == ';'){
          index = i;
          //cout << "wordStart: " << wordStart << '\n';
          //cout << "index: " << index << '\n';

          if(index - wordStart != 0)checkWord = line.substr(wordStart, index - wordStart);
          else checkWord = line.substr(line.length(), line.length());//break;

          //cout << "checkWord: " << checkWord << '\n';
          //cout << "length: " << checkWord.length() << '\n';

          //If char is a vowel -> Find Hiragana char.
          //If consonent -> go to appropriate consonent function, find Hiragana char and skip the next char.
          for (int j = 0; j < checkWord.length(); j++) {

            if(checkWord[j] == 'a' || checkWord[j] == 'A') newWord = newWord + "あ";
            else if(checkWord[j] == 'i' || checkWord[j] == 'I') newWord = newWord + "い";
            else if(checkWord[j] == 'u' || checkWord[j] == 'U') newWord = newWord + "う";
            else if(checkWord[j] == 'e' || checkWord[j] == 'E') newWord = newWord + "え";
            else if(checkWord[j] == 'o' || checkWord[j] == 'O') newWord = newWord + "お";

            else if(checkWord[j] == 'k' || checkWord[j] == 'K' || checkWord[j] == 'g' || checkWord[j] == 'G'){
              newWord = newWord + kgCollumn(checkWord[j], checkWord[j + 1], checkWord[j + 2]);

              if(checkWord[j + 1] == 'y' || checkWord[j + 1] == 'Y') j = j + 2;
              else j++;
            }

            else if(checkWord[j] == 's' || checkWord[j] == 'S' || checkWord[j] == 'z' || checkWord[j] == 'Z'){
              newWord = newWord + szCollumn(checkWord[j], checkWord[j + 1], checkWord[j + 2], checkWord[j + 3]);

              //if((checkWord[j + 1] == 'h' || checkWord[j + 1] == 'H') && (checkWord[j + 2] == 'i' || checkWord[j + 2] == 'I')) j = j + 2;
              //else if((checkWord[j + 1] == 'h' || checkWord[j + 1] == 'H') && (checkWord[j + 2] == 'y' || checkWord[j + 2] == 'Y')) j = j + 3;

              if(checkWord[j + 1] == 'h' || checkWord[j + 1] == 'H'){
                if(checkWord[j + 2] == 'i' || checkWord[j + 2] == 'I') j = j + 2;
                else if(checkWord[j + 2] == 'y' || checkWord[j + 2] == 'Y') j = j + 3;
              }

              else j++;
            }

            else if(checkWord[j] == 't' || checkWord[j] == 'T' || checkWord[j] == 'd' || checkWord[j] == 'D'
              || checkWord[j] == 'c' || checkWord[j] == 'C'){
              newWord = newWord + tdCollumn(checkWord[j], checkWord[j + 1], checkWord[j + 2], checkWord[j + 3]);

              if(((checkWord[j + 1] == 's' || checkWord[j + 1] == 'S') && (checkWord[j + 2] == 'u' || checkWord[j + 2] == 'U'))
                || ((checkWord[j + 1] == 'z' || checkWord[j + 1] == 'Z') && (checkWord[j + 2] == 'u' || checkWord[j + 2] == 'U')))
              j = j + 2;

              else if(checkWord[j + 1] == 'h' || checkWord[j + 1] == 'H'){
                if(checkWord[j + 2] == 'i' || checkWord[j + 2] == 'I') j = j + 2;
                else if(checkWord[j + 2] == 'y' || checkWord[j + 2] == 'Y') j = j + 3;
              }

              else j++;
            }

            else if(checkWord[j] == 'n' || checkWord[j] == 'N'){
              newWord = newWord + nCollumn(checkWord[j + 1], checkWord[j + 2]);

              if((checkWord[j + 1] == 'a' || checkWord[j + 1] == 'A') || (checkWord[j + 1] == 'i' || checkWord[j + 1] == 'I')
                || (checkWord[j + 1] == 'u' || checkWord[j + 1] == 'U') || (checkWord[j + 1] == 'e' || checkWord[j + 1] == 'E')
                || (checkWord[j + 1] == 'o' || checkWord[j + 1] == 'O')) j++;

              else if(checkWord[j + 1] == 'y' || checkWord[j + 1] == 'Y') j = j + 2;
              else;
              //j++;
            }

            else if(checkWord[j] == 'h' || checkWord[j] == 'H' || checkWord[j] == 'b'
            || checkWord[j] == 'B' || checkWord[j] == 'p' || checkWord[j] == 'P'
            || checkWord[j] == 'f' || checkWord[j] == 'F'){
              newWord = newWord + hbpCollumn(checkWord[j], checkWord[j + 1], checkWord[j + 2]);

              if(checkWord[j + 1] == 'y' || checkWord[j + 1] == 'Y') j = j + 2;
              else j++;
              //j++;
            }

            else if(checkWord[j] == 'm' || checkWord[j] == 'M'){
              newWord = newWord + mCollumn(checkWord[j + 1], checkWord[j + 2]);

              if(checkWord[j + 1] == 'y' || checkWord[j + 1] == 'Y') j = j + 2;
              else j++;
              //j++;
            }

            else if(checkWord[j] == 'r' || checkWord[j] == 'R'){
              newWord = newWord + rCollumn(checkWord[j + 1], checkWord[j + 2]);

              if(checkWord[j + 1] == 'y' || checkWord[j + 1] == 'Y') j = j + 2;
              else j++;
              //j++;
            }

            else if(checkWord[j] == 'y' || checkWord[j] == 'Y'){
              if (checkWord[j + 1] == 'a' || checkWord[j + 1] == 'A') newWord = newWord + "や";
              else if(checkWord[j + 1] == 'u' || checkWord[j + 1] == 'U') newWord = newWord + "ゆ";
              else if(checkWord[j + 1] == 'o' || checkWord[j + 1] == 'O') newWord = newWord + "よ";

              j++;
            }

            else if(checkWord[j] == 'w' || checkWord[j] == 'W'){
              if (checkWord[j + 1] == 'a' || checkWord[j + 1] == 'A') newWord = newWord + "わ";
              else if(checkWord[j + 1] == 'o' || checkWord[j + 1] == 'O') newWord = newWord + "を";

              j++;
            }

            else if (checkWord[j] == 'j' || checkWord[j] == 'J') {
              if (checkWord[j + 1] == 'i' || checkWord[j + 1] == 'I'){
                newWord = newWord + "じ";
                j++;
              }
              else if(checkWord[j + 1] == 'y' || checkWord[j + 1] == 'Y'){
                newWord = newWord + "じ" + yCollumn(checkWord[j + 2]);
                j = j + 2;
              }
            }
          }

          //cout << newWord << endl;

          if(checkWord.length() != 0) file << newWord << line[index];

          else file << line[i];
          newWord = "";
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
