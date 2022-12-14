#include <stdio.h>
#include <string.h>
#include <omp.h>

int main(void) {
  char* frase = "INF-317 Sistemas En Tiempo Real Y Distribuido Maritza Ramos Condori";
  int contador = 0;
  #pragma omp parallel
  {
        while (frase[++contador] != 0);
  }
  
  printf("La longitud de la frase '%s' es %d", frase, contador);

  return 0;
}