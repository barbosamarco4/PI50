#include <stdio.h>
//10/10
int maisFreq(int v[], int N){
	int i,o,m,r;
	m=0;
	r = v[0];
	o = 1;
	for(i=0; i<N-1; i++){
		if(v[i] != v[i+1]){
			if(o > m){
				r = v[i];
				m=o;
			}
			o = 1;
		}
		else
			o++;
	}
	return r;
}

int main(){
	return 0;
}

