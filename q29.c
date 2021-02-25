#include <stdio.h>
//10/10
int retiraNeg (int v[],int N){
	int i,j;
	j = 0;
	for(i=0; i<N; i++){
		if(v[i] >= 0){
			v[j] = v[i];
			j++;
		}
	}
	return j;
}

int main(){
	return 0;
}

