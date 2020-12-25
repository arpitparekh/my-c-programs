#include<stdio.h>

int main()
{
	int choice;
	printf("Please press 1 to display Monday to Sunday : ");
	scanf("%d",&choice);
	
	switch(choice)
	{
	
	
	case 1:
		printf("Monday\nTuesday\nWednesday\nThursday\nFriday\nSaturday\nSunday");
		
		break;
	default :
		printf("\nPlease press 1 for Result");
	
	}
}
