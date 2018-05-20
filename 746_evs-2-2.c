#include<stdio.h>
void main()
{
	int n=0, i=1, a, b=1;
	scanf("%d",&n);
        for(i; i<=n;i++){
                scanf("%d",&a);
		a=a-i;
		b=b*a;
        };
        printf("%d\n",b);
}

	
