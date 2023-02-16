#include <stdio.h>

int l,w;
int rectangle;

main(){
	printf("Enter Width: ");
	scanf("%d", &w);
	printf("Enter Length: ");
	scanf("%d", &l);	
	rectangle = w*l;
	printf("Width = %d \nLength = %d \nThe Rectangle Area is %d",w , l, rectangle);
}
