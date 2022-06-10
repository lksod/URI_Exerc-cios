#include <stdio.h>
#include <math.h>

int main(){
	
	float x1=0, x2=0, y1=0, y2=0,Distancia=0;

	
	scanf("%f%f",&x1,&y1);
	scanf("%f%f",&x2,&y2);
	
	Distancia = sqrt(pow((x2 - x1),2) + pow((y2 - y1),2));
	printf("%.4f\n",Distancia);
	
}
