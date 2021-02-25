#include <stdio.h>
//10/10
char *stringcat(char s1[], char s2[]){
	int i;
	char *s = s1;
	while(*s != '\0'){
		s = s + sizeof(char);
	}
	for(i=0;*(s2+i)!='\0';i++){
		*(s+i)=*(s2+i); 
	}
	*(s+i) = '\0';
	return s1;
}
int main(){
	char s1[] = "Great ";
	char s2[] = "Sucess!";
	stringcat(s1,s2);
	printf("%s\n",s1);
	return 0;
}

