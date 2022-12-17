#include <stdio.h>
int main(){
int r;  
int a, b, c;
printf("Insira o valor em reais:\n");
scanf("%d",&r);
a = r / 110;
b = (r%110)/50;
c = ((r%110)%50)/10;
printf("%d de 110, %d de 50, %d de 10.",a,b,c);
}

