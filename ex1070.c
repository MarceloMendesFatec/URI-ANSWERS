/* 	
    Leia um valor inteiro X. 
	Em seguida apresente os 6 valores �mpares consecutivos a partir de X,
	 um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada ser� um valor inteiro positivo.

Sa�da
A sa�da ser� uma sequ�ncia de seis n�meros �mpares.

Exemplo de Entrada	Exemplo de Sa�da
8

9
11
13
15
17
19	  
*/

#include <stdio.h>  
#include <locale.h> 


int main()
{
    int x, i=0;
    scanf("%d", &x);
    while(i < 6)
	{
        if(x%2!=0)
		{
            printf("%d\n", x);
            i++;
        }   
        x++;
    }   
    return 0;
}

