#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    setlocale(LC_ALL,"portuguese"); //definindo acentuacao para o idioma | NULL para idioma do sistema
    int opcao;

    while(opcao < 1 || opcao > 3){ //confere e valida a var opcao

        printf("Escolha uma op��o:\n");
        printf("Op��o 1\n");
        printf("Op��o 2\n");
        printf("Op��o 3\n");

        printf("\nOp��o: ");
        scanf("%d", &opcao);

    switch(opcao){
    case 1:
        system ("cls");
        printf("Op��o [1] foi escolhida.\n");
        break;
    case 2:
        system ("cls");
        printf("Op��o [2] foi escolhida.\n");
        break;
    case 3:
        system ("cls");
        printf("Op��o [3] foi escolhida.\n");
        break;
    default:
        system("cls");
        printf("Op��o inv�lida.\n");

        }
    }
}
