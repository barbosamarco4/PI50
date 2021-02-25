#include <stdio.h>
#include <math.h>
//10/10
int trailingZ(int n){
	int p = 2;
	int i = 1;
	while(n % p == 0){
		p=p*2;
		i++;
	}
	return (i-1);
}

int main(){
	int a = trailingZ(1);
	printf("%d\n",a);
	return 0;
}
