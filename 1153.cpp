#include <stdio.h>

int main(){
	
	int N,soma=1,i;
	
	scanf("%d",&N);

	for(i=N;i>=1;i--){
		soma*=i;
	}
	printf("%d\n",soma);
}
