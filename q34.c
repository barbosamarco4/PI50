#include <stdio.h>
//10/10
int elimRepOrd(int v[], int n){
	int i,j;
	j = 1;
	for(i=1; i<n; i++){
		if(v[i-1] != v[i]){
			v[j] = v[i];
			j++;
		}
	}
	return j;
}

int main(){
	return 0;
}

