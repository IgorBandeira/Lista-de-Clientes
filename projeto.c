#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "projeto.h"

#define BUFFER 64

Dados *principal = NULL;
// Inicia a fun��o "inicia_dados"
Dados *inicia_dados(int *codigo, char *nome, char *empresa, char *departamento, long int telefone, long int celular, char *email)
// As vari�veis que ser�o usadas na fun��o
{

    Dados *novo; // Declara��o do Ponteiro

    novo = (Dados *)malloc(sizeof(Dados)); // Aloca��o din�mica de mem�ria, alocando de acordo com a qtd de bytes da vari�vel "Dados"
    novo->codigo = codigo; // Aloca a quantidade de mem�ria da vari�vel interia "codigo"
    novo->nome = (char *)malloc(strlen(nome) + 1); // A fun��o strlen recebe a vari�vel "nome" como par�metro e aloca a qtd + 1 bytes de mem�ria
    strncpy(novo->nome, nome, strlen(nome) + 1); // A fun��o strncpy copia os caracteres da string at� que caia em uma string nula. A fun��o strlen recebe a vari�vel "nome" como par�metro e aloca a qtd + 1 bytes de mem�ria
    novo->empresa = (char *)malloc(strlen(empresa) + 1); // A fun��o strlen recebe a vari�vel "empresa" como par�metro e aloca a qtd + 1 bytes de mem�ria
    strncpy(novo->empresa, empresa, strlen(empresa) + 1); // A fun��o strncpy copia os caracteres da string at� que caia em uma string nula. A fun��o strlen recebe a vari�vel "empresa" como par�metro e aloca a qtd + 1 bytes de mem�ria
    novo->departamento = (char *)malloc(strlen(departamento) + 1); // A fun��o strlen recebe a vari�vel "departamento" como par�metro e aloca a qtd + 1 bytes de mem�ria
    strncpy(novo->departamento, departamento, strlen(departamento) + 1); // A fun��o strncpy copia os caracteres da string at� que caia em uma string nula. A fun��o strlen recebe a vari�vel "departamento" como par�metro e aloca a qtd + 1 bytes de mem�ria
    novo->telefone = telefone; // Aloca a quantidade de mem�ria da vari�vel interia "telefone"
    novo->celular = celular; // Aloca a quantidade de mem�ria da vari�vel interia "celular"
    novo->email = (char *)malloc(strlen(email) + 1); // A fun��o strlen recebe a vari�vel "email" como par�metro e aloca a qtd + 1 bytes de mem�ria
    strncpy(novo->email, email, strlen(email) + 1); // A fun��o strncpy copia os caracteres da string at� que caia em uma string nula. A fun��o strlen recebe a vari�vel "email" como par�metro e aloca a qtd + 1 bytes de mem�ria
    novo->proximo = NULL; // Para que os dados sejam poss�veis de serem lidos

    return novo;
}

// Inicia a fun��o que insere os dados na struct
Dados *insere_dados(Dados *dados, int *codigo, char *nome, char *empresa, char *departamento, long int telefone, long int celular, char *email)
// As vari�veis que ser�o usadas na fun��o
{

    Dados *novo;

    novo = (Dados *)malloc(sizeof(Dados)); // Aloca��o din�mica de mem�ria, alocando de acordo com a qtd de bytes da vari�vel "Dados"
    novo->codigo = codigo; // Aloca a quantidade de mem�ria da vari�vel interia "codigo"
    novo->nome = (char *)malloc(strlen(nome) + 1); // A fun��o strlen recebe a vari�vel "nome" como par�metro e aloca a qtd + 1 bytes de mem�ria
    strncpy(novo->nome, nome, strlen(nome) + 1); // A fun��o strncpy copia os caracteres da string at� que caia em uma string nula. A fun��o strlen recebe a vari�vel "nome" como par�metro e aloca a qtd + 1 bytes de mem�ria
    novo->empresa = (char *)malloc(strlen(empresa) + 1); // A fun��o strlen recebe a vari�vel "empresa" como par�metro e aloca a qtd + 1 bytes de mem�ria
    strncpy(novo->empresa, empresa, strlen(empresa) + 1); // A fun��o strncpy copia os caracteres da string at� que caia em uma string nula. A fun��o strlen recebe a vari�vel "empresa" como par�metro e aloca a qtd + 1 bytes de mem�ria
    novo->departamento = (char *)malloc(strlen(departamento) + 1); // A fun��o strlen recebe a vari�vel "departamento" como par�metro e aloca a qtd + 1 bytes de mem�ria
    strncpy(novo->departamento, departamento, strlen(departamento) + 1); // A fun��o strncpy copia os caracteres da string at� que caia em uma string nula. A fun��o strlen recebe a vari�vel "departamento" como par�metro e aloca a qtd + 1 bytes de mem�ria
    novo->telefone = telefone; // Aloca a quantidade de mem�ria da vari�vel interia "telefone"
    novo->celular = celular; // Aloca a quantidade de mem�ria da vari�vel interia "celular"
    novo->email = (char *)malloc(strlen(email) + 1); // A fun��o strlen recebe a vari�vel "email" como par�metro e aloca a qtd + 1 bytes de mem�ria
    strncpy(novo->email, email, strlen(email) + 1); // A fun��o strncpy copia os caracteres da string at� que caia em uma string nula. A fun��o strlen recebe a vari�vel "email" como par�metro e aloca a qtd + 1 bytes de mem�ria
    novo->proximo = dados; // Para inserir o outro dado (que est� amrmazenado na outra variavel)

    return novo;
}

// Inicia a fun��o que exibe a lista com os dados inseridos
void exibe_dados(Dados *dados)
{

    fprintf(stdout, "\n\nCadastro:\n");

    fprintf(stdout, "------------------------\n");

    for (principal != NULL; dados != NULL; dados = dados->proximo)
    {
        fprintf(stdout, "Codigo: %d\n", dados->codigo); // Foi usado o fprintf para que o valor digitado no parametro "codigo" seja passado para um arquivo.
        fprintf(stdout, "Nome: %s\n", dados->nome); // Foi usado o fprintf para que o valor digitado no parametro "nome" seja passado para um arquivo.
        fprintf(stdout, "Empresa: %s\n", dados->empresa); // Foi usado o fprintf para que o valor digitado no parametro "empresa" seja passado para um arquivo.
        fprintf(stdout, "Departamento: %s\n", dados->departamento); // Foi usado o fprintf para que o valor digitado no parametro "departamento" seja passado para um arquivo.
        fprintf(stdout, "Telefone: %d\n", dados->telefone); // Foi usado o fprintf para que o valor digitado no parametro "telefone" seja passado para um arquivo.
        fprintf(stdout, "Celular: %d\n", dados->celular); // Foi usado o fprintf para que o valor digitado no parametro "celular" seja passado para um arquivo.
        fprintf(stdout, "Email: %s\n", dados->email); // Foi usado o fprintf para que o valor digitado no parametro "email" seja passado para um arquivo.
        fprintf(stdout, "------------------------\n");
    }

    getchar(); // L� o que foi digitado pelo usu�rio
}

// Inicia a fun��o que faz a busca de dados pelo parametro "nome"
void busca_dados_nome(Dados *dados, char *chave)
{

    int achou = 0;

    fprintf(stdout, "\n\nCadastro:\n");
    for (achou = 0; dados != NULL; dados = dados->proximo)
    // Enquanto a vari�vel achou receber valor vazio, enquanto o ponteiro "dados" for diferente de nulo, o ponteiro dados deve apontar para o pr�ximo tipo de dado da struct.
    {
        if (strcmp(chave, dados->nome) == 0) // Se o valor da variavel nome for igual a 0(falsa), ele pede para digitar novamente
        {

            fprintf(stdout, "------------------------\n");
            fprintf(stdout, "Codigo: %d\n", dados->codigo); // O que foi digitado na variavel "codigo" � salvo em um arquivo
            fprintf(stdout, "Nome: %s\n", dados->nome); // O que foi digitado na variavel "nome" � salvo em um arquivo
            fprintf(stdout, "Empresa: %s\n", dados->empresa); // O que foi digitado na variavel "empresa" � salvo em um arquivo
            fprintf(stdout, "Departamento: %s\n", dados->departamento); // O que foi digitado na variavel "departamento" � salvo em um arquivo
            fprintf(stdout, "Telefone: %d\n", dados->telefone); // O que foi digitado na variavel "telefone" � salvo em um arquivo
            fprintf(stdout, "Celular: %d\n", dados->celular); // O que foi digitado na variavel "celular" � salvo em um arquivo
            fprintf(stdout, "Email: %s\n", dados->email); // O que foi digitado na variavel "email" � salvo em um arquivo
            fprintf(stdout, "------------------------\n");
            achou++;
        }
    }

    if (achou == 0)
    // Se o valor da variavel nome for falsa(nao existir), aparecer� a mensagem
        fprintf(stdout, "Nenhum resultado encontrado.\n");
    else
        fprintf(stdout, "Foram encontrados %d registros.\n", achou);
    // Caso o valor sejagualama "espera" 1 segundo para prosseguir para a pr�xima etapa
    sleep(1); // O programa espera 1 segundo antes de continuar
}

// Inicia a fun��o de busca de dados pelo codigo
void busca_dados_codigo1(Dados *dados, int *cadeado)
{

    int achou = 0;

    fprintf(stdout, "\n\nCadastro:\n");
    for (achou = 0; dados != NULL; dados = dados->proximo)
    // Enquanto a vari�vel achou receber valor vazio, enquanto o ponteiro "dados" for diferente de nulo, o ponteiro dados deve apontar para o pr�ximo tipo de dado da struct.
    {
        if (cadeado == dados->codigo) // Se o valor da variavel codigo for igual a que est� armazainada no ponteiro dados, ele pede para digitar novamente
        {

            fprintf(stdout, "------------------------\n");
            fprintf(stdout, "Codigo: %d\n", dados->codigo);
            fprintf(stdout, "Nome: %s\n", dados->nome);
            fprintf(stdout, "Empresa: %s\n", dados->empresa);
            fprintf(stdout, "Departamento: %s\n", dados->departamento);
            fprintf(stdout, "Telefone: %d\n", dados->telefone);
            fprintf(stdout, "Celular: %d\n", dados->celular);
            fprintf(stdout, "Email: %s\n", dados->email);
            fprintf(stdout, "------------------------\n");
            achou++;
        }
    }

    if (achou == 0)
    // Se o valor da variavel nome for falsa(nao existir), aparecer� a mensagem
        fprintf(stdout, "Nenhum resultado encontrado.\n");
    else
        fprintf(stdout, "Foram encontrados %d registros.\n", achou);
    // Caso o valor sejagualama "espera" 1 segundo para prosseguir para a pr�xima etapa

    sleep(1); // O programa espera 1 segundo antes de continuar
}

// Inicia a fun��o de busca de dados pelo codigo COM a opcao de alterar o codigo
void busca_dados_codigo2(Dados *dados, int *cadeado)
{

    int achou = 0; // Variavel inicializa com valor 0
    int op2 = 0; // Declara variavel op2

    fprintf(stdout, "\n\nCadastro:\n");
    for (achou = 0; dados != NULL; dados = dados->proximo)
    // Variavel achou inicializa com 0, at� que dados seja diferente de nulo, o ponteiro dados passar� para o pr�ximo
    {
        if (cadeado == dados->codigo) // Se o valor da variavel codigo for igual a que est� armazainada no ponteiro dados, ele pede para digitar novamente
        {

            fprintf(stdout, "------------------------\n");
            fprintf(stdout, "Codigo: %d\n", dados->codigo);
            fprintf(stdout, "Nome: %s\n", dados->nome);
            fprintf(stdout, "Empresa: %s\n", dados->empresa);
            fprintf(stdout, "Departamento: %s\n", dados->departamento);
            fprintf(stdout, "Telefone: %d\n", dados->telefone);
            fprintf(stdout, "Celular: %d\n", dados->celular);
            fprintf(stdout, "Email: %s\n", dados->email);
            fprintf(stdout, "------------------------\n");
            achou++;
        }
    }

    if (achou == 0)
    // Se o valor da variavel nome for falsa(nao existir), aparecer� a mensagem
        fprintf(stdout, "Nenhum resultado encontrado.\n");

    else {
    // Caso contr�rio, o usu�rio deve confirmar se realmente quer alterar o registro
        printf("\n\n Voce deseja realmente alterar esse contato?\n Sim(01) ou Nao(02): ");
        scanf("%d", &op2);
        switch (op2) // Inicia um switch passando a vari�vel op2 como par�metro
        {
        case 1: // No primeiro caso, ele escolhe alterar o registro
            deleta2();
            insere();
            break;
        case 2: // No segundo caso, cancela o procedimento
            break;
        default:
            printf("\n Opcao invalida!");
            break;
        }
    }
}

//Inicia a fun�ao que busca registro pelo codigo com a op�ao de excluir o registro
void busca_dados_codigo3(Dados *dados, int *cadeado)
{

    int achou = 0; // Variavel inicializa com valor 0
    int op2 = 0; // Declara variavel op2

    fprintf(stdout, "\n\nCadastro:\n");
    for (achou = 0; dados != NULL; dados = dados->proximo)
    // Variavel achou inicializa com 0, at� que dados seja diferente de nulo, o ponteiro dados passar� para o pr�ximo
    {
        if (cadeado == dados->codigo) // Se o valor da variavel codigo for igual a que est� armazainada no ponteiro dados, ele pede para digitar novamente
        {

            fprintf(stdout, "------------------------\n");
            fprintf(stdout, "Codigo: %d\n", dados->codigo);
            fprintf(stdout, "Nome: %s\n", dados->nome);
            fprintf(stdout, "Empresa: %s\n", dados->empresa);
            fprintf(stdout, "Departamento: %s\n", dados->departamento);
            fprintf(stdout, "Telefone: %d\n", dados->telefone);
            fprintf(stdout, "Celular: %d\n", dados->celular);
            fprintf(stdout, "Email: %s\n", dados->email);
            fprintf(stdout, "------------------------\n");
            achou++;
        }
    }

    if (achou == 0)
    // Se o valor da variavel nome for falsa(nao existir), aparecer� a mensagem
        fprintf(stdout, "Nenhum resultado encontrado.\n");
    else
    // Caso contr�rio, o usu�rio deve confirmar se realmente quer deletar o registro
    {
        printf("\n\n Voce deseja realmente excluir esse contato?\n Sim(01) ou Nao(02): ");
        scanf("%d", &op2);
        switch (op2) // Inicia um switch passando a vari�vel op2 como par�metro
        {
        case 1: // No primeiro caso, ele escolhe deletar o registro
            deleta();
            break;
        case 2: // No segundo caso, cancela o procedimento
            break;
        default:
            printf("\n Opcao invalida!");
            break;
        }
    }
}

// Inicia a fun�ao de deletar dados
Dados *deleta_dados(Dados *dados)
{

    Dados *novo; // Variavel apontando para a ponteiro novo

    novo = dados->proximo; // Variavel armazena o "proximo" dado inserido

    free(dados); //Limpa a mem�ria do par�metro "dados"

    fprintf(stdout, "Deletado com sucesso.\n");
    sleep(1); // Espera 1 segundo para dar continuidade ao programa

    return novo;
}

// Inicia a fun�ao de deletar dados
Dados *deleta_dados2(Dados *dados)
{

    Dados *novo; // Variavel apontando para a ponteiro novo

    novo = dados->proximo; // Variavel armazena o "proximo" dado inserido

    free(dados); //Limpa a mem�ria do par�metro "dados"

    return novo;
}

// Inicia a fun�ao que checa se a lista est� vazia
int checa_vazio(Dados *dados)
{

    if (dados == NULL) // Se o ponteiro dados for nulo (ou seja, se a lista estiver vazia)
    {
        fprintf(stdout, "Lista vazia!\n"); // Aparecer� a mensagem
        sleep(1); // // Espera 1 segundo para dar continuidade ao programa
        return 1;
    }
    else // Caso a lista n�o esteja vazia, ele retorna a pr�pria lista
        return 0;
}

// Inicia a fun�ao que insere dados
void insere(void)
{

    int *codigo;
    char *nome;
    char *empresa;
    char *departamento;
    long int telefone;
    long int celular;
    char *email;

    codigo = (int *)malloc(BUFFER); // Aloca memoria para a variavel "codigo" do tamanho do buffer
    nome = (char *)malloc(BUFFER); // Aloca memoria para a variavel "nome" do tamanho do buffer
    empresa = (char *)malloc(BUFFER); // Aloca memoria para a variavel "empresa" do tamanho do buffer
    departamento = (char *)malloc(BUFFER); // Aloca memoria para a variavel "departamento" do tamanho do buffer
    email = (char *)malloc(BUFFER); // Aloca memoria para a variavel "email" do tamanho do buffer

    // Nos c�digos abaixo:
    // fprintf usado para que o valor digitado seja passado para um arquivo
    // scanf usado para ler o que foi digitado pelo usuario
    // stdout usado para mostrar como sa�da o que foi digitado em forma de arquivo
    fprintf(stdout, "\nDigite o codigo: \n----> ");
    scanf("%d", &codigo);
    fprintf(stdout, "\n");

    fprintf(stdout, "\n\nDigite o nome: \n----> ");
    scanf("%s", nome);
    fprintf(stdout, "\n");

    fprintf(stdout, "\n\nDigite a empresa: \n----> ");
    scanf("%s", empresa);
    fprintf(stdout, "\n");

    fprintf(stdout, "\n\nDigite o departamento: \n----> ");
    scanf("%s", departamento);
    fprintf(stdout, "\n\n");

    fprintf(stdout, "Digite o telefone: \n----> ");
    scanf("%d", &telefone);
    fprintf(stdout, "\n\n\n");

    fprintf(stdout, "Digite o celular: \n----> ");
    scanf("%d", &celular);
    fprintf(stdout, "\n\n\n");

    fprintf(stdout, "\n\nDigite o email: \n----> ");
    scanf("%s", email);
    fprintf(stdout, "\n");

    if (principal == NULL) // Se a variavel for nula, inicia o programa
        principal = inicia_dados(codigo, nome, empresa, departamento, telefone, celular, email);
    else // Se a variavel n�o for nula, vai para a insercao de dados
        principal = insere_dados(principal, codigo, nome, empresa, departamento, telefone, celular, email);
}

// Inicia a fun�ao que exibe dados
void exibe(void)
{

    if (!checa_vazio(principal)) // Se for diferente da funcao checa_vazio
        exibe_dados(principal); // Ela exibe o registro
}

// Inicia a funcao busca por nome
void busca_nome(void)
{

    char *chave; //Cria um ponteiro do tipo char

    if (!checa_vazio(principal)) // Se for diferente de vazio
    {

        chave = (char *)malloc(BUFFER); // Aloca mem�ria do tamanho do buffer

        fprintf(stdout, "\nDigite o nome para buscar: \n--> "); // Exibe a mensagem
        scanf("%s", chave); // L� o que foi digitado pelo usuario

        busca_dados_nome(principal, chave); // Realiza a busca pelo nome
    }
}

// Inicia a funcao busca por codigo
void busca_codigo1(void)
{

    int *cadeado; // Cria um ponteiro do tipo inteiro

    if (!checa_vazio(principal)) // Se for diferente de vazio
    {
        cadeado = (int *)malloc(BUFFER); // Aloca mem�ria do tamanho do buffer

        fprintf(stdout, "\nDigite o codigo para buscar: \n--> "); // Exibe a mensagem
        scanf("%d", &cadeado); // L� o que foi digitado pelo usuario

        busca_dados_codigo1(principal, cadeado); // Realiza a busca pelo codigo
    }
}

// Inicia a fun�ao por codigo com op�cao de alterar dados
void busca_codigo2(void)
{

    int *cadeado; // Cria um ponteiro do tipo inteiro

    if (!checa_vazio(principal)) // Se for diferente de vazio
    {
        cadeado = (int *)malloc(BUFFER); // Se for diferente de vazio

        fprintf(stdout, "\nDigite o codigo para buscar: \n--> "); // Exibe a mensagem
        scanf("%d", &cadeado); // L� o que foi digitado pelo usuario

        busca_dados_codigo2(principal, cadeado); // Realiza a busca pelo codigo, com op�ao de alterar
    }
}

// Inicia a fun�ao por codigo com op�cao de deletar dados
void busca_codigo3(void)
{

    int *cadeado; // Cria um ponteiro do tipo inteiro

    if (!checa_vazio(principal)) // Se for diferente de vazio
    {
        cadeado = (int *)malloc(BUFFER); // Se for diferente de vazio

        fprintf(stdout, "\nDigite o codigo para buscar: \n--> "); // Exibe a mensagem
        scanf("%d", &cadeado); // L� o que foi digitado pelo usuario

        busca_dados_codigo3(principal, cadeado); // Realiza a busca pelo codigo, com op�ao de alterar
    }
}

// Inicia a funcao deleta
void deleta(void)
{

    if (!checa_vazio(principal)) // Se for diferente de vazio
        principal = deleta_dados(principal); // Deleta os dados
}

void deleta2(void)
{

    if (!checa_vazio(principal)) // Se for diferente de vazio
        principal = deleta_dados2(principal); // Deleta os dados
}
