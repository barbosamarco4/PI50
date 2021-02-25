#include <stdio.h>
#include <ctype.h>
//10/10
int contaPal(char s[]){
	int r,i;
	r = 0;
	i = 0;
	if(s[i] == '\0')
		return 0;
	for(i=1; s[i] != '\0'; i++){
		if(isspace(s[i]) && !isspace(s[i-1])){
			r++;
		}
		while(isspace(s[i]) && s[i+1] != '\0')
			i++;
	}
	if(!isspace(s[i-1]))
		r++;
	return r;
}

int main(){
	return 0;
}

