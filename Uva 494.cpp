#include<stdio.h>
#include<string.h>
int main()
{
    char text[10000];
    int i,word,strt;
    while(gets(text))
    {
        word=0;
        strt=0;
        for(i=0;text[i]!='\0';i++)
        {
            if((text[i]>='a' && text[i]<='z')||(text[i]>='A' && text[i]<='Z') )
                strt=1;
            else
            {
                if(strt)
                {
                    word++;
                    strt=0;
                }
            }
        }
        if(text[i]=='\0'&&strt==1)
            word++;
        printf("%d\n", word);
    }
    return 0;

}



