#include <stdio.h>
//10/10
char *stringcopy (char *dest, char source[]){
	int i;
	for(i=0;*(source+i) != '\0';i++){
		*(dest+i)=*(source+i);
	}
	*(dest+i)='\0';
	return dest;
}
int main(){
	char source[] = "Great Sucess!";
	char dest[]="                 ";
	printf("%s\n",dest);
	stringcopy(dest,source);
	printf("%s",dest);
	return 0;
}

