#include <stdio.h>
#include <stdlib.h>

int main()
{
    int hora_cinema = 20;
    int hora_atual = 20;

    /* Caso 1:
    Posso entrar na sala?

    if(hora_cinema == hora_atual){
        printf("Posso entrar! O hor�rio � o mesmo"); */

    //Caso 2: como condi��es n�o s�o atendidas, nada � impresso.
    if (hora_atual > hora_cinema + 30){
      printf("Passou do tempo limite! Nao pode entrar!");
    } else if(hora_atual < hora_cinema - 30){
        printf("Nem abriu a porta do cinema");
    //Ao se adicionar esse ELSE, algo � printado na tela:
    }else{
        printf("O horario esta certo, pode entrar!");
    }
     return 0;
}
