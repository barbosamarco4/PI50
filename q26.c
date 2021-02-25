#include <stdio.h>
//10/10
void insere(int v[], int N, int x){
	int i,j;
	for(i=0; i<N+1; i++){
		if (x < v[i]){
			for(j=N; j>i; j--)
				v[j] = v[j-1];
			v[i] = x;
			break;
		}

	}
}

int main(){
	return 0;
}

