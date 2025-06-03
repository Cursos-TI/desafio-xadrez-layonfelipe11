#include <stdio.h>

// Desafio de Xadrez - MateCheck

int main() {
   

    int bispo = 5, torre = 5, rainha = 8; //Inicialização das variáveis de controle.

    printf("|-Torre-|\n\n");
    for (int i = 0; i < 5; i++) 
    {
        printf(" Direita\n");   //Imprime 5 vezes a palavra Direita simulando a movimentação da torre.
    }                           //foi feito utilizando o laço de repetição for.
    printf("|-------|\n\n");

    printf("|---Bispo---|\n\n");

    while (bispo > 0)
    {
     
        printf("Cima, Direita'\n");//Imprime 5 vezes as palavras Cima e Direita simulando a movimentação do Bispo.
                                    //foi feito utilizando o laço de repetição while.
        bispo--;
    }

    printf("|------------|\n\n");

    printf("|-Rainha-|\n");

    do
    {
            printf(" Esquerda!\n");//Imprime 8 vezes a palavra Esquerda simulando a movimentação da Rainha.
        rainha--;                   //foi feito utilizando o loop do-while.
    } while (rainha > 0);
    
    printf("|--------|\n");
    
    

    return 0;
}
