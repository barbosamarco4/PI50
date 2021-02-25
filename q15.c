#include <stdio.h>
//10/10
int iguaisConsecutivos(char s[]){
	int c=0,x=1;
	while(*s != '\0'){
		while(*(s) == *(s+1)){
			s++;
			x++;
		}
		if(x>c)
			c = x; 
		x = 1;
		s++;
	}
	return c;
}
int main(){
	char s[] = "aabcccdde";
	int x;
	x = iguaisConsecutivos(s);
	printf("%d",x);
	return 0;
}

