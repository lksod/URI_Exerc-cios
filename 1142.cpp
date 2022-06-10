#include <stdio.h>

int main(){
	
	int N=0,cont1=0,contN=0,I=0;
	
	scanf("%d",&N);
	while(contN!=N){
		I++;
		cont1++;
		printf("%d ",I);
		if(cont1==3){
			I++;
			cont1=0;
			printf("PUM\n");
			contN++;
		}
	}
}
