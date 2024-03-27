#include<stdio.h>
main(){
	int choice;
	
	printf("Press 1 for Sunday\n");
	printf("Press 2 for Monday\n");
	printf("Press 3 for Tuesday\n");
	printf("Press 4 for Wednesday\n");
	printf("Press 5 for Thursday\n");
	printf("Press 6 for Friday\n");
	printf("Press 7 for Saturday\n");
	
	printf("Enter Your Choice =");
	scanf("%d",&choice);
	
	switch(choice){
		case 1 :
				printf("Sunday");
				break;
		case 2 :
				printf("Monday");
				break;
		case 3 :
				printf("Tuesday");
				break;
		case 4 :
				printf("Wednesday");
				break;
		case 5 :
				printf("Thursday");
				break;
		case 6 :
				printf("Friday");
				break;
		case 7 :
				printf("Saturday");
				break;
		default :
				printf("Pls Enter Valid Choice");
	}
	 
	
	
}