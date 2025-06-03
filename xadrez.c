#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    // Implementação de Movimentação do Bispo
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.

    // Implementação de Movimentação da Torre
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.

    // Implementação de Movimentação da Rainha
    // Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.


    int bispo = 5, torre = 5, rainha = 8;

    for (int i = 0; i < 5; i++)
    {
        if(i=4)
        {
        printf("Torre, %d casas a Direita\n",torre--);
        }
    }   

    while (bispo<=5)
    {
        if (bispo = 5)
        {
        printf("Bispo, %d Casas para 'Cima, Direita'\n",bispo);
        }
        bispo++;
    }

    do
    {
        if (rainha == 1)
        {
            printf("Rainha, 8 casas à esquerda!");
        }
        
        rainha--;
    } while (rainha > 0);
    
    
    

    return 0;
}
