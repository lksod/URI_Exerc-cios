#include <stdio.h>

int main (){
	
	int X, Y;
	
	while(X!=Y){
	scanf("%d%d",&X,&Y);	
		if(X==Y){
		    break;
		}
		if(X>Y){
			printf("Decrescente\n");
		}else{
			printf("Crescente\n");
		}
	}
}
