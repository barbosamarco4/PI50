#include <stdio.h>
//10/10
void transposta (int N, float m[N][N]){
	int i,j;
	float h;
	for(i=0; i<N; i++){
		for(j=0; j<=i; j++){
			h = m[i][j];
			m[i][j] = m[j][i];
			m[j][i] = h;
		}
	}
}

int main(){
	return 0;
}

