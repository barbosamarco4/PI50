#include <stdio.h>
//10/10
int pertence(int v[], int N, int x){
	int i;
	for(i=0; i<N; i++){
		if(x == v[i])
			return 1;
	}
	return 0;
}
int elimRep(int v[], int n){
	int i,j;
	j = 0;
	for(i=0; i<n; i++){
		if(!pertence(v,i,v[i])){
			v[j] = v[i];
			j++;
		}
	}
	return j;
}

int main(){
	return 0;
}

