#include <stdio.h>
int main (){
  int f,c;
  printf("Insira a temperatura em fahrenheit:");
  scanf("%d",&f);
  c = (5*(f-32))/9;
  printf ("%d Celcius",c);
  
}
