//Programa onde o usuário deve digitar o tamanho de um vetor
//Faz alocação dinâmica de memória
//Em seguida, lê seus valores e mostra quantos dos números são pares e quantos são ímpares

#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, contP = 0, contI = 0;
    int *num;

    printf ("Digite o tamanho do vetor: ");
    scanf ("%d", &n);
    num = (int *)malloc(n * sizeof(int));
   

    for (int i = 0; i < n; i++){
        printf ("Digite um número: ");
        scanf ("%d", &num [i]);
    }

    for (int i = 0; i < n; i++){
        if (num [i] % 2 == 0){
            contP++; 
        } else {
            contI++;
        }
    }

    printf ("Dos valores digitados, %d são pares \n", contP);
    printf ("Dos valores digitados, %d são ímpares \n", contI);


    free(num);

    return 0;

}

