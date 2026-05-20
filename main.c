#include <stdio.h>

struct data {
    short dia;
    short mes;
    int ano; 
};

struct horario {
    int hora;
    int minuto;
};

struct evento {
    struct data dia;
    struct horario_inico;
    struct horario_fim;
    char descricao[100];
    char local[30];
};


int main() {
    printf("====== menu ======\n");
    printf("[1] - Cadastrar novo evento\n");
    printf("[2] - Apresentar eventos\n");
    printf("[3] - Pesquisar evento por data\n");
    printf("[4] - Pesquisar evento por descrição\n"); // string exata
    printf("[5] - Remoção de evento\n"); //identificar evento a ser removido
    printf("[6] - Sair\n");

    
    int opcao;
    scanf("%d", &opcao);
    while (opcao > 6 || opcao < 0) {
        printf("Opcao invalida! Tente novamente: ");
        scanf("%d", &opcao);
    }
    switch (opcao)
    {
    case 1:
        /* code */
        newEvent();
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        break;
    case 5:
        break;
    case 6:
        
        break;
    
    default:
        break;
    }
    return 0;
}