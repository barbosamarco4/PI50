#include <stdio.h>

int main(){
	int i=1;
	float media, soma = 0,contador=0;
	while(i!=0){
		scanf("%d",&i);
		soma = soma+i;
		contador++;
	}
	media = soma/contador;
	printf("Media:%f\n",media);
	return 0;
}
