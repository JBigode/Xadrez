#include <stdio.h> 

int main() {

    int i = 1, cavaloMov = 1;
    
    // Mover o Bispo 5 casas na diagonal.
    printf("### Movimentacao do Bispo ###\n");

    while (i <= 5)
    {
        printf("Cima e à direita %d\n", i); 
        i++;
    }
    
    i = 1; // Usado para resetar o numero das casas.

    // Mover a Rainha 5 casas para a esquerda.
    printf("\n\n### Movimentacao da Rainha ###\n");
    do
    {
        printf("Esquerda %d\n", i);
        i++;

    } while (i <= 5);

    // Mover a Torre 5 casas para a direita.
    printf("\n\n### Movimentacao da Torre ###\n");
    for (i = 1; i <= 5; i++)
    {
        printf("Direita %d\n", i);
    }

    // Mover o cavalo 2 casas para baixo e 1 para a esquerda.
    printf("\n\n### Movimentacao do Cavalo ###\n");
    while (cavaloMov--)
    {
     for (int i = 1; i < 3; i++){
        printf("Baixo %d\n", i);
    }
     printf("Esquerda %d\n", cavaloMov +1);
    }
    return 0;
}