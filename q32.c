#include <stdio.h>
//10/10
int maxCresc(int v[], int N){
	int i,m,c;
	m = 0;
	c = 1;
	for(i=0;i<N-1;i++){
		if(v[i] > v[i+1]){
			if(c > m)
				m = c;
			c = 1;
		}
		else{
			c++;
		}
	}
	if(c > m)
		m = c;
	return m;
}

int main(){
	return 0;
}

