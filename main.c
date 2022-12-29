#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "projeto.h"

#define BUFFER 64

// Inicia a funçao principal do programa
int main(void)
{

    char escolha; // Cria uma variavel do tipo char

    do
    {

        fprintf(stdout, "\n\t\tCadastro de Clientes\n\n");
        fprintf(stdout, "Escolha uma opcao: \n"); // Lê a opcao escolhida pelo usuario
        fprintf(stdout, "1 - Insere Dados\n");
        fprintf(stdout, "2 - Exibe Dados\n");
        fprintf(stdout, "3 - Busca por codigo\n");
        fprintf(stdout, "4 - Buscar por nome\n");
        fprintf(stdout, "5 - Editar por codigo\n");
        fprintf(stdout, "6 - Remover por codigo\n");
        fprintf(stdout, "7 - Sair\n\n");

        scanf("%c", &escolha); // Lê o que foi escolhido pelo usuario

        switch (escolha) // Abre um switch
        {
        case '1': // Caso seja digitada a opçao 1, chama a funçao insere dados
            insere();
            break;

        case '2': // Caso seja digitada a opçao 3, chama a funçao exibe dados
            exibe();
            break;

        case '3': // Caso seja digitada a opçao 3, chama a funçao busca por codigo
            busca_codigo1();
            break;

        case '4': // Caso seja digitada a opçao 4, chama a funçao busca por nome
            busca_nome();
            break;

        case '5': // Caso seja digitada a opçao 5, chama a funçao busca por codigo com a opçao de alterar
            busca_codigo2();
            break;

        case '6': // Caso seja digitada a opçao 6, chama a funçao busca por codigo com a opçao de deletar
            busca_codigo3();
            break;

        case '7': // Caso seja digitada a opçao 7, ele fecha o programa
            exit(0);
            break;

        default:
            fprintf(stderr, "Digite uma opcao valida!\n"); // Caso nenhuma das opçoes acima sejam digitadas, ele mostra a mensagem
            sleep(1); // Espera 1 segundo para dar continuidade ao programa
            break;
        }

        getchar(); // Lê o que foi digitado pelo usuário
    }

    while (escolha > 0);

}
