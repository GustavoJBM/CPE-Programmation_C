#include <stdio.h>

// Définition de la fonction factorielle
int factorielle(int num) {
  if (num == 0) {
    printf("fact(0): 1\n");
    return 1;
  } else {
    long long valeur = num * factorielle(num - 1);
    printf("fact(%d): %llu\n", num, valeur);
    return (valeur);
  }
}

int main() {
  int n;
  
  factorielle(13);

  return 0;
}