#include <stdio.h>

int main(){
	
	int V,i;
	float X[100];
	
	for(i=0;i<100;i++){
		scanf("%f",&X[i]);
	}
	for(i=0;i<100;i++){
		if(X[i]<=10){
			printf("A[%d] = %.1f\n",i,X[i]);
		}
	}
}
