#include <stdio.h>

int main(){
	
	int X=0, Y=0, i=0, N=0;
	float Result=0;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d%d",&X,&Y);
		if(Y==0){
			printf("divisao imposivel\n");
		}else{
			Result=(float)X/Y;
			printf("%.1f\n",Result);
		}
	}
}
	
