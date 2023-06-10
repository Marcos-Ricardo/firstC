#include <stdio.h>
#include <stdlib.h>

int main(){
    char name[50];
    int idade;

    printf("\nDigite o seu nome: ");
    scanf("%s", name);

    printf("\nSua idade: ");
    scanf("%i", &idade);

    system("cls");

    printf("\nSeu nome eh %s", name);
    printf("\nVoce tem %ianos", idade );

    return 0;
}