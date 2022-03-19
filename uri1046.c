#include <stdio.h>
 
 
 /*Leia a hora inicial e a hora final de um jogo. A seguir calcule a duração do jogo, 
 sabendo que o mesmo pode começar em um dia e terminar em outro, tendo uma duração mínima de 1 hora e máxima de 24 horas.

Entrada
A entrada contém dois valores inteiros representando a hora de início e a hora de fim do jogo. */

int main() {
 
    
    int i,f,result;
    
	scanf("%d %d",&i,&f);

	if(i == f){
		result = 24;
	}else if(f > i){
		result = f - i;
	}else if(i > f){
		result = (24 - i) + f;
	}
 	printf("O JOGO DUROU %d HORA(S)",result);
    return 0;
}
