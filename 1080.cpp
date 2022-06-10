#include <stdio.h>

int main(){
	
	int N=0,i=0,maior=0,posi=0;
	
	for(i=1;i<=100;i++){
		scanf("%d",&N);
		if(N>maior){
			maior=N;
			posi=i;
		}
	}
	printf("%d\n%d\n",maior,posi);
	return 0;
}
