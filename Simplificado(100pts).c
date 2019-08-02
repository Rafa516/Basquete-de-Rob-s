#include <stdio.h>

int pontos(int D){         //função com as condições das distâncias
    
    if(D <= 800){
        printf("1 ");    // se a distância for menor ou igual a 800 ganha 1 ponto
    }
    if(800 < D && D <= 1400 ){  // se a distância for maior que 800 e menor ou igual a 1400 ganha 2 pontos
        printf("2 ");
    }
    if(1400 < D && D <= 2000 ){   // se a distância for maior que 1400 e menor ou igual a 2000 ganha 3 pontos
        printf("3");
    }
}

int main()
{
    int D;   
            scanf("%d",&D); //entrada de dados
        pontos(D); //chamada da função que calcula as condiçoes das distancias (saída de dados)
    

    return 0;
}