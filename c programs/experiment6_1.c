#include "stdio.h"
int main()
{
    char c;
    printf("Enter the alphabet character:");
    scanf("%c",&c);

    if(c=='a'||c=='A')
    printf("Its vowel");

    else if(c=='e'||c=='E')
    printf("It's vowel");

    else if(c=='i'||c=='I')
    printf("It's vowel");

    else if(c=='o'||c=='O')
    printf("It's vowel");

    else if(c=='u'||c=='U')
    printf("It's vowel");

    else
    printf("consonant ");

    return 0;
}
