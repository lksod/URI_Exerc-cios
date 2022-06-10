#include <stdio.h>

int main(){
	
	int N=0, X=0, Y=0, soma=0, i=0, j;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&X);
		scanf("%d",&Y);
		
		if(X>Y){
			for(j=X;j<Y;j++){
				printf("!");
				if(j%2==1){
					soma+=j;
				}
			} 
		}
		if(Y>X){
			for(j=Y;j<X;j++){
				if(j%2==1){
					printf("!");
					soma+=j;
				}
			}
		}
		printf("%d\n",soma);
		soma=0;
	}
}
