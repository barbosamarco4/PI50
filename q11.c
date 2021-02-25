#include <stdio.h>
#include<string.h>
//10/10
void strrev(char s[]){
	char c;
	int i,e; 
	e = strlen(s)-1;
	for(i=0;i<(e/2)+1;i++){
		c = s[i];
		s[i] = s[e-i];
		s[e-i] = c;
	}
	return;
}
int main(){
	char s[] = "";
	strrev(s);
	printf("%s",s);
	return 0;
}

