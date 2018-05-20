#include<stdio.h>
void main()
{
        int n=0, i=1, a=0, b=0;
        scanf("%d",&n);
        for(i; i<=n;i++){
                scanf("%d",&a);
                if(a>b) b=a;
        };
        printf("%d\n",b);
}

