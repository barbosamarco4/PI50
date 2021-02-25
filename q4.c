#include <stdio.h>
//10/10
int bitsUM(int n){
	int c = 0;
	while(n){
		c += n & 1; /*&=bitwise and*/
		n = n >> 1; /*>>=right shift */
	}
	return c;
}

int main(){
	printf("%d\n",bitsUM(100));
	return 0;
}
