#include <stdio.h>
int main()
{
	//2.21
	printf("2.21\n");
	int i,j,k;
	for (i = 1; i <= 9; i++)
	{
		printf("* ");
	}
	printf("\n");
	for (i = 1; i <= 7; i++)
	{
		printf("*               *\n");
	}
	for (i = 1; i <= 9; i++)
	{
		printf("* ");
	}

	printf("\n\n      * * *      \n");
	printf("    *       *       ");
	for (i = 1; i <= 5; i++)
	{
		printf("\n  *           *\n");
	}
	printf("\n    *       *       ");
	printf("\n      * * *      \n\n");

	printf("        *\n");
	printf("       ***\n");
	printf("      *****\n");
	for (i = 1; i <= 6; i++)
	{
		printf("        *\n");
	}

	printf("\n        *\n");
	printf("      *   *\n");
	printf("    *       *\n");
	printf("  *           *\n");
	printf("*               *\n");
	printf("  *           *\n");
	printf("    *       *\n");
	printf("      *   *\n");
	printf("        *\n");
	

	//2.23
	printf("2.23\n");
	int input1, input2, input3;
	printf("Please enter 3 integers：");
	scanf_s("%d", &input1);
	scanf_s("%d", &input2);
	scanf_s("%d", &input3);
	int largest, smallest;
	largest = input1, smallest = input1;
	if (input2 > largest)
	{
		largest = input2;
	}
	else if (input2 < smallest)
	{
		smallest = input2;
	}
	if (input3 > largest)
	{
		largest = input3;
	}
	else if (input3 < smallest)
	{
		smallest = input3;
	}
	printf("largest is %d\n", largest);
	printf("smallest is %d\n", smallest);
	

	//2.24
	printf("\n2.24\n");
	int num;
	printf("Please enter an integer:");
	scanf_s("%d", &num);
	if (num % 2 == 0)
	{
		printf("num is even \n");
	}
	else
	{
		printf("num is odd \n");
	}

	//2.25
	printf("\n2.25\n");
	for (i = 1; i <= 9; i++)
	{
		printf("P");
	}
	printf("\n");
	for (i = 1; i < 4; i++)
	{
		printf("    P   P\n");
	}
	printf("     P P\n");
	printf("  JJ\n");
	printf(" J\n");
	printf("J\n");
	printf(" J\n  ");
	for (i = 1; i <= 7; i++)
	{
		printf("J");
	}
	printf("\n");
	for (i = 1; i <= 9; i++)
	{
		printf("D");
	}
	printf("\nD       D\n");
	printf("D       D\n");
	printf(" D     D\n");
	printf("  DDDDD\n");

	//2.26
	printf("\n2.26\n");
	int num1, num2;
	printf("Please enter num1:");
	scanf_s("%d", &num1);
	printf("Please enter num2:");
	scanf_s("%d", &num2);
	if (num1 % num2 == 0)
	{
		printf("%d is a multiple of the %d!", num1, num2);
	}
	else
	{
		printf("%d is not a multiple of the %d!", num1, num2);
	}

	//2.27
	printf("\n2.27\n");
	printf("    *    \n");
	printf("   ***   \n");
	printf("  *****  \n");
	printf(" ******* \n");
	printf("*********\n");

	printf("\n");
	printf("    *\n   ***\n  *****\n *******\n*********\n");

	//2.31
	printf("2.31\n");
	int number, square, cube;
	printf("number	square	cube\n");
	for (i = 0; i <= 10; i++)
	{
		printf("%d	%d	%d\n", i, i*i, i*i*i);
	}

	//2.32
	printf("2.32\n");
	double weight, height, BMI;
	printf("Please enter your height(m):");
	scanf_s("%lf", &height);
	printf("Please enter your weight(kg):");
	scanf_s("%lf", &weight);
	BMI = (weight / (height*height));
	printf("BMI = %lf\n", BMI);
	if (BMI < 18.5)
	{
		printf("Your BMI Value is Underweight!\n");
	}
	else if (BMI >= 18.5 && BMI <= 24.9)
	{
		printf("Your BMI Value is Normal!\n");
	}
	else if (BMI >= 25 && BMI <= 29.9)
	{
		printf("Your BMI Value is Overweight!\n");
	}
	else
	{
		printf("Your BMI Value is Obese!\n");
	}

	//2.33
	printf("2.33\n");
	double mileage, fuel_price, fuel_range, park_price, toll_price, total_fuel, total_cost;
	printf("請輸入一整天的總里程數(km):");
	scanf_s("%lf", &mileage);
	printf("請輸入油價(元/公升):");
	scanf_s("%lf", &fuel_price);
	printf("請輸入每公升能行駛多少公里:");
	scanf_s("%lf", &fuel_range);
	printf("請輸入今日停車費:");
	scanf_s("%lf", &park_price);
	printf("請輸入今日過路費:");
	scanf_s("%lf", &toll_price);
	total_fuel = (mileage / fuel_range)*fuel_price;
	total_cost = total_fuel + park_price + toll_price;
	printf("一天開車所需的花費為: %lf 元", total_cost);
}