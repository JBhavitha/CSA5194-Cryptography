#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int p,q,m,e,d,dn,n,x,c,y,de;
	printf("enter p val : ");
	scanf("%d",&p);
	printf("enter q val : ");
	scanf("%d",&q);
	printf("enter m val : ");
	scanf("%d",&m);
	printf("enter e  val : ");
	scanf("%d",&e);
	n=p*q;
	dn=(p-1)*(q-1);
	for(int i=1;i<dn;i++)
	{
		if(((e%n)*(i%n))%dn == 1)
		 {
		 	d=i;
		 	break;
		 }
	}
	x=pow(m,e);
	c=x%n;
	y=pow(c,d);
	de=y%n;
	printf("encrypted val : %d",c);
	printf("decrypted val : %d",m);
	
}
