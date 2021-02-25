#include <stdio.h>
//10/10
int pertence(char s[], char c){
	int i;
	for(i=0; s[i] != '\0' && s[i] != c; i++);
	return s[i];
}

int contida(char a[], char b[]){
	int i;
	for(i=0; a[i] != '\0' && pertence(b,a[i]); i++);
	return !a[i];
}

int main(){
	int x;
	char a[] = "Programao Imperativa";
	char b[] = "programao Imperativa";
	x = contida(a,b); 
	printf("%d\n",x);
	return 0;
}

