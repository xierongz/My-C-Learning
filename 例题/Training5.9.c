//例5.9
//输入一个大于3的整数n，判定它是否为素数(prime，又称质数).

#include <stdio.h>
#include <math.h>

int main()
{
	int n,i,k;
	printf("please enter an integer number: n=?");
	scanf("%d",&n);
	k = sqrt(n);
	for(i=2; i<=k; i++)
		if(n%i == 0) break;
	if(i <= k) printf("%d is not a prime number.\n",n);
	else printf("%d is a prime number.\n",n);
	return 0;
		
} 
