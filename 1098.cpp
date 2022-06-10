#include <stdio.h>

int main(){
	
	float I=0, J=0;
	int cont=0,aux=0,i=0;
	while(I!=2 && aux!= 11){
		for(i=0;i<3;i++){
			J=J+1;
			printf("I=%.1f J=%.1f\n",I,J);
		}
		aux++;
		I+=0.2;
		J+=0.2;
		
	}
}
