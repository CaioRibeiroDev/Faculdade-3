#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define PI 3.14



int main(){

int D,DHOR,altura;
float ang_graus,ang_rad,cosseno;
printf("Qual o valor do angulo? ");
scanf("%f",&ang_graus);

ang_rad=3.14*ang_graus/180;
printf(" em radianos: %f\n ",ang_rad);

cosseno=cos(ang_rad);


printf("Qual o valor de D?\n");
scanf("%d",&D);


DHOR=D*cosseno;

altura=sqrt((D*D)-(DHOR*DHOR));

printf("DHOR:%d\n",DHOR);
printf("Altura:%d",altura);


}
