#include <stdio.h>
#include <math.h>

int main()
{
    int i=2;
    double y;
    double j = y;
    printf("Digite um número não inteiro: ");
    scanf("%lf", &y);
    
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
    
    printf("A fração mais simplificada que resulta nesse decimal é: %.lf/%d", j, i);
    
    return 0;
}
