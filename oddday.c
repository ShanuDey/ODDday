#include<stdio.h>
int main()
{
	int dd,mm,yy,r,x,i,odd=0;
	int year[]={31,28,31,30,31,30,31,31,30,31,30,31};
	//char s[7][3]={'sun','mon','tue','wed','thu','fri','sat'};
	printf("Enter the date in dd/mm/yyyy format : ");
	scanf("%d %d %d",&dd,&mm,&yy);
	r=(yy-1)%400;
	odd+=(r/100)*5;
	odd%=7;
	r%=100;
	x=r/4;
	odd+=(x*2)+(r-x);
	odd%=7;
	for(i=0;i<mm-1;i++)
	{
		odd+=year[i];
	}
	odd+=dd;
	printf("The day of that date is %d",odd%7);
	return 0;
}
