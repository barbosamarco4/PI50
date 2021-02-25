#include <stdio.h>
//10/10
int maiorPrefixo(char s1[], char s2[]){
	int r = 0;
	while(*s1 == *s2){
		r++;
		s1++;
		s2++;
	}
	return r;
}
int main(){
	return 0;
}

