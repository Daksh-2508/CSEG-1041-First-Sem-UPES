/*Q2: Playing with characters
Link: https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() 
{
    char ch;
    char s[50];
    char sen[90];
    
    scanf("%c",&ch);
    scanf("%s",s);
    
    getchar();
    fgets(sen,90,stdin);
    
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);   
    return 0;
}