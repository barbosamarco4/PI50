#include <stdio.h>
//10/10
int qDig(int n){
	int p = 10;
	int i = 1;
	while(n%p != n){
		p = p*10;
		i++;
	}
	return i;
}

int main(){
	int d = qDig(0);
	printf("Digitos:%d\n",d);
	return 0;
}
