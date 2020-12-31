#include <stdio.h>
#include <conio.h>

int main (void)
{
printf(" corona scoresheet, by Bravo softwares.Inc");

int cough;
int body_ache;
int Sneezing;
int Temperature;
int D_I_B;
int Name;
int key_1_no_2_yes;


printf("\nkey_2_no_1_yes");


printf("\nEnter number of times coughed in a minute:");
scanf("%d", &cough);

printf("\nbody_ache:");
scanf("%d", & body_ache);

printf("\nSneezing:");
scanf("%d", &Sneezing);

 
printf("\nTemperature:");
scanf("%d", &Temperature);

printf("\nD_I_B:");
scanf("%d", &D_I_B);

printf("\nName:");
scanf("%d", &Name);

 
 if (cough == 0, body_ache == 2, Sneezing == 2, Temperature <= 38, D_I_B == 2)
{
	printf("Not infected with COVID-19 follow the WHO guidlines");
	}
	
	else if (cough >= 5, body_ache == 1, Sneezing == 1, Temperature >=38, D_I_B == 1)
	

	{
	printf("Infected?Please visit nearest health facility for COVID-19 test");
}


else 
{
	printf("Unpredictable");
}
}
