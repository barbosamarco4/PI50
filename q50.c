#include <stdio.h>

typedef struct posicao{
	int x,y;
}Posicao;

int vizinhos (Posicao p,Posicao pos[], int N){
	int i,r;
	r = 0;
	for(i=0; i<N; i++){
		if(
		   (p.x==pos[i].x && ((p.y == (pos[i].y)+1) || (p.y == (pos[i].y)-1)))
		|| (p.y==pos[i].y && ((p.x == (pos[i].x)+1) || (p.x == (pos[i].x)-1)))
		)
			r++;
	}
	return r;
}

int main(){
	return 0;
}

