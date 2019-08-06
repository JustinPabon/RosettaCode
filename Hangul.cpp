#include <iostream>
#include <fstream>
#include <string>
#include "Hangul.h"
using namespace std;

/*
Converts english written text into Hangul.
Made By: Justin Pabon
*/

bool Hangul::isAVowel(char thisVowel){
  if(thisVowel == 'a' || thisVowel == 'A' || thisVowel == 'e' ||
  thisVowel == 'E' || thisVowel == 'i' || thisVowel == 'I' ||
  thisVowel == 'o' || thisVowel == 'O' || thisVowel == 'u' ||
  thisVowel == 'U' || thisVowel == 'y' || thisVowel == 'Y') return true;

  else return false;
}

string Hangul::vowels(string syllable){

  if(syllable[0] == 'a' || syllable[0] == 'A'){
    if(syllable[1] == 'e' || syllable[1] == 'E') return "애";
    else return "아";
  }

  else if(syllable[0] == 'e' || syllable[0] == 'E'){
    if(syllable[1] == 'o' || syllable[1] == 'O') return "어";
    else if(syllable[1] == 'u' || syllable[1] == 'U') return "으";
    else return "에";
  }

  else if(syllable[0] == 'o' || syllable[0] == 'O') return "오";

  else if(syllable[0] == 'u' || syllable[0] == 'U') return "우";

  else if(syllable[0] == 'i' || syllable[0] == 'I') return "이";

  else if(syllable[0] == 'y' || syllable[0] == 'Y'){
    //if(syllable[1] == 'a' || syllable[1] == 'A') return "야";
    if((syllable[1] == 'a' || syllable[1] == 'A') && (syllable[2] == 'e' || syllable[2] == 'E')) return "얘";
    else if((syllable[1] == 'a' || syllable[1] == 'A') && (syllable[2] != 'e' && syllable[2] != 'E')) return "야";

    else if(syllable[1] == 'e' || syllable[1] == 'E'){
      if(syllable[2] == 'o' || syllable[2] == 'O') return "여";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      //else if(!isAVowel(syllable[2])) return "예";
      else return "예";
    }

    else if(syllable[1] == 'u' || syllable[1] == 'U') return "유";
    else if(syllable[1] == 'o' || syllable[1] == 'O') return "요";
    else return syllable;
  }

  else return syllable;
}

string Hangul::gChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "개";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "가";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "거";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";

    else return "게";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "고";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "구";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "기";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "걔";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "갸";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "겨";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "계";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "교";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "규";

    else return syllable;
  }

  else return "ㄱ";
}

string Hangul::kChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "캐";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "카";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "커";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "크";

    else return "케";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "코";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "쿠";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "키";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "컈";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "캬";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "켜";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "켸";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "쿄";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "큐";

    else return syllable;
  }

  else return "ㅋ";
}

string Hangul::nChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "내";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "나";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "너";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "느";

    else return "네";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "노";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "누";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "니";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "냬";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "냐";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "녀";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "녜";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "뇨";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "뉴";

    else return syllable;
  }

  else return "ㄴ";
}

string Hangul::dChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "대";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "다";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "더";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "드";

    else return "데";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "도";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "두";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "디";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "댸";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "댜";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "뎌";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "뎨";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "됴";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "듀";

    else return syllable;
  }

  else return "ㄷ";
}

string Hangul::tChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "태";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "타";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "터";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "트";

    else return "테";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "토";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "투";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "티";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "턔";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "탸";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "텨";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "톄";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "툐";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "튜";

    else return syllable;
  }

  else return "ㅌ";
}

string Hangul::rChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "래";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "라";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "러";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "르";

    else return "레";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "로";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "루";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "리";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "럐";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "랴";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "려";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "례";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "료";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "류";

    else return syllable;
  }

  else return "ㄹ";
}

string Hangul::mChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "매";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "마";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "머";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "므";

    else return "메";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "모";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "무";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "미";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "먜";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "먀";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "며";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "몌";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "묘";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "뮤";

    else return syllable;
  }

  else return "ㅁ";
}

string Hangul::bChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "배";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "바";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "버";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "브";

    else return "베";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "보";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "부";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "비";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "뱨";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "뱌";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "벼";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "볘";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "뵤";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "뷰";

    else return syllable;
  }

  else return "ㅂ";
}

string Hangul::pChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "패";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "파";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "퍼";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "프";

    else return "페";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "포";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "푸";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "피";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "퍠";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "퍄";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "펴";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "폐";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "표";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "퓨";

    else return syllable;
  }

  else return "ㅍ";
}

string Hangul::sChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "새";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "사";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "서";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "스";

    else return "세";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "소";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "수";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "시";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "섀";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "샤";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "셔";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "셰";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "쇼";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "슈";

    else return syllable;
  }

  else return "ㅅ";
}

string Hangul::jChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "재";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "자";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "저";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "즈";

    else return "제";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "조";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "주";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "지";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "쟤";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "쟈";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "져";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "졔";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "죠";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "쥬";

    else return syllable;
  }

  else return "ㅈ";
}

string Hangul::chChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "채";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "차";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "처";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "츠";

    else return "체";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "초";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "추";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "치";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "챼";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "챠";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "쳐";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "쳬";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "쵸";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "츄";

    else return syllable;
  }

  else return "ㅊ";
}

string Hangul::hChar(string syllable){
  if(syllable[1] == 'a' || syllable[1] == 'A'){
    if(syllable[2] == 'e' || syllable[2] == 'E') return "해";
    //else if(syllable[2] == 'u' || syllable[2] == 'U') return "그";


    else return "하";
  }

  else if(syllable[1] == 'e' || syllable[1] == 'E'){
    if(syllable[2] == 'o' || syllable[2] == 'O') return "허";
    else if(syllable[2] == 'u' || syllable[2] == 'U') return "흐";

    else return "헤";
  }

  else if(syllable[1] == 'o' || syllable[1] == 'O') return "호";

  else if(syllable[1] == 'u' || syllable[1] == 'U') return "후";

  else if(syllable[1] == 'i' || syllable[1] == 'I') return "히";

  else if(syllable[1] == 'y' || syllable[1] == 'Y'){
    if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] == 'e' || syllable[3] == 'E')) return "햬";
    else if((syllable[2] == 'a' || syllable[2] == 'A') && (syllable[3] != 'e' && syllable[3] != 'E')) return "햐";

    else if(syllable[2] == 'e' || syllable[2] == 'E'){
      if(syllable[3] == 'o' || syllable[3] == 'O') return "혀";
      //else if(syllable[3] == 'u' || syllable[3] == 'U') return "겨";
      else return "혜";
    }

    else if(syllable[2] == 'o' || syllable[2] == 'O') return "효";

    else if(syllable[2] == 'u' || syllable[2] == 'U') return "휴";

    else return syllable;
  }

  else return "ㅎ";
}


void Hangul::translateHan(string thisFile){
  int index = -1, indexWord = 0;

  //Create new text file name.
  for(int i = 0; i < thisFile.length(); i++){
    if(thisFile.substr(i) == ".txt"){
      index = i;
      break;
    }
  }
  string newName = thisFile.substr(0, index) + "HAN" + thisFile.substr(index);
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

          for (int j = 0; j < checkWord.length(); j++) {
            if(isAVowel(checkWord[j])){
              newWord = newWord + vowels(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2])) j = j + 2;
              else;
            }

            else if(checkWord[j] == 'g' || checkWord[j] == 'G'){
              newWord = newWord + gChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if(checkWord[j] == 'k' || checkWord[j] == 'K'){
              newWord = newWord + kChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if((checkWord[j] == 'n' || checkWord[j] == 'N') && (checkWord[j + 1] != 'g' && checkWord[j + 1] != 'G')){
              newWord = newWord + nChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if((checkWord[j] == 'n' || checkWord[j] == 'N') && (checkWord[j + 1] == 'g' || checkWord[j + 1] == 'G')){
              newWord = newWord + "ㅇ";
              j++;
            }

            else if(checkWord[j] == 'd' || checkWord[j] == 'D'){
              newWord = newWord + dChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if(checkWord[j] == 't' || checkWord[j] == 'T'){
              newWord = newWord + tChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if(checkWord[j] == 'r' || checkWord[j] == 'R' || checkWord[j] == 'l' || checkWord[j] == 'L'){
              newWord = newWord + rChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if(checkWord[j] == 'm' || checkWord[j] == 'M'){
              newWord = newWord + mChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if(checkWord[j] == 'b' || checkWord[j] == 'B'){
              newWord = newWord + bChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if(checkWord[j] == 'p' || checkWord[j] == 'P'){
              newWord = newWord + pChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if(checkWord[j] == 's' || checkWord[j] == 'S'){
              newWord = newWord + sChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if(checkWord[j] == 'j' || checkWord[j] == 'J'){
              newWord = newWord + jChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if((checkWord[j] == 'c' || checkWord[j] == 'C') && (checkWord[j + 1] == 'h' || checkWord[j + 1] == 'H')){
              newWord = newWord + chChar(checkWord.substr(j + 1));
              if(isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3]) && !(isAVowel(checkWord[j + 4]))) j = j + 3;
              else if(isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3]) && isAVowel(checkWord[j + 4])) j = j + 4;
              else;
            }

            else if(checkWord[j] == 'h' || checkWord[j] == 'H'){
              newWord = newWord + hChar(checkWord.substr(j));
              if(isAVowel(checkWord[j + 1]) && !(isAVowel(checkWord[j + 2]))) j++;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && !(isAVowel(checkWord[j + 3]))) j = j + 2;
              else if(isAVowel(checkWord[j + 1]) && isAVowel(checkWord[j + 2]) && isAVowel(checkWord[j + 3])) j = j + 3;
              else;
            }

            else if(checkWord[j] == '-') j = j;

            else newWord += checkWord[j];

          }

          //cout << "newWord: " << newWord << endl;

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
    cout << "PLEASE NOTE: The translated writing does not encompass all 11K+ Hangul syllable blocks."
    " This translation only uses consanant + vowel combinations and all subsequent consanants that may exist for a syllable are simply placed to the right of the respected block." << '\n';
    cout << "Your translated text from the text file, " << thisFile << ", has been saved in a new text file called " << newName << '\n';
    cout << '\n';
  }

  else cout << "Unable to open file" << '\n';

  file.close();
}
