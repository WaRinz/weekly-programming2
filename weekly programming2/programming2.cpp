#include<stdio.h>
#include<conio.h>
void foodMenu(void);

int main(void)
{
	/*MENU SELECTION*/
	int menu;
	printf("-- WELCOME TO CASHIER -- \n");
	printf("\nSELECT \n\n 1->FOODMENU \n 2->CHECKBILL \n 3->NEW MEMBER \n");
	scanf_s("%d", &menu);
		if (menu == 1)
			{
			foodMenu();
			}
	
		
	
	return 0;
}
void foodMenu(void)
{
	int home;
	printf("A0  Sushi Season      300.-\n");
	printf("A1  Miso Soup          25.-\n");
	printf("A2  Tempura            80.-\n");
	printf("A3  Ramen              60.-\n");
	printf("A4  Salmon Set        250.-\n");
	printf("A5  Tofu Steak         80.-\n");
	printf("A6  Salmon Sashimi    100.-\n");
	printf("A7  Sashimi Set       260.-\n");
	printf("A8  Oden               90.-\n");
	printf("A9  Yaki Soba          80.-\n");
	printf("A10 Natto              50.-\n");
	printf("A11 Onigiri            60.-\n");
	printf("A12 Takoyaki           75.-\n");

	printf("GO TO MENU (YES=1/NO=2) : ");
	scanf_s("%d", &home);
	if (home == 1)
		{
		main();
		}
	else if (home == 2)
		{
		printf("\n\n----- THANK YOU! -----\n\n\npress any key to continue");
		}

}


