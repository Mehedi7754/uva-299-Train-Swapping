#include<stdio.h>
int main()
{
    int t,n,a[100],i,k,j,count,tem;
    while(scanf("%d",&t)==1){
    for(k=0;k<t;k++){
        scanf("%d",&n);
        for(i=0;i<n;i++){
            count=0;
            tem=0;
            scanf("%d",&a[i]);
        }
        for(i=0;i<n;i++){
            for(j=0;j<n-i-1;j++){
                if(a[j]>a[j+1]){
                    count++;
                    tem=a[j];
                    a[j]=a[j+1];
                    a[j+1]=tem;
                }
            }
        }
        printf("Optimal Train swapping takes %d swaps.\n",count);
    }
    }
    return 0;
}
