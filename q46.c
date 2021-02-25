#include <stdio.h>
//10/10
int cardinalMSet(int N, int v[N]){
	int i,c;
	c = 0;
	for(i=0; i<N; i++){
		c = c + v[i];
	}
	return c;
}

int main(){
	return 0;
}

