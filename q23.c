#include <stdio.h>
#include <string.h>
//10/10
int palindroma(char s[]){
	int e,r,i;
	r = 0;
	e = strlen(s)-1;
	for(i=0;(e-i)>i && r == 0;i++){
		r = s[i] - s[e-i];
	}
	return !r;
}
int main(){
	int x;
	char s[] = "{( ({"; 
	x = palindroma(s);
	printf("%d\n",x);
	return 0;
}

