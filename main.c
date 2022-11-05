#include<stdio.h>
#include<locale.h>
#include<string.h>
#include<stdlib.h>

int op;
int opcao =0 ;



void main(TelaUsuario){

    char usuario[10] = "usuario";
    char usuario1[10];
    char senha[10] = "12345";
    char senha1[10];

    printf("\n\n CADASTRO DE PACIENTES\n\n");

    printf("Digite o Usuario: ");
    scanf("%s", usuario1);

    printf("Digite a Senha: ");
    scanf("%s", senha1);

    if (strcmp(usuario, usuario1) == 0 && strcmp(senha, senha1) == 0){

        printf("\t\t\t\n\nUSUARIO LOGADO!\n\n");
    }
    else{

    printf("\n\nSENHA OU USUARIO INVALIDOS!\n\n");
    printf("Digite o Usuario: ");
    scanf("%s", usuario1);

    printf("Digite a Senha: ");
    scanf("%s", senha1);
    printf("\n\nUSUARIO LOGADO!\n\n");

    }

    system("cls");

    printf("\n\n\ ESCOLHA UMA OPCAO \n\n");
    printf("1 - CADASTRO DE PACIENTES\n");
    printf("2 - PESQUISA DE PACIENTES\n");
    printf("3 - SAIR DO SISTEMA\n\n");
    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &opcao);

    system("cls");

    printf("\n\n\ TELA DE CADASTRO\n\n");

    int Cadastrar(void);

    FILE *pont_arq;

char Nome[500];
char Cpf[500];
char Rua[500];
char Numero[500];
char Bairro[500];
char Cidade[500];
char Estado[500];
char Cep[500];
char Comorbidade[500];
char Idade[500];
char Email[500];
char Nascimento[500];

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("NOME DO PACIENTE: ");
    scanf("%s", Nome);
    fprintf(pont_arq,"%s \n", Nome);
    fclose(pont_arq);

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("CPF: ");
    scanf("%s", Cpf);
    fprintf(pont_arq,"%s \n", Cpf);
    fclose(pont_arq);

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("RUA: ");
    scanf("%s", Rua);
    fprintf(pont_arq,"%s \n", Rua);
    fclose(pont_arq);

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("NUMERO: ");
    scanf("%s", Numero);
    fprintf(pont_arq,"%s \n", Numero);
    fclose(pont_arq);

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("BAIRRO: ");
    scanf("%s", Bairro);
    fprintf(pont_arq,"%s \n", Bairro);
    fclose(pont_arq);

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("CIDADE: ");
    scanf("%s", Cidade);
    fprintf(pont_arq,"%s \n", Cidade);
    fclose(pont_arq);

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("ESTADO: ");
    scanf("%s", Estado);
    fprintf(pont_arq,"%s \n", Estado);
    fclose(pont_arq);

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("CEP: ");
    scanf("%d", Cep);
    fprintf(pont_arq,"%d \n", Cep);
    fclose(pont_arq);

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("COMORBIDADE?: ");
    scanf("%s", Comorbidade);
    fprintf(pont_arq,"%s \n", Comorbidade);
    fclose(pont_arq);

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("EMAIL: ");
    scanf("%d", Email);
    fprintf(pont_arq,"%d \n", Email);
    fclose(pont_arq);

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("NASCIMENTO: ");
    scanf("%d", Nascimento);
    fprintf(pont_arq,"%d \n", Nascimento);
    fclose(pont_arq);

    pont_arq = fopen("cadastro_paciente.txt", "a");
    printf("IDADE: ");
    scanf("%d", Idade);
    fprintf(pont_arq,"%d \n", Idade);
    fclose(pont_arq);

    printf("\n\nDADOS CADASTRADOS COM SUCESSO\n\n");

     printf("\n\nENCERRA CADASTRO: \n\n");


    system("cls");


    void Pesquisar();{
    int (op);
    printf("\n\n\ ESCOLHA UMA OPCAO \n\n");
    printf("1 - CADASTRO DE PACIENTES\n");
    printf("2 - PESQUISA DE PACIENTES\n");
    printf("3 - SAIR DO SISTEMA\n\n");
    printf("DIGITE A OPCAO DESEJADA: ");
    scanf("%d", &op);
    }
return(0);
}


























