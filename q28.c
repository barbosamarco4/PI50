#include <stdio.h>
//10/10
int crescente(int a[], int i, int j){
	while(j > i && a[j] >= a[j-1]){
		j--;
	}
	return (j == i);
}

int main(){
	return 0;
}

