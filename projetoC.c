#include <stdio.h>
#include <stdlib.h>

void printNames(char name[], int idade){
        printf("\nSeu nome eh %s", name);
        printf("\nVoce tem %ianos", idade );
    }

int main(){
    char name[50];
    int idade;

    printf("\nDigite o seu nome: ");
    scanf("%s", name);

    printf("\nSua idade: ");
    scanf("%i", &idade);

    system("cls");

    

    printNames(name, idade);
    return 0;
}