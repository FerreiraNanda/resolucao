#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char string [100];
    int aux = 0;

    printf("Digite uma palavra:");
    fgets(string, sizeof(string), stdin);

    for(int i = 0; i < strlen(string); i++){
        if(string[i] == 'a' || string[i] == 'A'){
            aux++;
        }
    }

    if( aux > 0){
        printf("A quantidade de caracteres 'a' presente na palavra e: %d\n", aux);
    }else{
        printf("a palavra nao possui caracteres 'a'\n");
    }


}