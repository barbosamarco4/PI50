#include <stdio.h>

int minInd(int v[], int n){
	int i,x,m;
	x = v[0];
	m = 0;
	for(i=1; i<n; i++){
		if(v[i] < x)
			m = i;
	}
	return m;
}

int main(){
	return 0;
}

