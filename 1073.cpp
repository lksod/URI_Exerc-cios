#include <stdio.h>

int main(){
	
	int N=0,i=0,X=0;
	
	scanf("%d",&N);
	
	for(i=1;i<=N;i++){
		X=0;
		if(i%2==0){
			X=i*i;
			printf("%d^%d = %d\n",i,i,X);
		}
	}
}
