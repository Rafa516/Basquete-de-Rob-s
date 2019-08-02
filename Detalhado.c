#include <stdio.h>

int pontos(int d){         //função com as condições das distâncias
    
    if(d <= 800){
        printf("1 Ponto\n");    // se a distância for menor ou igual a 800 ganha 1 ponto
    }
    if(800 < d && d <= 1400 ){  // se a distância for maior que 800 e menor ou igual a 1400 ganha 2 pontos
        printf("2 Pontos\n");
    }
    if(1400 < d && d <= 2000 ){   // se a distância for maior que 1400 e menor ou igual a 2000 ganha 3 pontos
        printf("3 Pontos\n");
    }
}

int main()
{
    int d,i;
    
    for(i=0;i<3;i++){   // laço para a entrada dos 3 valores
        do{ 
            printf("Escolha a [%d°] Distancia entre 0 a 2000: ",i+1);
            scanf("%d",&d);
                if(d < 0 || d > 2000){    //condição para distancia menor que zero ou maior que 2000
                printf("Valor invalido\n");
                }
        }while(d < 0 || d > 2000);
        // faça enquanto a distancia for menor que 0 e maior 2000
        pontos(d); //chamada da função que calcula as condiçoes das distancias
    }

    return 0;
}