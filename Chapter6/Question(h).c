/* Write a program to generate all Pythagorean Triplets with side 
length less than or equal to 30.*/
#include<stdio.h>
int main()
{
	int i,j,k;
	for(i=1;i<=30;i++)
		for(j=1;j<=30;j++)
			for(k=1;k<=30;k++)
				printf("%d%d%d\n",i,j,k);
}