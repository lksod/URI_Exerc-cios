#include <stdio.h>

int main()
{
    int N=0, X=0, i;
    
    scanf ("%d", &N);
    
    for(i=1;i<=N;i++){
    	
        scanf ("%d",&X);
        
        if(X==0)
            printf("NULL\n");
        else if(X<=0&&X%2==0)
            printf ("EVEN NEGATIVE\n");
        else if(X<=0&&X%2==-1)
            printf ("ODD NEGATIVE\n");
        else if(X>=0&&X%2==0)
            printf ("EVEN POSITIVE\n");
        else if(X>=0&&X%2==1)
            printf ("ODD POSITIVE\n");
    }
    return 0;
}
