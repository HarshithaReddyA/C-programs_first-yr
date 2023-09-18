//To calculate simple interest and compound interest
#include<stdio.h>
#include<math.h>
main()
{
	int n;
	float p,q,r,si=0,ci=0;
	printf("Enter the value of p,r and n \n");
	scanf("%f%f%d",&p,&r,&n);
	si=((p*n*r)/100);
	q=1+(r/100);
	ci=p*pow(q,n)-p;
	printf("Simple interest = %f \n Compound Interest= %f ",si,ci);
}
