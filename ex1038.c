/* 	
    	  
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 
 	int desc,un;
 	float total,price;

//2 input
 	
 	scanf("%d %d",&desc,&un);
 	

//3 calc
	if(desc == 1)
	{
		total = un*4;
		printf("Total: R$ %.2f\n",total);
	}
	else if (desc == 2)
	{
		total = un*4.5;
		printf("Total: R$ %.2f\n",total);
	}
	else if (desc == 3)
	{
		total = un*5.0;
		printf("Total: R$ %.2f\n",total);
	}
	else if (desc == 4)
	{
		total = un*2.0;
		printf("Total: R$ %.2f\n",total);
	}
	else if (desc == 5)
	{
		total = un* 1.5;
		printf("Total: R$ %.2f\n",total);
	}	
	

	
return 0;

}
