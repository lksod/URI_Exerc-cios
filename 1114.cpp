#include <stdio.h>

int main(){
	
	int aux=0, X;
	
	while(aux!=1){
		scanf("%d",&X);
		
		if(X==2002){
			aux=1;
			printf("Acesso Permitido\n");
			break;
		}else{
			printf("Senha Invalida\n");
		}	
	}
}
