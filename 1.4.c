#include <stdio.h>
int main() {
  int a, b, c, d, f;
  float g;
  printf("Inserir dimensões da casa:");
  scanf("%d %d", &a, &b);
  printf("Inserir dimensões do terreno:");
  scanf("%d %d", &c, &d);
  f = (c * d) - (a * b);
  g = ((a*b)*100)/(c*d);
  printf("São %d metros quadrados livres, equivale a %.2f %% do terreno.", f, g);
}
