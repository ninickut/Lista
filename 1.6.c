#include <stdio.h>
int main() {
  int a, b, c, contador = 0;
  printf("Inserir 3 inteiros:\n");
  scanf("%d %d %d",&a,&b,&c);
  if(a%2 != 0){
    contador = contador +1;
  }
  if(b%2 != 0){
    contador = contador +1;
  }
  if(c%2 != 0){
    contador = contador +1;
  }
}
