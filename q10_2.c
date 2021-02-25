include <stdio.h>
//10/10
char *mystrstr(char s1[], char s2[]){
	char *x = 0;
	int i,j=0;
	for(i=0; s1[i] != '\0' && x == 0; i++){
		j = 0;
		while(s1[i+j] ==  s2[j] && s1[i+j] != '\0' && s2[j] != '\0'){
			j++;
		}
		if(s2[j] == '\0'){
			x = s1+i;
		}
	}
	if(s1[0] == s2[0] && s1[0] == '\0'){
	    x = s1;
	}
	return x;
}
int main(){
	return 0;
}

