#include <iostream>
#include <fstream>
#include <string>
#include "PigLatin.h"
#include "Hiragana.h"
#include "Katakana.h"
#include "Hangul.h"
using namespace std;

/*
Writes in and reads from textfiles.
Converts english written contents of textfiles into Pig Latin, Hiragana &
Katakana (Two of the three Japanese writing systems) and Hangul (The Korean
writing system).

Made By: Justin Pabon
*/

int main(int argc, char const *argv[]) {
  char message[] = "", newMessage[] = "";
  string fileName = "";

  int choice;

  cout << "Would you like to create a new text file (0) or translate an existing one (1)?" << endl;
  cout << "Input: ";
  cin >> choice;
  cout << '\n';

  //Error checking.
  while(choice != 0 && choice != 1){
  cout << "Invalid Input!" << '\n';
  cout << "Would you like to create a new text file (0) or translate an existing one (1)?" << endl;
  cout << "Input: ";
  cin >> choice;
  cout << '\n';
  }

  //Convert existing text file.
  if(choice == 1){
    cout << "Enter the name of the text file you wish to translate..." << '\n';
    cout << "File Name: ";
    cin >> fileName;
    cout << '\n';

    cout << "What would you like to convert the contents of your text file into?" << '\n';
    cout << "'\\pig' - Pig Latin" << '\n';
    cout << "'\\hir' - Hiragana" << '\n';
    cout << "'\\kat' - Katakana" << '\n';
    cout << "'\\han' - Hangul" << '\n';
    cout << '\n';

    cout << "Translate to: ";
    cin >> message;
    cout << '\n';

    //Error checking
    while((strcmp(message, "\\pig") != 0) && (strcmp(message, "\\hir") != 0) && (strcmp(message, "\\kat") != 0) && (strcmp(message, "\\han") != 0)){
      cout << "Invalid Input!" << '\n';

      cout << "What would you like to convert the contents of your text file into?" << '\n';
      cout << "'\\pig' - Pig Latin" << '\n';
      cout << "'\\hir' - Hiragana" << '\n';
      cout << "'\\kat' - Katakana" << '\n';
      cout << "'\\han' - Hangul" << '\n';
      cout << '\n';

      cout << "Translate to: ";
      cin >> message;
      cout << '\n';
    }
  }


//Create new text file.
else if(choice == 0){
  cout << '\n';
  cout << "Enter name for new text file: ";

  cin >> fileName;
  fileName = fileName + ".txt";
  cout << '\n';

  cout << "End each text with  '\\n' to enter a new line." << '\n';
  cout << "When you're done, use '\\end' to stop." << '\n';
  cout << "To convert text, end your input with one of the following commands for the appropriate conversion: " << '\n';
  cout << "'\\pig' - Pig Latin" << '\n';
  cout << "'\\hir' - Hiragana" << '\n';
  cout << "'\\kat' - Katakana" << '\n';
  cout << "'\\han' - Hangul (Be sure to use '-' for each word to distinguish syllables)" << '\n';
  cout << '\n';

  cout << "Enter text here..." << '\n';
  cout << '\n';

  ofstream file;
  file.open(fileName);
  while(1){
    cin >> message;

    if((strcmp(message, "\\end") == 0) || (strcmp(message, "\\pig") == 0)
    || (strcmp(message, "\\hir") == 0) || (strcmp(message, "\\kat") == 0)
    || (strcmp(message, "\\han") == 0)) break;

    if(strcmp(message, "\\n") != 0) file << message << " ";
    else file << endl;
  }
  file << endl;
  file.close();
}

  cout << '\n';

  //Convert to Pig Latin.
  if(strcmp(message, "\\pig") == 0){
    PigLatin obj;
    cout << "Translating to Pig Latin..." << '\n';

    obj.translatePL(fileName);
  }

  //Convert to Hiragana.
  if(strcmp(message, "\\hir") == 0){
    Hiragana obj;
    cout << "Translating to Hiragana..." << '\n';

    obj.translateHir(fileName);
  }

  //Convert to Katakana.
  if(strcmp(message, "\\kat") == 0){
    Katakana obj;
    cout << "Translating to Katakana..." << '\n';

    obj.translateKat(fileName);
  }

  //Convert to Hangul.
  if(strcmp(message, "\\han") == 0){
    Hangul obj;
    cout << "Translating to Hangul..." << '\n';

    obj.translateHan(fileName);
  }


  return 0;
}
