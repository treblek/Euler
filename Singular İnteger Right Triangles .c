//not yet completed

#include "stdio.h"
#define maxValue 1500000
int result();
int control(int number);
int main(void)
{
	printf("%d",result());
	return -1;
}
int result()
{
	int res =0;
	for(int i =12;i<=maxValue;i++)
	{
			if(control(i) == 1)
			{
				printf("%d\n",i);
				res++;
			}
		
	}
	return res;
}
int control(int number)
{
	int flag1=1,flag2=1,flag3=1;
	int num1=number ,num2=number ,num3 =number;
	
	while(num1>0)
	{
			if(num1%12==0)
			{
				num1-=12;
			}
			else
			{
				flag1 = 0;
				break;
			}
	}
		while(num2>0)
	{
			if(num2%30==0)
			{
				num2-=30;
			}
			else
			{
				flag2 = 0;
				break;
			}
	}
		while(num3>0)
	{
			if(num3%40==0)
			{
				num3-=40;
			}
			else
			{
				flag3 = 0;
				break;
			}
	}
	if(flag1==0&&flag2==0&&flag3==0) return 0;
	return 1;
}
