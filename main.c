/*
    Farm Employees Program,
    by, Weston Wanjohi,
    Feb 2022,
    MIT License,
    C99 Compiler,
*/
#include <stdio.h>

int main() {
	int totalhrsWorked = 40;
	int kraPin, empNo, hrsWorked, normalPay, overtimePay, taxPaid, netIncome;
	char name[100];

	printf("Welcome to Gitonga's Farm\n");

	printf("Enter your name: ");
	scanf("%s", &name);

	printf("Enter your employee number: ");
	scanf("%d", &empNo);

	printf("Enter your KRA pin: ");
	scanf("%d", &kraPin);

	printf("Enter number of hours worked: ");
	scanf("%d", &hrsWorked);

	system("cls");

	normalPay = 1000 * totalhrsWorked;
	overtimePay = (hrsWorked - totalhrsWorked) * 1500;
	taxPaid = normalPay * 30/100;
	netIncome = (normalPay - taxPaid) + overtimePay;

	printf("normalPay: %d\n", normalPay);
	printf("overtimePay: %d\n", overtimePay);
	printf("taxPaid: %d\n", taxPaid);
	printf("netIncome: %d\n", netIncome);
}
