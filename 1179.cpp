#include <stdio.h>

int main(){
	
	int I[5], P[5], X, i=0, j=0, cont=0;

	while(cont!=15){
		scanf("%d",&X);
		cont++;
		if(X%2==0){
			P[i]=X;
			i++;
		}else{
			I[j]=X;
			j++;
		}
		if(i==5){
			for(i=0;i<5;i++){
				printf("par[%d] = %d\n",i,P[i]);
			}
			i=0;
		}
		if(j==5){
			for(j=0;j<5;j++){
				printf("impar[%d] = %d\n",j,I[j]);
			}
			j=0;
		}
	}
	for(i=0;i<5;i++){
		printf("par[%d] = %d\n",i,P[i]);
	}
	for(j=0;j<5;j++){
		printf("impar[%d] = %d\n",j,I[j]);
	}
}
