#include <stdio.h>

int main(){
	
	int N=0,i=0;
	double X=0, Y=0, Z=0,soma=0;;
	
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
		scanf("%lf%lf%lf", &X, &Y, &Z);
		soma = ((X*2 + Y*3 + Z*5)/10);
		printf("%.1lf\n",soma);
		soma = 0; 
	}
	return 0;
}
