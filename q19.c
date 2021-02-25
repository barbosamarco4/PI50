#include <stdio.h>
#include <string.h>
int prefixo(char s[],char t[]){
	int i;
	for(i=0; s[i] != '\0' && s[i] == t[i]; i++);
	return(!s[i]);
}
int sufPref(char s1[], char s2[]){
	int i;
	for(i=0; !(prefixo(s1+i,s2)) && s1[i] != '\0'; i++);
	return strlen(s1+i);
}
int main(){
	int x;
	char s1[] = "batota";
	char s2[] = "totalidade";
	x = sufPref(s1,s2);
	printf("%d\n",x);
	return 0;
}

