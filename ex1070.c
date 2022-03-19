/* 	
    Leia um valor inteiro X. 
	Em seguida apresente os 6 valores ímpares consecutivos a partir de X,
	 um valor por linha, inclusive o X ser for o caso.

Entrada
A entrada será um valor inteiro positivo.

Saída
A saída será uma sequência de seis números ímpares.

Exemplo de Entrada	Exemplo de Saída
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

