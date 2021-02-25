#include <stdio.h>
//10/10
int comunsOrd(int a[], int na, int b[], int nb){
	int i,j,c;
	c = 0;
	i = j = 0;
	while(i<na && j<nb){
		if(a[i] == b[j]){
			c++;
			j++;
			i++;
		}
		else if(a[i] < b[j])
			i++;
		else
			j++;
	}
	return c;
}

int main(){
	return 0;
}

