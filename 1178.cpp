#include <stdio.h>

int main(){
	
	double T=0, N[100],aux=0;
	int i=0;
	
	scanf("%lf",&T);
	N[0] = T;
	aux= T;
	for(i=1;i<100;i++){
		aux = aux/2;
		N[i]=aux;
	}
	for(i=0;i<100;i++){
		printf("N[%d] = %.4lf\n",i,N[i]);
	}
}
