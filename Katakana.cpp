#include <iostream>
#include <fstream>
#include <string>
#include "Katakana.h"
using namespace std;

/*
Converts english written text into Katakana.
Made By: Justin Pabon
*/

//Y Collumn
string Katakana::yCollumn(char yNextChar){
  if (yNextChar == 'a' || yNextChar == 'A') return "ャ";
  else if(yNextChar == 'u' || yNextChar == 'U') return "ュ";
  else if(yNextChar == 'o' || yNextChar == 'O') return "ョ";

  else return "???";
}

//K Collumn
string Katakana::kgCollumn(char kgChar, char kgNextChar, char kgNextChar2){

  if(kgChar == 'k' || kgChar == 'K'){
    if(kgNextChar == 'a' || kgNextChar == 'A') return "カ";
    else if(kgNextChar == 'i' || kgNextChar == 'I') return "キ";
    else if(kgNextChar == 'u' || kgNextChar == 'U') return "ク";
    else if(kgNextChar == 'e' || kgNextChar == 'E') return "ケ";
    else if(kgNextChar == 'o' || kgNextChar == 'O') return "コ";
    else if(kgNextChar == 'y' || kgNextChar == 'Y') return "キ" + yCollumn(kgNextChar2);

    else return "コ";
  }

  else if(kgChar == 'g' || kgChar == 'G'){
    if(kgNextChar == 'a' || kgNextChar == 'A') return "ガ";
    else if(kgNextChar == 'i' || kgNextChar == 'I') return "ギ";
    else if(kgNextChar == 'u' || kgNextChar == 'U') return "グ";
    else if(kgNextChar == 'e' || kgNextChar == 'E') return "ゲ";
    else if(kgNextChar == 'o' || kgNextChar == 'O') return "ゴ";
    else if(kgNextChar == 'y' || kgNextChar == 'Y') return "ギ" + yCollumn(kgNextChar2);

    else return "ゴ";
  }

  else return "???";
}

//S Collumn
string Katakana::szCollumn(char szChar, char szNextChar, char szNextChar2, char szNextChar3){

  if(szChar == 's' || szChar == 'S'){
    if(szNextChar == 'a' || szNextChar == 'A') return "サ";
    else if(szNextChar == 'h' || szNextChar == 'H'){
      if(szNextChar2 == 'i' || szNextChar2 == 'I') return "シ";
      else if(szNextChar2 == 'e' || szNextChar2 == 'E') return "シェ";
      else if(szNextChar2 == 'y' || szNextChar2 == 'Y') return "シ" + yCollumn(szNextChar3);
      else return "???";
    }
    else if(szNextChar == 'u' || szNextChar == 'U') return "ス";
    else if(szNextChar == 'e' || szNextChar == 'E') return "セ";
    else if(szNextChar == 'o' || szNextChar == 'O') return "ソ";

    else return "ス";
  }

  else if(szChar == 'z' || szChar == 'Z'){
    if(szNextChar == 'a' || szNextChar == 'A') return "ザ";
    //else if(szNextChar == 'i' || szNextChar == 'I') return "じ";
    else if(szNextChar == 'u' || szNextChar == 'U') return "ズ";
    else if(szNextChar == 'e' || szNextChar == 'E') return "ゼ";
    else if(szNextChar == 'o' || szNextChar == 'O') return "ゾ";

    else return "ズ";
  }

  else return "???";
}

//T Collumn
string Katakana::tdCollumn(char tdChar, char tdNextChar, char tdNextChar2, char tdNextChar3){

  if(tdChar == 't' || tdChar == 'T'){
    if(tdNextChar == 'a' || tdNextChar == 'A') return "タ";
    else if(tdNextChar == 'i' || tdNextChar == 'I') return "ティ";
    else if(tdNextChar == 'u' || tdNextChar == 'U') return "トゥ";
    else if((tdNextChar == 's' || tdNextChar == 'S') && (tdNextChar2 == 'u' || tdNextChar2 == 'U')) return "ツ";
    else if((tdNextChar == 'z' || tdNextChar == 'Z') && (tdNextChar2 == 'u' || tdNextChar2 == 'U')) return "ヅ";
    else if(tdNextChar == 'e' || tdNextChar == 'E') return "テ";
    else if(tdNextChar == 'o' || tdNextChar == 'O') return "ト";

    else return "ト";
  }

  else if(tdChar == 'd' || tdChar == 'D'){
    if(tdNextChar == 'a' || tdNextChar == 'A') return "ダ";
    else if(tdNextChar == 'i' || tdNextChar == 'I') return "ディ";
    else if(tdNextChar == 'u' || tdNextChar == 'U') return "ドゥ";
    else if(tdNextChar == 'e' || tdNextChar == 'E') return "デ";
    else if(tdNextChar == 'o' || tdNextChar == 'O') return "ド";

    else return "ドゥ";
  }

  else if(tdChar == 'c' || tdChar == 'C'){
    if((tdNextChar == 'h' || tdNextChar == 'H') && (tdNextChar2 == 'i' || tdNextChar2 == 'I')) return "チ";
    else if((tdNextChar == 'h' || tdNextChar == 'H') && (tdNextChar2 == 'e' || tdNextChar2 == 'E')) return "チェ";
    else if((tdNextChar == 'h' || tdNextChar == 'H') && (tdNextChar2 == 'y' || tdNextChar2 == 'Y')) return "ヂ" + yCollumn(tdNextChar3);

    else return "???";
  }

  else return "???";
}

//N Collumn
string Katakana::nCollumn(char nNextChar, char nNextChar2){

    if(nNextChar == 'a' || nNextChar == 'A') return "ナ";
    else if(nNextChar == 'i' || nNextChar == 'I') return "ニ";
    else if(nNextChar == 'u' || nNextChar == 'U') return "ヌ";
    else if(nNextChar == 'e' || nNextChar == 'E') return "ネ";
    else if(nNextChar == 'o' || nNextChar == 'O') return "ノ";
    else if(nNextChar == 'y' || nNextChar == 'Y') return "ニ" + yCollumn(nNextChar2);

    else return "ン";
}

//H Collumn
string Katakana::hbpCollumn(char hbpChar, char hbpNextChar, char hbpNextChar2){

  if(hbpChar == 'h' || hbpChar == 'H'){
    if(hbpNextChar == 'a' || hbpNextChar == 'A') return "ハ";
    else if(hbpNextChar == 'i' || hbpNextChar == 'I') return "ヒ";
    else if(hbpNextChar == 'u' || hbpNextChar == 'U') return "フ";
    else if(hbpNextChar == 'e' || hbpNextChar == 'E') return "へ";
    else if(hbpNextChar == 'o' || hbpNextChar == 'O') return "ホ";
    else if(hbpNextChar == 'y' || hbpNextChar == 'Y') return "ヒ" + yCollumn(hbpNextChar2);

    else return "フ";
  }

  else if (hbpChar == 'f' || hbpChar == 'F') {
    if(hbpNextChar == 'u' || hbpNextChar == 'U') return "フ";
    else if(hbpNextChar == 'a' || hbpNextChar == 'A') return "ファ";
    else if(hbpNextChar == 'i' || hbpNextChar == 'I') return "フィ";
    else if(hbpNextChar == 'e' || hbpNextChar == 'E') return "フェ";
    else if(hbpNextChar == 'o' || hbpNextChar == 'O') return "フォ";

    else return "???";
  }

  else if(hbpChar == 'b' || hbpChar == 'B'){
    if(hbpNextChar == 'a' || hbpNextChar == 'A') return "バ";
    else if(hbpNextChar == 'i' || hbpNextChar == 'I') return "ビ";
    else if(hbpNextChar == 'u' || hbpNextChar == 'U') return "ブ";
    else if(hbpNextChar == 'e' || hbpNextChar == 'E') return "べ";
    else if(hbpNextChar == 'o' || hbpNextChar == 'O') return "ボ";
    else if(hbpNextChar == 'y' || hbpNextChar == 'Y') return "ビ" + yCollumn(hbpNextChar2);

    else return "ブ";
  }

  else if(hbpChar == 'p' || hbpChar == 'P'){
    if(hbpNextChar == 'a' || hbpNextChar == 'A') return "パ";
    else if(hbpNextChar == 'i' || hbpNextChar == 'I') return "ピ";
    else if(hbpNextChar == 'u' || hbpNextChar == 'U') return "プ";
    else if(hbpNextChar == 'e' || hbpNextChar == 'E') return "ぺ";
    else if(hbpNextChar == 'o' || hbpNextChar == 'O') return "ポ";
    else if(hbpNextChar == 'y' || hbpNextChar == 'Y') return "ピ" + yCollumn(hbpNextChar2);

    else return "プ";
  }

  else return "???";
}

//M Collumn
string Katakana::mCollumn(char mNextChar, char mNextChar2){

    if(mNextChar == 'a' || mNextChar == 'A') return "マ";
    else if(mNextChar == 'i' || mNextChar == 'I') return "ミ";
    else if(mNextChar == 'u' || mNextChar == 'U') return "ム";
    else if(mNextChar == 'e' || mNextChar == 'E') return "メ";
    else if(mNextChar == 'o' || mNextChar == 'O') return "モ";
    else if(mNextChar == 'y' || mNextChar == 'Y') return "ミ" + yCollumn(mNextChar2);

    else return "ム";
}

//R Collumn
string Katakana::rCollumn(char rNextChar, char rNextChar2){

    if(rNextChar == 'a' || rNextChar == 'A') return "ラ";
    else if(rNextChar == 'i' || rNextChar == 'I') return "リ";
    else if(rNextChar == 'u' || rNextChar == 'U') return "ル";
    else if(rNextChar == 'e' || rNextChar == 'E') return "レ";
    else if(rNextChar == 'o' || rNextChar == 'O') return "ロ";
    else if(rNextChar == 'y' || rNextChar == 'Y') return "リ" + yCollumn(rNextChar2);

    else return "ル";
}


void Katakana::translateKat(string thisFile){
  int index = -1, indexWord = 0;

  //Create new text file name.
  for(int i = 0; i < thisFile.length(); i++){
    if(thisFile.substr(i) == ".txt"){
      index = i;
      break;
    }
  }
  string newName = thisFile.substr(0, index) + "KAT" + thisFile.substr(index);
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
        || line[i] == ',' || line[i] == '"' || line[i] == ':' || line[i] == '/'
        || line[i] == ';'){
          index = i;
          //cout << "wordStart: " << wordStart << '\n';
          //cout << "index: " << index << '\n';

          if(index - wordStart != 0)checkWord = line.substr(wordStart, index - wordStart);
          else checkWord = line.substr(line.length(), line.length());//break;

          //cout << "checkWord: " << checkWord << '\n';
          //cout << "length: " << checkWord.length() << '\n';

          //If char is a vowel -> Find Katakana char.
          //If consonent -> go to appropriate consonent function, find Katakana char and skip the next char.
          for (int j = 0; j < checkWord.length(); j++) {

            if(checkWord[j] == 'a' || checkWord[j] == 'A') newWord = newWord + "ア";
            else if(checkWord[j] == 'i' || checkWord[j] == 'I') newWord = newWord + "イ";
            else if(checkWord[j] == 'u' || checkWord[j] == 'U') newWord = newWord + "ウ";
            else if(checkWord[j] == 'e' || checkWord[j] == 'E') newWord = newWord + "エ";
            else if(checkWord[j] == 'o' || checkWord[j] == 'O') newWord = newWord + "オ";

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
              if (checkWord[j + 1] == 'a' || checkWord[j + 1] == 'A') newWord = newWord + "ヤ";
              else if(checkWord[j + 1] == 'u' || checkWord[j + 1] == 'U') newWord = newWord + "ユ";
              else if(checkWord[j + 1] == 'e' || checkWord[j + 1] == 'E') newWord = newWord + "イェ";
              else if(checkWord[j + 1] == 'o' || checkWord[j + 1] == 'O') newWord = newWord + "ヨ";

              j++;
            }

            else if(checkWord[j] == 'w' || checkWord[j] == 'W'){
              if (checkWord[j + 1] == 'a' || checkWord[j + 1] == 'A') newWord = newWord + "ワ";
              else if(checkWord[j + 1] == 'i' || checkWord[j + 1] == 'I') newWord = newWord + "ウィ";
              else if(checkWord[j + 1] == 'e' || checkWord[j + 1] == 'E') newWord = newWord + "ウェ";
              else if(checkWord[j + 1] == 'o' || checkWord[j + 1] == 'O') newWord = newWord + "ヲ";

              j++;
            }

            else if (checkWord[j] == 'j' || checkWord[j] == 'J') {
              if (checkWord[j + 1] == 'i' || checkWord[j + 1] == 'I'){
                newWord = newWord + "ジ";
                j++;
              }

              if (checkWord[j + 1] == 'e' || checkWord[j + 1] == 'E'){
                newWord = newWord + "ジェ";
                j++;
              }

              else if(checkWord[j + 1] == 'y' || checkWord[j + 1] == 'Y'){
                newWord = newWord + "ジ" + yCollumn(checkWord[j + 2]);
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
    cout << "NOTE: The Katakana character for \"ni\" has a glitch in which Terminal prints it as \"ニ\", which is incorrect." << '\n';
    cout << "Your translated text from the text file, " << thisFile << ", has been saved in a new text file called " << newName << '\n';
    cout << '\n';
  }

  else cout << "Unable to open file" << '\n';

  file.close();
}
