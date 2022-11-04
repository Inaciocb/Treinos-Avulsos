#include <stdio.h>
#include <math.h>

int main()
{
    /*
    let d be our answer for input number n
    then n(1/2) = d 
    
    apply log2 (in this case, the logarithm's base would correspond to the exponent's
    dominator such as '1/2' -> i=2) on both sides
    
    log2(n(1/2)) = log2(d)
    log2(d) = 1/2 * log2(n)
    d = 2(1/2 * log2(n)) 
    d = pow(2, 0.5*(log(x)/log(2)))  
    
    log2(x) = log10(x) / log10(2)

    in above, there is shown how to transform a logarithm's base by using its properties: 
    logx(B) = logn(B)/ logn(x)  
    */

    double i=2.0,y ,z;
    printf("Digite um número não inteiro: ");
    scanf("%lf", &y);
    printf("Digite a base: ");
    scanf("%lf", &z);
    double j = y;
    
    while(fmod(j, 10) != 0)
    {
        j = y * i;
        if(fmod(j,10) != 0)
        {
            i++;
        }
    }
    if(j >= 10)
    {
        j = j/10;
    }
    if(i >= 10)
    {
        i = i/10;
    }
    
    printf("\n%lf\n", pow(i, (j/i)*(log(z)/log(i))));
    return 0;
}
