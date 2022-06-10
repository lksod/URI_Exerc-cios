#include <stdio.h>

int main(){

	double i,S=1,X=0;
	
	for(i=1;i<=100;i++){
		X=1/i;
		S+=X;
	}
	printf("%.2lf\n",S);
	return 0; 
}
