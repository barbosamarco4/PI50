#include <stdio.h>
//10/10
int maiorSufixo (char s1[], char s2[]){
	int i,j,r;
	r = 0;
	for(i=0; s1[i] != '\0'; i++){
		;
	}
	for(j=0; s2[j] != '\0'; j++){

	}
	i--;
	j--;
	while(s1[i] == s2[j] && i>=0 && j >= 0){
		r++;
		j--;
		i--;
	}
	return r;
}
int main(){
	return 0;
}

