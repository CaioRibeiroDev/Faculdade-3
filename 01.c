#include<stdio.h>
#include<stdlib.h>

struct registro{
    char profissao[20];
    int codigo;
};

typedef struct registro ficha;

int main(){
    int X;
    int procurar;

    ficha registro[20];

    for(X=0;X<20;X++){
        printf("\nDigite o codigo da profissao [%d] : ", X);
        scanf("%d",&registro[X].codigo);
        printf("Digite o nome da profissao: ");
        scanf("%s",&registro[X].profissao);
        system("cls");
    }

    system("cls");
    system("pause");

    printf("\nDigite o codigo: ");
    scanf("%d",&procurar);

    for(X=0;X<20;X++){
        if(procurar==registro[X].codigo)
        printf("\n\nProfissao selecionada: %s",registro[X].profissao);
    }
}
