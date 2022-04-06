#include<stdio.h>
#include<conio.h>
int max,min;
void Max_Min(int a[],int i,int j)
{
int mid,max1=0,min1=0;
if(i==j)
{
max=min=a[i];
}
else if(i==j-1)
{
if(a[i]>a[j])
{
max=a[i];
min=a[j];
}
else
{
max=a[j];
min=a[i];
}
}
else
{
mid=(i+j)/2;
Max_Min(a,i,mid);
max1=max;min1=min;
Max_Min(a,mid+1,j);
printf("\n%d\t%d\t%d\t%d",max,min,max1,min1);
if(max1>max)
max=max1;
if(min1<min)
min=min1;
}
}

void main()
{
int a[5],i,j=0,k=0;
clrscr();
printf("Enter Array To Be Sorted\n");
for(i=0;i<5;i++)
scanf("%d",&a[i]);
Max_Min(a,0,4);
printf("\nMax = %d\tMin = %d",max,min);
getch();
}