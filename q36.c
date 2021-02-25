#include <stdio.h>
//10/10
int pertence(int v[], int n, int x){
	int i;
	for(i=0; i<n; i++)
		if(x == v[i]) return 1;
	return 0;
}
int comuns(int a[], int na, int b[], int nb){
	int i,j,c;
	c = 0;
	for(i=0; i<na; i++){
		for(j=0; j<nb; j++){
			if(b[j] == a[i] && !pertence(b,j,b[j]))
				c++;
		}
	}
	return c;
}

int main(){
	return 0;
}

