#include <stdio.h>
#include<stdlib.h>

int main(){
    char testInput[255]; //local variable and char of length 255 type that will be assignerd the input
    printf("Enter a word: ");
    scanf("%s", &testInput);
    printf("You entered: %s", testInput);
    printf("\n");
    system("pause");
}