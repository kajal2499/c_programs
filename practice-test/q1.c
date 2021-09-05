#include<stdio.h>
int main()
{
    char c;
    int big_c,small_c;
    printf(" a character");
    scanf("%c", &c);
    small_c = (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
    big_c = (c=='A'||c=='E'||c=='I'||c=='O'||c=='U');
    if(small_c||big_c)
     printf("%c is a vowel",c);
     else
     printf("%c is a consonent",c);
     return 0;
}