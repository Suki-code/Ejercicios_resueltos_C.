/*El siguiente programa deduce el perímetro de una circunferencia.*/

#include<stdio.h>
#include<conio.h>

#define PI 3.141592

int main(){
	float perimetro, radio;
	printf("\nIntroduzca el radio:");
	scanf("%f",&radio);
	perimetro=2*PI*radio;
	printf("\nEl perimetro es:%f",perimetro);
	getch();
	return 0;
}
