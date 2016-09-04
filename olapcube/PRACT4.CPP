#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	int i;
	float mean,min,max,new_min,new_max;
	float  ptr[20]={0};
	float array[20]={0};
	int n;
	float convert(float v,float min,float max,float new_min,float new_max);

	clrscr();
	printf("How many values do you want to enter:?");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("Enter the values :: ");
		scanf("%f",&ptr[i]);
	}

	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ptr[i]>ptr[j])
			{
				float temp=ptr[i];
				ptr[i]=ptr[j];
				ptr[j]=temp;
			}
		}
	}
while(1)
{
	printf("\n\n\nEnter the method: \n0)Min-max \n1) Z-score\n \n2)Decimal scaling\n ::");
	int choice=0;
	scanf("%d",&choice);

	switch(choice)
	{
		case 0:
			printf("Enter the new min ?");
			scanf("%f",&new_min);
			printf("Enter the new max ?");
			scanf("%f",&new_max);

			for(i=0;i<n;i++)
			{
			array[i]=convert(ptr[i],ptr[0],ptr[n-1],new_min,new_max);
			}

			for(i=0;i<n;i++)
			printf("old values:%f  transformed:%f \n",ptr[i],array[i]);
			break;

		case 1:
			float zscore[20]={0};
			mean=0;
			for(i=0;i<n;i++)
			{
				mean=mean+ptr[i];
			}
			float temp=0;
			for(i=0;i<n;i++)
			{
				temp=temp+((ptr[i]-mean)*(ptr[i]-mean));
			}
			float variance=temp/n;
			for(i=0;i<n;i++)
			{
				zscore[i]=((ptr[i]-mean)/sqrt(variance));
			}

			for(i=0;i<n;i++)
			printf("\nOld values: %f  transformed values:%f \n",ptr[i],zscore[i]);

			break;
		case 2:




			break;
		default:        exit(0);
				printf("incorrect entry");
				break;
	}//End of switch
}//End of while

}

float convert(float v,float min,float max,float new_min,float new_max)
{
	return ( ((v-min)*(new_max-new_min)/(max-min))+new_min );
}









