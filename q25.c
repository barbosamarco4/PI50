#include <stdio.h>

int limpaEspacos (char t[]){
	int i,j;
	j = 0;
	for(i=0; t[i] != '\0'; i++){
		while(isspace(t[i]))
			i++;
		t[j] = t[i];
		j++;
	}
	return j;
}
int main(){
	return 0;
}

