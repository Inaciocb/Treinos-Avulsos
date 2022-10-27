#include <stdio.h>

int main()
{
    int i=1, j=0, k=1, l=0, linha, coluna;
    do{  
        printf("Informe as coordenadas da torre:\nCoordenada das linhas(1 a 8): ");
        scanf("%d", &linha);
        printf("Informe a coordenada das colunas: ");
        scanf("%d", &coluna);
        if(linha <= 0 || linha > 8 || coluna <=0 || coluna > 8)
        {
            printf("\nDigite valores válidos para linha e coluna (1 até 8).\n\n");
        }
    }while(linha <= 0 || linha > 8 || coluna <=0 || coluna > 8);

    for(j=0; j<9; j++)
    {
        if(j==0)
        {
            printf(" ");
            for(k=1; k<9; k++)
            {
                printf("%d", k);
            }
            
        }else if(j!=0)
        {
            printf("\n%d",j);
        }
        for(i=1; i<9; i++)
        {
            if(j == linha)
            {
                printf("%s", "#");
            }
            
            if(i==coluna && i!=0 && j!=0 && j!= linha) 
            {
                printf("%c", '#');
            }else if(j!=0 && j!=linha)
            {
                printf("%c", '-');
            }
        }
    }       
    if(j=9)
    {
        printf("\n\n");
    }
    return 0;
}

