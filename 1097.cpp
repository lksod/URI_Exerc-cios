#include <stdio.h>

int main(){
	
	int I=1, J=8,cont=0,aux=0,i=0;
	while(J!=5 && aux!= 5){
		for(i=0;i<3;i++){
			J=J-1;
			printf("I=%d J=%d\n",I,J);
		}
		aux++;
		J+=5;
		I+=2;
	}
}
