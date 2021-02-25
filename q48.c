#include <stdio.h>
#include <stdlib.h>
//10/10
typedef enum movimento {Norte,Oeste,Sul,Este} Movimento;
typedef struct posicao{
	int x,y;
}Posicao;

int caminho(Posicao inicial, Posicao final, Movimento mov[], int N){
	int i,j,dx,dy;
	dx = inicial.x -final.x;
	dy = inicial.y - final.y;
	if(N < (abs(dx) + abs(dy)))
		return -1;
	for(i=1; (i <= abs(dx)); i++){
		if (dx<0)
			mov[i-1] = Este;
		else
			mov[i-1] = Oeste;
	}
	for(j=0;j<abs(dy); j++){
		if(dy < 0)
			mov[i-1] = Norte;
		else
			mov[i-1] = Sul;
		i++;
	}
	return i-1;
}
int main(){
	return 0;
}

