#include<stdio.h>
#include<string.h>
int main()
{
	int k,l,i,j;
	char a[80],b[80],c[80];
	printf("enter the plain text : ");
	scanf("%s",a);
	l=strlen(a);
	
	for(i=0,j=0;i<l;i++)
	{
		if(i%2==0)
		  c[j++]=a[i];
	}
	for(i=0;i<l;i++)
	{
		if(i%2==1)
		c[j++]=a[i];
	}
	c[j]='\0';
    printf("%s",c);
    if(l%2==0)
     k=l/2;
    else
     k=(l/2)+1;
	for(i=0,j=0;i<k;i++)
	{
		b[j]=c[i];
		j=j+2;
	}
		for(i=k,j=1;i<l;i++)
	{
		b[j]=c[i];
		j=j+2;
	}
	b[l]='\0';
	printf("%s",b);

}
