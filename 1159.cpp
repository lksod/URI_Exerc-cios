#include <stdio.h>

int main(){
	
	int X,cont=0,i,soma=0,aux=1;
	
	while(X!=0){
		soma=0;
		cont=0;
		scanf("%d",&X);
		while(cont!=5){
			if(X%2==0){
				soma+=X;
				cont++;
			}
			X++;
		}
		printf("%d\n",soma);
	}
}
