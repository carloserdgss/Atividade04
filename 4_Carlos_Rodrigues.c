#include <stdio.h>
int main(void) {
  
  int a, b;

  printf("Digite o numero A: \n");
  scanf(" %d", &a);
  printf("Digite o numero B: \n");
  scanf(" %d", &b);

  if (a > b) {
    printf("O nÃºmero A Ã© maior que b...");
  }
  
  if (a == b) {
    printf("Os dois nÃºmeros sÃ£o iguais...");
  }
  
  if (b > a) {
    printf("O nÃºmero B Ã© maior que A...");
  }

  return 0;
}
