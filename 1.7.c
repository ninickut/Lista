#include <stdio.h>
int main(){
int r;  
int a, b, c, d, f;
printf("Insira o valor em reais:\n");
scanf("%d",&r);
a = r / 100;
b = (r%100)/50;
c = ((r%100)%50)/10;
d = (((r%100)%50)%10)/5;
f = (((r%100)%50)%10)%5;
printf("%d de 100, %d de 50, %d de 10, %d de 5, %d de 1.",a,b,c,d,f);
}

