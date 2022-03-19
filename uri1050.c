#include <stdio.h>
 
int main() {
 
    int d;
    scanf("%d",&d);
    if(d != 61 && d != 71 &&d != 11 && d !=21 && d !=32 && d !=19 && d !=27 && d !=31){
    		printf("DDD nao cadastrado\n");
	}else{
		switch(d){
    		case 61 : printf("Brasilia\n");
    		break;
    		case 71 : printf("Salvador\n");
    		break;
    		case 11 : printf("Sao Paulo\n");
    		break;
    		case 21 : printf("Rio de Janeiro\n");
    		break;
    		case 32 : printf("Juiz de Fora\n");
    		break;
    		case 19 : printf("Campinas\n");
    		break;
    		case 27 : printf("Vitoria\n");
    		break;
    		case 31 : printf("Belo Horizonte\n");
    		break;
    	
			}
		}
    
 
    return 0;
}
