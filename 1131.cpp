#include <stdio.h>

int  main(){
	
	int Aux=1, I=0, G=0, SomaI=0, SomaG=0, SomaE=0,SomaT=0;
	
	while(Aux==1){
		scanf("%d%d",&I,&G);
		SomaT++;
		if(I>G){
			SomaI++;	
		}else{
			SomaG++;
		}
		if(G==I){
			SomaE++;
		}
		printf("Novo grenal (1-sim 2-nao)\n");
		scanf("%d",&Aux);
	}
	printf("%d grenais\n",SomaT);
	printf("Inter: %d\n",SomaI);
	printf("Gremio: %d\n",SomaG);
	printf("Empates: %d\n",SomaE);
	if(SomaG>SomaI){
		printf("Gremio vendeu mais\n");
	}else{
		printf("Inter vendeu mais\n");
	}if(SomaE>=1){
		printf("Nao houve vencedor\n");
	}
}		
