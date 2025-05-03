#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Sugestão: Declare variáveis constantes para representar o número de casas que cada peça pode se mover.

    /*
    Implementação de Movimentação do (((Bispo)))
    Sugestão: Utilize uma estrutura de repetição para simular a movimentação do Bispo em diagonal.
    Seu programa deverá simular o movimento do Bispo cinco casas na diagonal para cima e à direita. 
    Para representar a diagonal, você imprimirá a combinação de duas direções a cada casa (ex: "Cima, Direita").
    */
    
    int i = 0;
    printf("\nMovimentando o Bispo 5 Casas para a Diagonal Cima, Direita\n");
    while (i < 5) 
    {
        printf("O Bispo Movimentou uma casa para cima e direita %d\n", i);//Imprime a direção do movimento
        i++;
    }
   
    /*
    Implementação de Movimentação da (((Torre)))
    Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Torre para a direita.
    Seu programa deverá simular o movimento da Torre cinco casas para a direita.
    */

    //*** Mover Torre 5 Casas para a Direita***
    
        printf("\nMovimentando a Torre 5 Casas para a Direita\n");

        for (int i = 0; i < 5; i++) 
        {
        printf("A Torre movimentou uma casa para a Direita\n"); //Imprime a direção do movimento
        }


    /*
    Implementação de Movimentação da Rainha
    Sugestão: Utilize uma estrutura de repetição para simular a movimentação da Rainha para a esquerda.
    Seu programa deverá simular o movimento da Rainha oito casas para a esquerda.
    */

    // ***Mover Rainha 8 Casas a Direita***
    
     int posicao = 0; // Posição inicial da Rainha
    
     printf("\nMovimentando a Rainha 8 casas para a esquerda:\n");
 
     do {
         printf("Rainha moveu uma casa para a esquerda e está na posição %d\n", posicao);
         posicao++; // Move 1 casa para a esquerda
     } while (posicao < 8);
 
      







    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
