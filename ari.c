#include <stdio.h>
#include <cs50.h>
#include <math.h>
#include <ctype.h>

string ari(string s);
int count_characters(string s);
int count_words(string s);
int count_sentences(string s);

string ari(string s){
  int characters = count_characters(s);
  int words = count_words(s);
  int sentences = count_sentences(s);
  int score= (4.71* (float)characters/(float)words) + (0.5* (float)words/(float)sentences) - 21.43;
  int p= score + 1;
  string n;
  switch(p){
  case 1:
   n = "Kintergarten";
   break;
  case 2:
   n = "First/Second Grade";
   break;
  case 3:
   n = "Third Grade";
   break;
  case 4:
   n = "Fourth Grade";
   break;
  case 5:
   n = "Fifth Grade";
   break;
  case 6:
   n = "Sixth Grade";
   break;
  case 7:
   n = "Seventh Grade";
   break;
  case 8:
   n = "Eighth Grade";
   break;
  case 9:
   n = "Ninth Grade";
   break;
  case 10:
   n = "Tenth Grade";
   break;
  case 11:
   n = "Eleventh Grade";
   break;
  case 12:
   n = "Twelfth grade";
   break;
  case 13:
   n = "College student";
   break;
  case 14:
   n = "Professor";
   break;
  } 
  return n;
}

int count_characters(string s){
  int l = strlen(s);
  int num_characters = 0;
  for(int i=0; i<l; i++){
  if(isalnum(s[i])){
  num_characters += 1;
  }
  }
  return num_characters;
}

int count_words(string s){
  int l = strlen(s);
  int num_words = 0;
  for(int i=0; i<l; i++){
  if(s[i]==' '){
   num_words += 1;
  }
  }
return num_words;
}

int count_sentences(string s){
 int l = strlen(s);
 int num_sentences = 0;
 for(int i=0; i<l; i++){
  if(s[i]=='.'|| s[i]=='!'|| s[i]=='?'){
   num_sentences += 1;
  }
 }
 return num_sentences;
}





