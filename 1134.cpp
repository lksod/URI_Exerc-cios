#include <stdio.h>

int main(){
	
	int X=0,Aux=0, G=0,A=0, D=0;
	
	scanf("%d",&X);
	while(X!=4){
		if(X>0 || X<3){
			if(X==1){
				A++;
			}
			if(X==2){
				G++;
			}
			if(X==3){
				D++;
			}
		}
		scanf("%d",&X);
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n",A);
	printf("Gasolina: %d\n",G);
	printf("Diesel: %d\n",D);
	
	return 0;
}
