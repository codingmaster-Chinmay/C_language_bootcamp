/*Recieve a character from user and program should print if the character is :
lower case
upper case
digit
Other

*/

#include<stdio.h>
int main()
{
    char myCharacter;
    printf("Enter a character: ");
    scanf("%c",&myCharacter);

    if (myCharacter >= 'A' && myCharacter <= 'Z')
        printf("It is a uppercase !\n");
    else if(myCharacter >= 'a' && myCharacter <= 'z')
        printf("It is a lowercase !\n");
    else if (myCharacter >= '0' && myCharacter <= '9')
        printf("It is a digit ! \n");
    else
        printf("Other..\n");
    return 0;

}