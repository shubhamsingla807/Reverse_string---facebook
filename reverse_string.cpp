
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

void reverse(char *begin, char *end){
     char temp;
     while(begin<end){
        temp = *begin;
        *begin++ = *end;
        *end-- = temp;
     }
}

void reversewords(char* s){
    char* word_begin = NULL;
    char* temp =s;

    while(*temp){
        if((word_begin == NULL) && (*temp!= ' ' )){
            word_begin = temp;
        }
        if(word_begin && ((*(temp+1) == ' ') || (*(temp + 1) == '\0'))){
            reverse(word_begin,temp);
            word_begin = NULL;
        }
        temp++;
    }
}

int main(){
   char s[1000];
   cin.get(s,1000);
   char* temp = s;
   reversewords(s);
   cout<<s;
   return 0;

}
