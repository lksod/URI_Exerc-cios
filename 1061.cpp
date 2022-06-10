#include <stdio.h>

int main(){
	
	int w=0, x=0, y=0, z=0;
	int w1=0, x1=0, y1=0, z1=0;

	scanf("%d : %d : %d : %d",&w,&x,&y,&z);
	

	scanf("%d%d%d%d",&w1,&x1,&y1,&z1);
	
	if(w> w1){
	printf("%d dia(s)\n", w - w1);
	}else{
	printf("%d dia(s)\n", (w1 - w)-1);
	}
	
	if(x>x1){
	printf("%d hora(s)\n", 24 - (x - x1));
	}else{
	printf("%d hora(s)\n", 24 - (x1 - x));
	}
	
	if(y>y1){
	printf("%d minuto(s)\n", y - y1);
	}else{
	printf("%d minuto(s)\n", y1 - y);
	}
	if(z>z1){
	printf("%d segundo(s)\n", z - z1);
	}else{
	printf("%d segundo(s)\n", z1 - z);
	}
}
