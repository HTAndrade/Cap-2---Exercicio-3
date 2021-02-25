#include <stdio.h>
#include<math.h>
#include<locale.h>

/*
3 - Resecreva o programa do execicio anterior agora utilizando o comando switch.
    Conte o n. de tentativas e imprima o resultado no video.
*/

int main(){

float x=50, y=25;
char c;
int cont = 0;

setlocale(LC_ALL,"");

printf("Pense em um número de 1 a 99 \n");

do{

    printf("Seu número é menor (<), maior (>) ou igual (=) a %.0f \n", x);
    
    scanf(" %c", &c);
    cont++;

 switch(c){

  case '>':{

    x=x+y; // 50+25=75
            y=y/2; // 25/02=12.5
            if(x>=99.2) //não deixa ultrapassar 99
            {
                x=x-1;//subtrai -1
            }
            else if(x<=0.2) //não vai abaixo de zero
            {
                x=x+1;//adiciona +1
            }
   break;

  }

  case '<':{

  x=x-y; //Recebe 50-25=25
            y=y/2;
            if(x>=99.2)//não vai além 100
            {
                x=x-1;//subtrai -1
            }
            else if(x<=0.2) //não vai até zero
            {
                x=x+1;//adiciona +1
            }

  break;

  }

 }

}while(c!='=');

printf("O número que você pensou é: %.0f \n", x);
printf("Tentativas: %d", cont);

}