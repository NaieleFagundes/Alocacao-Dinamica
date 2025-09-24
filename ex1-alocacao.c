//programa que aloca dinamicamente um array de 5 números inteiros
//O usuário deve digitar os 5 números no espaço alocado
//Mostra na tela os 5 números,
//Por fim, libera a memória alocada

#include <stdio.h>
#include <stdlib.h>

int main(){
    int *num;
    num = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++){
        printf ("Digite um número: ");
        scanf ("%d", &num [i]);
    }

    printf ("Numeros digitados: \n");

    for (int i = 0; i < 5; i++){
        printf ("%d ", num [i]);
    }

    free(num);

    return 0;

}

