#include <stdio.h>
//10/10
int menosFreq(int v[], int N){
	int i,o,m,r;
	m = N;
	o = 1;
	r = v[0];
	for(i=0; i<N-1; i++){
		if(v[i] != v[i+1]){
			if(o < m){
				m = o;
				r = v[i];
			}
			o = 1;
		}
		else
			o++;
	}
	if(o<m)
		r = v[i];
	return r;
}

int main(){
	return 0;
}

