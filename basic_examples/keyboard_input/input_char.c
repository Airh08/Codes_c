#include <stdio.h>
#include<stdlib.h>

int main(){
    char testInput; //local variable and char type that will be assignerd the input
    printf("Enter an character: ");
    scanf("%c", &testInput);
    printf("You entered %c", testInput);
    printf("\n");
    system("pause");
}