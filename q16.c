#include <stdio.h>
//10/10
int difConsecutivos(char s[]) {
    	int i,j,r,js,m;
    	r = 1;
	js = 0;
	m = 0; 
	for(i=0; s[i] != '\0'; i++){
		for(j = js;s[j] != s[i];j++){
			;	
		}

		if(j < i){
			r = i-j;
			js = j+1;
		}

		if (r>m)
			m = r;
		r++;
	}
	return m;

}

int main(){
	char s[] = "mundo cruel!!";
	int x;
	x = difConsecutivos(s);
	printf("%d",x);
	return 0;
}
//mu|ndo cruel!|!!
