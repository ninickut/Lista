#include <stdio.h>

int main (){
int a = 3, b =4,p;
p = a;
a = b;
b = p;
printf("%d %d",a,b);
}