#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int fx(int x){
	int result;

	result = (3*pow(x,2)) + (5*x) + 3;

return result;
}

int gy(int y){
	int result;

	result = (6*pow(y,2)) + 6;
return result;}

int main (){
	int x, y, resultado;

	printf("Supondo que f(x) = 3x^2 + 5x + 3, digite o valor de x: ");
	scanf("%d",&x);

	printf("e g(y) = 6y^2 + 6, digite o valor de y: ");
	scanf("%d",&y);

	resultado = fx(x) + gy(y);
	printf("A soma das duas funcoes e de: %d", resultado);
}
