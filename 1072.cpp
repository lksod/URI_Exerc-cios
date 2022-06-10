#include <stdio.h>

int main(){
	
	int in=0,out=0,X=0,N=0,i=0;
	
	scanf("%d",&N);
	
	for(i=0;i<N;i++){
		scanf("%d",&X);
		if(X>=10 && X<=20){
			in++;
		}else{
			out++;
		}
	}
	printf("%d in\n",in);
	printf("%d out\n",out);
}
