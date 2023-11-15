#include<stdio.h>
#include<ctype.h>
int main()
{
	char plaintext[50];
	char key[]= "NOPQRSTUVWXYZABCDEFGHIJKLM";  
	printf("enter the plain text val : ");
	scanf("%s",plaintext);
	for(int i=0;plaintext[i];i++)
	{
		 if(isalpha(plaintext[i]))
		 {
		 	plaintext[i]=key[tolower(plaintext[i])-'a'];
		 }
	}
	printf("encrypted message is : %s",plaintext);
}
