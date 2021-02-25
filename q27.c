#include <stdio.h>
//10/10
void merge(int r[], int a[], int b[],int na, int nb){
	int i,j,p;
	i = j = 0;
	for(p=0; p<(na+nb); p++){
		if(i>=na){
			r[p] = b[j];
			j++;
		}
		else if(j>=nb){
			r[p] = a[i];
			i++;
		}
		else{
			if(a[i] < b[j]){
				r[p] = a[i];
				i++;
			} 
			else{
				r[p] = b[j];
				j++;
			}

		}
	}
}

int main(){
	return 0;
}

