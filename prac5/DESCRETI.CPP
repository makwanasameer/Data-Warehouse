#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>

struct interval
{
float min;
float max;
float inter[10][10];

}ival[10];

void  main()
{
	float min,max,low,high,low1,high1;
	clrscr();

	printf("Enter min value : ");
	scanf("%f",&min);
	printf("\nEnter max value : ");
	scanf("%f",&min);
	printf("\nEnter low value : ");
	scanf("%f",&low);
	printf("\nEnter high value : ");
	scanf("%f",&high);



	int j=-1;
	float temp;
	if(abs(low)>abs(high)){ temp=abs(low); }
	else temp=abs(high);

	while(temp>1)
	{
		temp=temp/10;
		j++;
	}

 //temp=abs(low);
  temp=abs(low);

 printf("low1= %f ",temp);
  temp=temp*10;
  temp=floor(temp);
   printf("temp = %f ",temp);
   if(low<0)
     {
     temp=((-1*temp)-1)*(pow(10,j));

     }
 else
     {
     temp=(temp)*(pow(10,j));

     }

     printf("low' = %f ",temp);

  j=-1;
  temp;
 if(abs(low)>abs(high)){ temp=abs(low); }
 else temp=abs(high);

 while(temp>1)
 {
  temp=temp/10;
  j++;
  }


// printf("low1= %f ",temp);
  temp=temp*10;
  temp=ceil(temp);

//   printf("temp = %f ",temp);
   if(high<0)
     {
     temp=((-1*temp)+1)*(pow(10,j));

     }
 else
     {
     temp=(temp)*(pow(10,j));

     }

     printf("high' = %f ",temp);

     getch();

}


