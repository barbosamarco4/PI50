#include <stdio.h>
//10/10
void truncW(char t[],int n){
	int x = 0,i=0,j=0;
	while(*(t+i) != '\0'){
		if(*(t+i) != ' ' && x<n){
			*(t+j) = *(t+i);
			j++;
			x++;
		}
		else if(*(t+i) == ' '){
			*(t+j) = *(t+i);
			j++;
			x=0;
		}
		if(*(t+i+1) == '\0')
			*(t+j) = '\0';
		i++;
	}
}
int main(){
	char s[] = "Calamidade, Fraternidade e Igualdade";
	printf("%s\n",s);
	truncW(s,4);
	printf("%s\n",s);
	return 0;
}

