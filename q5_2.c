#include <stdio.h>
#include <math.h>
//10/10
int trailingZ(int n){
	int i = 0;
	while(n & 1){
		n = n >> 1;
		i++;
	}
	return i;
}

int main(){
	int a = trailingZ(1);
	printf("%d\n",a);
	return 0;
}
