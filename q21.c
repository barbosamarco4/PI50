#include <stdio.h>
//10/10
int contaVogais(char s[]){
	int i,r;
	r=0;
	for(i=0; s[i] != '\0'; i++){
		if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
			r++;
	}
	return r;
}

int main(){
	return 0;
}

