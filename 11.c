#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
	
	int idade;
	
	printf("Qual sua idade ? ");
	scanf("%d", &idade);
	
	if ( idade < 18)
	printf("\nNao eleitor \n");
	else
			if ( idade >= 18 && idade < 65 ) 
			printf("\n eleitor Obrigatorio \n");
				else
				printf ("\neleitor facultativo");
	
	
//	- n�o eleitor (abaixo de 16 anos);
//	- eleitor obrigat�rio (entre a faixa de 18 e menor de 65 anos);
//	- eleitor facultativo (de 16 at� 18 anos e maior de 65 anos, inclusive).
	
	return 0;
}
