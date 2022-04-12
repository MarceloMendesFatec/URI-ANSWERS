/* 	
  Exemplo de entrada 	  	Exemplo de Saída
		
	400.00
							Novo salario: 460.00
							Reajuste ganho: 60.00
							Em percentual: 15 %	
*/

#include <stdio.h>  
#include <locale.h> 

int main ()
{
	setlocale(LC_ALL, "Portuguese");

//1 Var declaration
 	float salaryF,salaryI;


   
//2 input
 	printf("Digite o valor do salario: \n");
 	scanf("%f",&salaryI);

//3 calc

	if(salaryI >= 0 && salaryI <= 400.00){
		salaryF = salaryI * 1.15;
		printf("Novo salario: %.2f \n Reajuste ganho : %.2f \n Em percentual: 15%%",salaryF,salaryF - salaryI);
	}else if (salaryI <= 800.0){
		salaryF = salaryI * 1.12;
		printf("Novo salario: %.2f \n Reajuste ganho : %.2f \n Em percentual: 12%%",salaryF,salaryF - salaryI);
	}else if (salaryI <= 1200.0){
		salaryF = salaryI * 1.10;
		printf("Novo salario: %.2f \n Reajuste ganho : %.2f \n Em percentual: 10%%",salaryF,salaryF - salaryI);
	}else if ( salaryI <= 2000.0){
		salaryF = salaryI * 1.07;
		printf("Novo salario: %.2f \n Reajuste ganho : %.2f \n Em percentual: 7%%",salaryF,salaryF - salaryI);
	}else if (salaryI > 2000.0){
		salaryF = salaryI * 1.04;
		printf("Novo salario: %.2f \n Reajuste ganho : %.2f \n Em percentual: 4%%",salaryF,salaryF - salaryI);
	}
	
return 0;

}
