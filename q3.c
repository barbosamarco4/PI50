
#include <stdio.h>

int main(){
	int i,x=0,y;
	while(i!=0){
		scanf("%d",&i);
		if (i>x){
			y=x;
			x=i;
		}
		else if(i>y)
			y=i;
	}
	printf("Segundo:%d\n",y);
	return 0;
}
