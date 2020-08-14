#include<stdio.h>
#include<conio.h>
int main()
{
	int age;
	printf("PLEASE ENTER YOUR AGE : ");
	scanf_s("%d", &age);

	if (age <= 11)
	{
		printf("%d -> You are Kid", age);
	}
	else if (age <= 20)
	{
		printf("%d -> You are Teen", age);
	}
	else if (age <= 60)
	{
		printf("%d -> You are Adult", age);
	}
	else
	{
		printf("%d -> You are Old", age);
	}

}


