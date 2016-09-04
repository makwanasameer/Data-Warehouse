/*
Roll no:09bce026
Author: Sameer Makwana
Licence: GPLv3
*/

#include<stdio.h>
#include<conio.h>
int a[40];
int mean[20];

void main()
{
	int n;
	clrscr();
	printf("How many data do you want to enter:?  ::");
	scanf("%d",&n);
	printf("Enter the data:\n");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}

	for(i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			if(a[i]>a[j])
			{
				int temp=0;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

 /*	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}  */


	int bin;
	printf("Enter the no of beans:?\n");
	scanf("%d",&bin);
	int bucket=n/bin;
	float s=float(n)/float(bin);
	float t=0;
	t=(float(bucket)+0.5) ;
	if(s>=t)
	{
		bucket++;
	}

	int k=0;
	for(i=0;i<n;i=i+bucket)
	{       int sum=0,counter=0;
		while(counter<bucket)
		{
			sum=sum+a[i+counter];
			counter++;
		}
		mean[k]=sum/bucket;
	      //	printf("mean:%d",mean[k]);
		k++;

	}

	printf("\n");
	int l=0;
	for(i=0;i<n;i+=bucket)
	{
		int counter=0;
		printf("Bin[%d] ::",l);
		while(counter<bucket)
		{
			printf(" %d, ",mean[l]);
			counter++;
		}
		printf("\n");
		l++;
	}


}