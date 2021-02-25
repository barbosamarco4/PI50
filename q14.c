#include <stdio.h>
//10/10
int contaChar(char c,char s[]){
	int x=0;
	while(*s != '\0'){
		if(*s == c)
			x++;
		s++;
	}
	return x;
}
char charMaisfreq(char s[]){
	char c;
	int x=0;
	while(*s != '\0'){
		if(contaChar(*s,s)>x){
			c = *s;
			x = contaChar(*s,s);
		}
		s++;
	}
	return c;
}
int main(){
	char s1[] = "";
	char c = charMaisfreq(s1);
	printf("%c",c);
	return 0;
}

