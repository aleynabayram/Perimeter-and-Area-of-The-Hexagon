/*The code calculates perimeter and area of the hexagon */

#include<stdio.h>
#include<math.h>

int main(){
	
	float length;
	float perimeter;
	float area;
		
	printf("Please enter the length of the hexagon:");
	scanf("%f",&length);
	
	perimeter= 6*length;
	area= (3*sqrt(3))*length*length/2;
	
	printf("The perimeter of the pentagon :%.3f\n",perimeter);
	printf("The area of the pentagon :%.4f\n",area);
	
	return 0;
	
}
