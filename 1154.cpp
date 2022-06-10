#include <stdio.h>

int main (){
	
	int X,Soma=0;
	double media, cont=0;
	
	while(X>=0){

		scanf("%d",&X);
		if(X<0){
			break;
		}
		Soma+=X;
		cont++; 
	}

	media = Soma/cont;
	printf("%.2lf\n",media); 
}
