//Programa que recebe do usuário o tamanho de uma string e chama uma função para alocar dinamicamente essa string 
//Após, o usuário deve informar o conteúdo dessa string
//O programa imprime a string sem suas vogais.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* alocaString (int num){
    char *str = malloc ((num + 1 ) *sizeof (char)); 
    return str;

}

int vogal (char c) {
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');

}

int main(){
    
    int n;
    printf ("Digite o tamanho da string: ");
    scanf ("%d", &n);

    char *txt = alocaString (n);

    getchar();

    printf ("Informe o conteúdo da string: ");
    fgets(txt, n +1, stdin);


    printf ("String sem as vogais: ");
    for (size_t i = 0; i<strlen(txt); i++){
        if (!vogal (txt [i])){
            printf ("%c", txt [i]);
        }
    }

    free(txt);

    return 0;

}

