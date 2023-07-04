#include<stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("Enter a Character: ");
    scanf("%c", &ch);
    if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
        printf("\n%c is an Alphabet", ch);
    else
        printf("\n%c is not an Alphabet", ch);
    getch();
    return 0;
}