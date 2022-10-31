#include <stdio.h>
#include <math.h>

int main()
{
    int i=2;
    float y =;
    float j = y;
    printf("Digite um número não inteiro: ");
    scanf("%f", &y);
    
    while(fmod(j, 10) != 0)
    {
        j = y * i;
        if(fmod(j,10) !=0)
        {
            i++;
        }
    }
    if(j>10)
    {
        j = j/10;
    }
    if(i>10)
    {
        i = i/10;
    }
    
    printf("A fração mais simplificada que resulta nesse decimal é: %.f/%d", j, i);
    
    return 0;
}
