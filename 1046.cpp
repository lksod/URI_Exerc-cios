#include <stdio.h>

int main(){
	
	int I=0, F=0,Result=0;
	
	scanf("%d%d",&I,&F);
	if(I == F){
		printf("O JOGO DUROU %d HORA(S)\n",24 - I + F);
	}else if(I<=F){
		printf("O JOGO DUROU %d HORA(S)\n",F - I);
	}else{
		printf("O JOGO DUROU %d HORA(S)\n",24 - I + F);
	}
}
