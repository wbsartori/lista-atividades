#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

//1 - Que ESTRUTURA DE DADOS (TAD)
//vou usar para resolver o problema?


//2 - Com base nessa estrutura, que
//OPERAÇÕES desejo fazer nela?

//Ex: quero criar uma LISTA de atividades
#define LIMITE 5
typedef struct Atividade {
    char descricao[LIMITE];
    int duracao;
    int realizada; //0 para nao e 1 para sim

};

typedef struct ListaAtividades {
    struct Atividade atividades[LIMITE];
    int qtdeAtual;
    int horasTotal;
};

ListaAtividades* criarLista();
void liberarLista(ListaAtividades* la);
void exibirLista(ListaAtividades* la);
void inserirElemento(ListaAtividades* la, Atividade a);

int main(){
    Atividade ativ;
    ListaAtividades* minhaLista;
    minhaLista = criarLista();
    if(minhaLista != NULL){
        printf("\nLista Criada com sucesso! \n");
        minhaLista->qtdeAtual = 0;
        minhaLista->horasTotal = 0;
        //vamos exibir
        exibirLista(minhaLista);

        //vamos inserir uma atividade
        printf("\nDigite a atividade: ");
        fflush(stdin);
        scanf("%s", &ativ.descricao);
        printf("\nHoras: ");
        fflush(stdin);
        scanf("%d", &ativ.duracao);
        ativ.realizada = 0;

        //vamos inserir
        inserirElemento(minhaLista, ativ);

        //vamos inserir outra atividade
        printf("\nDigite a atividade: ");
        fflush(stdin);
        scanf("%s", &ativ.descricao);
        printf("\nHoras: ");
        fflush(stdin);
        scanf("%d", &ativ.duracao);
        ativ.realizada = 0;

        //vamos inserir
        inserirElemento(minhaLista, ativ);

        //vamos exibir novamente
        exibirLista(minhaLista);




    } else {
        printf("\nErro ao criar a Lista! \n");
    }


    getch();
    liberarLista(minhaLista);
    //exibirLista(minhaLista); //nao vai mais mostrar nada

}

ListaAtividades* criarLista(){
    //alocar dinamicamente memória para ela
    printf("\nAlocando espaco para a lista! \n");
    //retorno o espaco de memoria alocado para ListaA
    return (ListaAtividades*) malloc(sizeof(ListaAtividades));
    //lembrando que MALLOC retorna void* (ponteiro genérico)
    //preciso sempre fazer o CASTING para o tipo que eu quero
}

void liberarLista(ListaAtividades* la){
    printf("\nLiberando espaco de memoria da lista! (apagando)\n\n");
    free(la);
}

void exibirLista(ListaAtividades* la){
    printf("\nElementos na lista de atividades: \n");
    for(int i=0; i< la->qtdeAtual; i++){
        printf("Descricao: %s", la->atividades[i].descricao);
        printf(" Horas: %d", la->atividades[i].duracao);
        if(la->atividades->realizada == 0)
            printf(" >>>>>> NAO REALIZADA!");
        else
            printf(" >>>>>> REALIZADA!");
        printf("\n-------------------------\n");
    }
    printf("\nTotal de horas: %d", la->horasTotal);
}


void inserirElemento(ListaAtividades* la, Atividade a){
    if(la->qtdeAtual < LIMITE){
        printf("\nInserindo elemento na lista!\n");
        la->atividades[la->qtdeAtual] = a;
        la->horasTotal += a.duracao;
        printf("\nAtividade inserida na lista! \n");
        la->qtdeAtual++; //incremento o total
    } else {
        printf("\n\nErro ao inserir! A lista esta cheia! \n");
    }
}

/*
Atividades:
- Organizar esse codigo em um menu com as seguintes operacoes:
- 1 - Criar a lista de atividades - função está pronta
- 2 - Listar atividades - função está pronta
- 3 - Cadastrar a atividade - função está pronta
- 4 - Marcar uma atividade como realizada - Fazer a funcao
- 5 - Excluir uma atividade (significa ou liberar espaco ou marcar como excluida) - - Fazer a funcao
- 6 - Excluir lista - função está pronta
- 0 - Sair



*/


