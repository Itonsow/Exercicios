#include <stdio.h>
#include <stdlib.h>

#define x 5
#define y 5

int main(){

    int matriz[x][y], maior = -99999, i, j, somaColuna = 0, matrizTroca1[x][y], vetor[y];

    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            scanf("%d", &matriz[i][j]);
        }
    }

    system("cls");

    printf("-----------------------------------------------------------------------\n");
    printf("\t\tMatriz Original\n");
    for(i = 0; i < x; i++){
        printf("\t|\t");
        for(j = 0; j < y; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("|\n");
    }
    printf("\n-----------------------------------------------------------------------\n");

    printf("\t\tMaior de cada linha:\n\n");
    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            if(maior < matriz[i][j]){
                maior = matriz[i][j];
            }
        }
        printf("\tLinha %d - %d\n", i+1, maior);
        maior = -99999;
    }
    printf("\n-----------------------------------------------------------------------\n");

    printf("\t\tSoma das colunas:\n\n");
    for(j = 0; j < x; j++){
        for(i = 0; i < y; i++){
            somaColuna += matriz[i][j];
        }
        printf("\tColuna %d - %d\n", j+1, somaColuna);
        somaColuna = 0;
    }

    printf("\n-----------------------------------------------------------------------\n");

    printf("\t\tMatriz(linha 1 trocada com a linha 4)\n\n");

    for(i = 0; i < x; i++){
        for(j = 0; j < y; j++){
            matrizTroca1[i][j] = matriz[i][j];
        }
    }

    for(j = 0; j < x; j++){
        matrizTroca1[0][j] = matriz[3][j];
        matrizTroca1[3][j] = matriz[0][j];
    }

    for(i = 0; i < x; i++){
        printf("\t|\t");
        for(j = 0; j < y; j++){
            printf("%d\t", matrizTroca1[i][j]);
        }
        printf("|\n");
    }

    printf("\n-----------------------------------------------------------------------\n");

    printf("\t\tMatriz(coluna 2 trocada com a coluna 5)\n\n");

    for(i = 0; i < x; i++){
        vetor[i] = matrizTroca1[i][1];
    }

    for(i = 0; i < x; i++){
        matrizTroca1[i][1] = matrizTroca1[i][4];
        matrizTroca1[i][4] = vetor[i];
    }

    for(i = 0; i < x; i++){
        printf("\t|\t");
        for(j = 0; j < y; j++){
            printf("%d\t", matrizTroca1[i][j]);
        }
        printf("|\n");
    }

    printf("\n-----------------------------------------------------------------------\n");

    return 0;
}
