#include <stdio.h>
//10/10
int intersectSet(int N, int v1[N], int v2[N], int r[N]){
	int i;
	for(i=0; i<N ; i++){
		r[i] = v1[i] & v2[i];
	}
	return 0;
}

int main(){
	return 0;
}

