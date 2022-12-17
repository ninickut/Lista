#include <stdio.h>
int main() {
  int a, c, f;
  float g;
  printf("Inserir raio da casa:");
  scanf("%d", &a);
  printf("Inserir raio do terreno:");
  scanf("%d", &c);
  f = (c *c * 3.14) - (a * a * 3.14);
  g = ((a * a * 3.14 )*100)/(c * c * 3.14);
  printf("São %d metros quadrados livres, equivale a %.2f %% do terreno.", f, g);
}
