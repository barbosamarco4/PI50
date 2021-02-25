#include <stdio.h>
//10/10
int triSup(int N, float m [N][N]){
	int i,j;
	float r = 0;
	for(i=0; i<N && r==0; i++){
		for(j=0; j<i && r==0; j++)
			r = m[i][j];
	}
	return !r;
}

int main(){
	return 0;
}

