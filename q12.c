#include <stdio.h>
//10/10
void strnoV(char s[]){
	int i=0,j=0;
	while(*(s+i) != '\0'){
		if(*(s+i) == 'a' || *(s+i) == 'e' || *(s+i) == 'i' || *(s+i) == 'o' || *(s+i) == 'u' ||*(s+i) == 'A'||*(s+i) == 'E'||*(s+i) == 'I'||*(s+i) == 'O'||*(s+i) == 'U'){
			;	
		}
		else{
			*(s+j)=*(s+i);
			j++;
		}
		if(*(s+i+1) == '\0')
			*(s+j) = '\0';
		i++;
	}
}
int main(){
	char s[] = "Do Re Mi Fa Sol La Si, Ananas";
	printf("%s\n",s);
	strnoV(s);
	printf("%s\n",s);
	return 0;
}

