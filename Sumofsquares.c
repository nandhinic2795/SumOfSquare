#include <stdio.h>

int main(void) { 
	int n,sum=0,r;
	scanf("%d",&n);
	while(n>=1)
	{
	r=n%10;
        sum=sum+(r*r);
        n=n/10;
	}
	printf("%d",sum);
	return 0;
}
