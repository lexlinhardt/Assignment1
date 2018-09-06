/*
 *Author: Alexis Linhardt
 *
 *This program will compute the annualized rate of return given
 *the initial and final value of an investment and the time 
 *between them in years, weeks, and days.
 */
 
 #include<stdio.h>
 #include<stdlib.h>
 #include<math.h>
 
 int main(int argc, char **argv) {
	 double initialInvestment, finalInvestment, annualizedRateOfReturn;
	 double days, weeks, years, totalYears;
	 
	 printf("Please input the initial value of the investment:");
	 scanf("%lf", &initialInvestment);
	 
	 printf("Please input the final value of the investment:");
	 scanf("%lf", &finalInvestment);
	 
	 printf("Please input the years, weeks, and days between the initial and final investment value:");
	 scanf("%lf, %lf, %lf", &years, &weeks, &days);
	 
	 totalYears = years + (weeks/52) + (days/365);
	 
	 annualizedRateOfReturn = 100 * (pow((finalInvestment / initialInvestment), (1/totalYears))-1);
	 
	 printf("Initial Value: $%.2f\n", initialInvestment);
	 printf("Final Value: $%.2f\n", finalInvestment);
	 printf("Years: %f\n", totalYears);
	 printf("Annualized Rate of Return: %f%\n", annualizedRateOfReturn);
	 
 }