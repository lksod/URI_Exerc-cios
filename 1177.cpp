#include <stdio.h>

int main(){
	
	int T=0,N[1000],cont=0,i=0;
	
	scanf("%d",&T);
	
	for(i=0;i<1000;i++){
		
		N[i]=cont;
		cont++;
		if(cont==T){
			cont=0;
		}
	}
	for(i=0;i<1000;i++){
		printf("N[%d] = %d\n",i,N[i]);
	}
}
