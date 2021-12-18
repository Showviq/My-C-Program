#include <stdio.h>
int w,h,p,a;

int main() {
	h = 7;
	w = 5;

    p = 2*(h + w);
	printf("Perimeter of the rectangle = %d inches\n", p);

	a = h * w;
	printf("Area of the rectangle = %d square inches\n", a);

return 0;
}
