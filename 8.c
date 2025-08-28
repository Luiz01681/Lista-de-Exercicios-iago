#include <stdio.h>
#include <math.h>

    int main() {
    int num;
    double RaizQuadrada;

    printf("Informe um número: ");
    scanf("%d", &num);

    RaizQuadrada = sqrt(num);

    printf("A raiz quadrada de %d é %.2lf\n", num, RaizQuadrada);

    return 0;
}

