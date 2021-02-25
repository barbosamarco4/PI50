#include <stdio.h>
//10/10
typedef struct posicao{
	int x,y;
}Posicao;

int maisCentral(Posicao pos[], int N){
	int i,d,r,x;
	r = 0;
	d =(pos[0].x*pos[0].x+pos[0].y*pos[0].y);
	for(i=0; i<N; i++){
		if((x = pos[i].x*pos[i].x+pos[i].y*pos[i].y) < d){
			r = i;
			d = x;
		}
	}
	return r;
}

int main(){
	return 0;
}

