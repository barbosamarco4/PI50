#include <stdio.h>

int intersectMSet(int N, int v1[N], int v2[N], int r[N]){
	int i;
	for(i=0; i<N; i++){
		if(v1[i] < v2[i])
			r[i] = v1[i];
		else
			r[i] = v2[i];
	}
	return 0;
}

int main(){
	return 0;
}

