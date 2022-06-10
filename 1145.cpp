#include <stdio.h>

int main(){
	
	int X=0, Y=0,cont=0,i=0;
	
	scanf("%d%d",&X, &Y);
	
	for(i=1;i<=Y;i++){
		printf("%d ",i);
		cont++;
		if(cont==X){
			printf("\n");
			cont=0;
		}
	}
	printf("\n");
}
