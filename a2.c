/*This is a simple Miles/Kilometer unit converter
Sept 08 2026
Juan Sebastian Marquez Trevizo
*/

#include <stdio.h>
	
int ques(){
	int mikm; //miles-kilometer
	printf("Choose 1 if you want to convert miles to kilometers,\n"); 
	printf("choose 2 if you want to convert kilometers to miles,\n");
	printf("choose any other number to exit the app.\n");
	scanf("%d",&mikm);
	return mikm;
}

void mtk(){
	float miles;
	printf("Input your miles, they will be converted to kilometers to the second decimal point:");
	scanf("%f", &miles);
	miles = miles*1.609344;
	printf("%.2f km\n", miles);

}

void ktm(){
	float km;
	printf("Input your Kilometers, they will be converted to miles to the second decimal point\n");
	scanf("%f", &km);
	km = km/1.609344;
	printf("%.2f mi\n", km);
}

int main(){
	int choice = ques();
	if (choice == 1)
		mtk();
	if (choice == 2)
		ktm();
	
	
}
