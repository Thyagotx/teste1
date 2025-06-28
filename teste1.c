#include <stdio.h>

int main()
{

    char produtoA[30] = "Produto A" char produtoB[30] = "Produto B"

        unsigned int estoqueA = 1000;
    unsigned int estoqueB = 2000;

    float valorA = 10.50;
    float valorB = 20.40;

    unsigned int estoqueMinimoA = 500;
    unsigned int estoqueMinimoB = 2500;

    double valorTotalA;
    double valorTotalB;

    printf("Produto %s tem esqoque %u e o valor unitário é %f\n", produtoA, estoqueA, valorA);
    printf("Produto %s tem esqoque %u e o valor unitário é %f\n", produtoB, estoqueB, valorB);

    resultadoA = estoqueA > estoqueMinimoA;
    resultadoB = estoqueB > estoqueMinimoB;

    printf("Produto %s tem esqoque %u e o valor unitário é %d\n", produtoA, resultadoA);
    printf("Produto %s tem esqoque %u e o valor unitário é %d\n", produtoB, resultadoB);

    printf("O valor totaç de A é ,maior que o valor total de B (R%f): %d\n",
                                                estoqueA * valorA,
                                                estoqueB * valorB,
                                                (estoqueA * valorA) > (estoqueB * valorB));
}
