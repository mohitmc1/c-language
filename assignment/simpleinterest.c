#include<stdio.h>
main()
{
	int principal, rate, time, interest;
	printf("enter principal : ");
	scanf("%d",&principal);
	printf("eneter rate : ");
	scanf("%d",&rate);
	printf("eneter time : ");
	scanf("%d",&time);
	interest=principal*rate*time/100;
	printf("the simple interest is %d",interest);
}
