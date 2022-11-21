#include <stdio.h>
#include <stdlib.h>

struct Estrutura1{

int meses_atrasos;
int identificacao;
float multa;
float imposto;

};
typedef struct Estrutura1 registro;

int main(){

int x,pergunta,contador=0;

registro imovel[100];

do{
printf("Digite a identificacao do imovel: ");
scanf("%d",&imovel[contador].identificacao);


printf("Digite quantos meses esta atraso: ");
scanf("%d",&imovel[contador].meses_atrasos);

printf("Qual o valor do imposto?\n ");
scanf("%f",&imovel[contador].imposto);


if(imovel[contador].imposto<=500){
    imovel[contador].multa=500*0.01;
}

if(imovel[contador].imposto>501 && imovel[contador].imposto<1800){
    imovel[contador].multa=700*0.02;
}

if(imovel[contador].imposto>1801 && imovel[contador].imposto<5000){
    imovel[contador].multa=2000*0.04;
}

if(imovel[contador].imposto>5001 && imovel[contador].imposto<12000){
    imovel[contador].multa=6000*0.07;

}

if(imovel[contador].imposto>12000){
    imovel[contador].multa=12000*0.1;
}


printf("Quer ir de novo? 1- repete e 2- nao repete");
scanf("%d",&pergunta);

contador++;

}while(pergunta==1);


for(x=0;x<contador;x++){
    printf("Identificacao do imovel:%d \n",imovel[x].identificacao);
    printf("Valor do imposto:%f \n",imovel[x].imposto);
    printf("Meses atrasados: %d\n",imovel[x].meses_atrasos);
    printf("Multa a ser paga:%f\n",imovel[x].multa);
}



}
