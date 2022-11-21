#include<stdlib.h>
#include<stdio.h>

void media(float n1, float n2, float n3, char letter[1]) {
    float resultado;
    int p1=4, p2=3, p3=3;

    if(letter == "A") {
        resultado = (n1+n2+n3) / 3;
    }else if (letter == "P") {
        resultado = (n1*p1 + n2*p2 + n3*p3) / (p1+p2+p3);
    }

    printf("%.2f", resultado);
}

void main() {
    float n1, n2, n3;
    char letter[1];

    printf("Digite a primeira nota: ", n1);
    scanf("%f", &n1);
    printf("Digite a segunda nota: ", n2);
    scanf("%f", &n2);
    printf("Digite a terceira nota: ", n3);
    scanf("%f", &n3);

    printf("\nMEDIA ARITMETICA:");
    media(n1, n2, n3, "A");

    printf("\nMEDIA PONDERADA: ");
    media(n1, n2, n3, "P");
}
