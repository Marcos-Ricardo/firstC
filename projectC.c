#include <stdio.h>
#include <stdlib.h>

void printNames(char name[], int age){
        printf("\nYour name is %s", name);
        printf("\nYou are %i years old", age );
    }

int main(){
    char name[50];
    int age;

    printf("\nType your name : ");
    scanf("%s", name);

    printf("\nAge: ");
    scanf("%i", &age);

    system("cls");

    

    printNames(name, age);
    return 0;
}