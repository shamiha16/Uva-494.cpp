#include<stdio.h>
#include<ctype.h>
int main(){
    char ch;
    int c=0,in_word=0;
    while((ch=fgetchar())!=EOF){
          if(isalpha(ch))
             {in_word=1;}
             else if (isspace(ch)&& in_word)
               {

               c++;
                in_word=0;
             }}
             if (in_word)
             {
                c++;}
            printf("%d\n",c);
            return 0;}


