#include <stdio.h>

int main(){
	
	int X=1, Y;
	
	while(X!=0){	
		scanf("%d%d",&X, &Y);
		if(X>0 && Y>0){
			printf("primeiro\n");
		}
		if(X>0 && Y<0){
			printf("quarto\n");
		}
		if(X<0 && Y<0){
			printf("terceiro\n");
		}
		if(X<0 && Y>0){
			printf("segundo\n");
		}
	}
}
