#include <stdio.h>
#include "mie funzioni.h"
int main(void) {
    float lato;
    printf("inserisci lato: ");
    scanf("%f", &lato);
    printf("area: %f\n", area(lato));
}

