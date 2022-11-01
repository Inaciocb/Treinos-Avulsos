#include <stdio.h>

float calculamedia(float v[10])
{
    float media=0, soma=0;
    int i=0;
    
    for (i=0; i<10; i++)
    {
        soma = soma + v[i];
    }
    media = soma/10;
    return media;
}

float qualmaisprox(float v[10], float media)
{
    int i = 0, j;
    float maisprox = v[0], menordistancia = media - v[0], distancia[10];



    for(i = 1; i < 10; i++)
    {
        distancia[i] =  v[i] - media;
        if(distancia[i] < 0 )
        {
            distancia[i] = distancia[i]*(-1);
        }
        if (distancia[i]< menordistancia)
        {
            menordistancia = distancia[i];
            j = i;
        }
    }
    return v[j];
}

int main()
{
    float v[10];
    int i = 0;
    for(i=0; i<10; i++)
    {
        printf("Digite um número: ");
        scanf("%f", &v[i]);
    }
    printf("\n\nA média é: %.2f\n\n", calculamedia(v));
    printf("O mais próximo da média é %f\n\n", qualmaisprox(v, calculamedia(v)));
    return 0;
}
