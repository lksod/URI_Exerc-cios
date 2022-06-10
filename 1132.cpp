#include <stdio.h>

int main(){
    int X,Y,c=0,x;
    scanf("%d%d", &X, &Y);
    if(X<Y)
    {
        for(x=X; x<=Y; x++)
        {
            if(x%13==0) continue;
            c+=x;
        }
    }
    else if(X>Y)
    {
        for(x=Y; x<=X; x++)
        {
            if(x%13==0) continue;
            c+=x;
        }
    }
    printf("%d\n",c);
    return 0;
} 
