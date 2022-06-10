#include <stdio.h>

int main(){
	
	int i,j=1; 
	float S=1;
	
	for(i=1;i<=39;i+=2){
		S+=i/j;
		j*=2;	
	}
	printf("%.2f\n",S);
}
