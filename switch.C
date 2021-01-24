#include<stdio.h>
int main()
{
	char ch,Sandwich,Pizza,frenchfries,burger,pasta;
	printf("1=SANDWICH\n2=PIZZA\n3=FRENCHFRIES\n4=BURGER\n5=PASTA\n");
	printf("enter your choice 1,2,3,4,5\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
			printf("food item-Sandwich\n");
			printf("Price-Rs.149");
			break;
		case 2:
		    printf("food item-Pizza\n");
		    printf("Price-Rs.239");
		    break;
		case 3:
			printf("food item-Frenchfries\n");
			printf("Price-Rs.99");
			break;
		case 4:
			printf("food item-Burger\n");
			printf("Price-Rs.129");
			break;
		case 5:
			printf("food item-Pasta\n");
			printf("Price-Rs.179");
			break;
		ddefault:
			printf("invalid choice\n");
			break;
	}
return 0;
}
