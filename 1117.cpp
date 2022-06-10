#include <stdio.h>

int main(){
	
	float X=0, N=0, Media=0 ;
	int Aux=0;
	
	while(Aux != 2){
		
		if(Aux == 2){
			break;
		}
		scanf("%f",&X);
		if(X>=0 && X<=10){
			N+=X;
			Aux++;	
		}else{
			printf("nota invalida\n");
		}
	}
	Media = N/2;
	printf("media = %.2f\n",Media);   
}
