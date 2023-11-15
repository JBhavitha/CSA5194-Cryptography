#include<stdio.h>
#include<math.h>
int main()
{
	int a,xa,xb,q,m,ya,yb,ka,kb,o,p,n;
	printf("enter the val of alpha : ");
	scanf("%d",&a);
	printf("enter the val of xa : ");
	scanf("%d",&xa);
	printf("enter the val of xb : ");
	scanf("%d",&xb);
	printf("enter the val of q : ");
	scanf("%d",&q);
	m=pow(a,xa);
	ya=m%q;
	n=pow(a,xb);
	yb=n%q;
	o=pow(ya,xb);
	ka=o%q;
	p=pow(yb,xa);
	kb=p%q;
	printf("secret key of u ser a : %d\n",ka);
	printf("\n`secret key of u ser b : %d",kb);
	
}
