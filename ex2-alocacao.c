//programa que lê do usuário o tamanho de um vetor a ser lido e faz a alocação dinâmica de memória
//Em seguida, lê os valores e imprime o vetor lido

#include <stdio.h>
#include <stdlib.h>

void vetor (int *v, int num){
    for (int i = 0; i < num; i++){
        printf ("Digite um número: ");
        scanf ("%d", &v [i]);
    }

}

int main(){
    
    int n;
    printf ("Digite o tamanho do vetor a ser lido: ");
    scanf ("%d", &n);
    
    int *vet = malloc (n * sizeof (int));

    vetor (vet, n);

    printf ("Valores do vetor: ");
    for (int i = 0; i < n; i++){
        printf ("%d ", vet[i]);
    }

    free(vet);

    return 0;

}

