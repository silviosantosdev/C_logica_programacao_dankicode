#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ano_nascimento = 1972;
    int ano_atual = 2021;

    int resultado = (ano_atual - ano_nascimento);

    printf("O Silvio tem %d anos,",resultado);
    printf(" e nasceu em %d, no Rio de Janeiro.", ano_nascimento);
    printf(" Estamos em %d, no mês de Julho.", ano_atual);


    return 0;
}
