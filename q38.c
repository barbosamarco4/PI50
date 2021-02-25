#include <stdio.h>
//10/10
void somasAc (int v[], int Ac[], int N){
	int i,j;
	for(i=0; i<N; i++){
		Ac[i] = 0;
		for(j=0; j<=i; j++){
			Ac[i] = Ac[i]+v[j];
		}
	}
}

int main(){
	return 0;
}

