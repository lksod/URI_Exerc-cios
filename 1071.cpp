#include <stdio.h>

int main(){
	
	int X=0,Y=0,i,soma=0;
	
	scanf("%d%d",&X,&Y);
	
	if(X<Y){
		for(i=X;i<=Y;i++){
 			if(i%2!=0){
				soma++;
			}
		}
	}
	if(Y<X){
		for(i=Y;i<=X;i++){
 			if(i%2!=0){
				soma++;
			}
		}
	}
	printf("%d",soma);
}
