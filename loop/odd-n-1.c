#include<stdio.h>
main(){
	int i=1,n;
	printf("Enter Value N = ");
	scanf("%d",&n);
	
	while(n>=1){
		
		if(n%2==1){
			printf("%d\n",n);
		}
		
		n--;
	}
}