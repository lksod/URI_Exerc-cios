#include <stdio.h>

int main(){
	
	int X, i=0;
	
	while(X!=0){
		scanf("%d",&X);
		for(i=1;i<=X;i++){
			printf("%d",i);
			if(i!=X){
				printf(" ");
			}else{
				printf("\n");
			}
		}
		
	}  
	return 0;
}
