#include <stdio.h>
//10/10
typedef enum movimento {Norte,Oeste,Sul,Este} Movimento;
typedef struct posicao{
	int x,y;
}Posicao;

Posicao posFinal(Posicao inicial, Movimento mov[], int N){
	int i;
	for(i=0; i<N; i++){
		if(mov[i] == Norte)
			inicial.y++;
		else if(mov[i] == Sul)
			inicial.y--;
		else if(mov[i] == Oeste)
			inicial.x--;
		else
			inicial.x++;
	}
	return inicial;
}
int main(){
	return 0;
}

