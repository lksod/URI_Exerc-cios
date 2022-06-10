#include <stdio.h>

int main(){
	
	int V,X[10],i;
	
	scanf("%d",&V);
	X[0]=V;
	for(i=1;i<10;i++){
		V=V*2;
		X[i]=V;
	}
	for(i=0;i<10;i++){
		printf("N[%d] = %d\n",i,X[i]);
	}
	
}
