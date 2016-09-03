#include<stdio.h>
#include<stdlib.h>

void Shuffle(int a[], int k, int n)
{
    int *temp=(int *)malloc(sizeof(int)*2*n);
    while(k>0)
    {
        k--;
        for(int i=0;i<2*n;i++)
            temp[i]=a[i];
         for(int i=0;i<n;i++)
        {
            a[2*i]=temp[i];
            a[2*i+1]=temp[n+i];
        }
        
    }
    free(temp);    
}

int main()
{
    int T,n,k;
    scanf("%d",&T);
    
    for(int i=0;i<T;i++)
    {
        scanf("%d %d",&n,&k);
        int *card=(int *)malloc(sizeof(int)*2*n);
        for(int j=0;j<2*n;j++)
            scanf("%d",&card[j]);
        Shuffle(card,k,n);
        for(int j=0;j<2*n;j++)
        {
            if(j==2*n-1)
                printf("%d",card[j]);
            else
                printf("%d ",card[j]);
        }
	    printf("\n");
        free(card);        
    }
    return 0;
}
