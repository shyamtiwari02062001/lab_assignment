#include<stdio.h>
#include<stdlib.h>
int main(){
    char ch;
    printf("Enter a character to check that it is vowel or consonant\n");
    scanf("%c",&ch);
    if(ch=='a' || ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U' )
    {
        printf("%c is a vowel\n",ch);
    }
    else{
        printf("%c is a consonant\n",ch);
    }
}