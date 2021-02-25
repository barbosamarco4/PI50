#include <stdio.h>
char *stringstr(char s1[], char s2[]){
	int i =0,j=0;
	char *r = NULL;
  	if(*s1 == *s2 && *s1 == '\0')
        	r = s1;
	else{
		while(s1[i] != '\0'){
			 for(j=0;(s1[i+j] == s2[j]) && (s1[i+j] != '\0');j++){
		       		 ;
		   	 }
			 if(s2[j] == '\0'){
				 r = s1+i;
		   	 }
		   	 i++;
	   	 }
	}
	return r;
}
int main(){
	char c[] = "";
	printf("x = %d x+1 = %d\n",*c,*(c+2));
	return 0;
}

