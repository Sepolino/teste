#include <stdio.h>
#include <stdlib.h>
#define TAM 5

typedef struct {
    int topo;
    int elemento[TAM];
} pilha;

int push(pilha *p, int valor)
{
    if(p->topo < (TAM - 1)){
        p->topo += 1;
        p->elemento[p->topo] = valor;
        return 0;
    }
    else{
        return 1;
    }

}

int pop(pilha *p)
{
    if(p->topo > -1){
        p->topo -= 1;
        return 0;
    }
    else{
        return 1;
    }
}

void imprimir(pilha *p)
{
    system("cls");
    printf("===========IMPRESSAO=========\n\n");
    for(int i = p->topo; i >= 0; i--)
    {
        printf("%d\n", p->elemento[i]);
    }
    printf("\n");
    system("pause");
    
}


int main()
{
    int flag, opcao, valor;
    pilha pilha;
    pilha.topo = -1;

    do
    {
        printf("===================MENU==================\n\n");
        printf("1 - Push\n");
        printf("2 - Pop\n");
        printf("3 - Imprimir\n");
        printf("9 - Sair\n");
        scanf("%d", &opcao); 
        switch(opcao){
            case 1:
            system("cls");
            printf("Insira o elemento na pilha: ");
            scanf("%d", &valor);
            flag = push(&pilha, valor);
            if (flag == 0)
            {
                printf("\nElemento inserido com sucesso!\n");
            }
            else
            {
                printf("\nERRO! Pilha esta cheia!\n");
            }
            system("pause");
            break;

            case 2:
            system("cls");
            flag = pop(&pilha);
            if (flag == 0)
            {
                printf("\nElemento removido com sucesso!\n");
            }
            else
            {
                printf("\nERRO! Pilha esta vazia!\n");
            }
            system("pause");
            break;

            case 3:
            imprimir(&pilha);
            break;
        }
    }while (opcao != 9);

    return 0;
}
