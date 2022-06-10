#include <stdio.h>

int main (){
	
	int X=0, i=0, Q=0, somaT=0, somaC=0, somaR=0, somaS=0;
	float pC=0, pR=0, pS=0, Result=0;
	char Z;
	
	scanf("%d",&X);
	
	for(i=1;i<=X*2;i++){
		scanf("%d",&Q);
		somaT+=Q;
		scanf("%c",&Z);
		 
		if(Z=='C'){
			somaC+=Q;
		}
		if(Z=='R'){
			somaR+=Q;
		}
		if(Z=='S'){
			somaS+=Q;
		}
	}
	Result=somaT/2;
	
	pC=(somaC*100)/Result;
	pR=(somaR*100)/Result;
	pS=(somaS*100)/Result;
	
	printf("Total: %d Cobaias\n",somaT);
	printf("Total de coelhos: %d\n",somaC);
	printf("Total de ratos: %d\n",somaR);
	printf("Total de sapos: %d\n",somaS);
	printf("Percentual de coelhos: %.2f %%\n",pC);
	printf("Percentual de ratos: %.2f %%\n",pR);
	printf("Percentual de sapos: %.2f %%\n",pS);
	
	return 0;
}
