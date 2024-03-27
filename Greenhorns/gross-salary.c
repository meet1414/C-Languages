#include<stdio.h>
main(){
	int bs=0 , hra=0, ta=0 , da=0, gs ;
	
	printf("Base Salary + HRA 10%% + DA 8%% + TA 5%% = Gross Salary\n");
	printf("Enter of Basic Salary = ");
	scanf("%d", &bs);
	
	hra = bs*hra/100;
    printf("Enter The House Rent Allowance = ");
	scanf("%d", &hra);
	
	ta = bs*ta/100;
	printf("Enter The Travelling Allowance = ");
	scanf("%d", &ta);
	
	da= bs*da/100;
	printf("Enter The Dearness Allowance = ");
	scanf("%d", &da);
	
	gs=bs+hra+ta+da;
	printf("Enter The Value =%d",gs);
	
}