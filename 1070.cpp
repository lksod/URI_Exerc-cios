#include <stdio.h>

int main(){
	
	int X=0,cont=0;
	
	scanf("%d",&X);
	
	while(cont != 6){
		if(X%2!=0){
			cont++;
			printf("%d\n",X);
		}
		X++;
	}
}
