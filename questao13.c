#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// Função para ordenar um vetor
void ordenar(int v[]) {
    int i, j, aux;

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (v[i] < v[j]) {
                aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
        }
    }
}

// Função principal
int main() {
    setlocale(LC_ALL, "portuguese");

    int v1[10], v2[10], v3[10], k;

    // Pedir entrada do usuário para cada vetor
    for (k = 0; k < 10; k++) {
        printf("Digite o valor %d para o vetor 1: ", k);
        scanf("%d", &v1[k]);
    }

    printf("\n");

    for (k = 0; k < 10; k++) {
        printf("Digite o valor %d para o vetor 2: ", k);
        scanf("%d", &v2[k]);
    }

    printf("\n");

    for (k = 0; k < 10; k++) {
        printf("Digite o valor %d para o vetor 3: ", k);
        scanf("%d", &v3[k]);
    }

    // Ordenar cada vetor
    ordenar(v1);
    ordenar(v2);
    ordenar(v3);

    // Imprimir cada vetor ordenado
    printf("\n\nVetor 1 ordenado\n");
    for (k = 0; k < 10; k++) {
        printf("%d ", v1[k]);
    }

    printf("\n\nVetor 2 ordenado\n");
    for (k = 0; k < 10; k++) {
        printf("%d ", v2[k]);
    }

    printf("\n\nVetor 3 ordenado\n");
    for (k = 0; k < 10; k++) {
        printf("%d ", v3[k]);
    }

    // Esperar que o usuário pressione Enter antes de encerrar o programa
    printf("\n\nPressione Enter para sair...");
    scanf("%*c");

    return 0;
}
