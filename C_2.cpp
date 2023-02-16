#include <stdio.h>

#define Factor 0.5
int b,h;
float triangle;

main(){
	printf("Enter base: ");
	scanf("%d", &b);
	printf("Enter Height: ");
	scanf("%d", &h);	
	triangle = Factor*b*h;
	printf("Base = %d \nHeight = %d \nThe Triangle Area is %.2f",b , h, triangle);
}
