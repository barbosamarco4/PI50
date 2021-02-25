#include <stdio.h>
//10/10
int remRep (char x[]){
	int i,j;
	j = 0;
	for(i=0;x[i] != '\0'; i++){
		if (x[i] != x[i+1]){
			x[j] = x[i];
			j++;
		}
	}
	x[j] = '\0';
	return j;
}

int main(){
	return 0;
}

