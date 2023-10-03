#include<stdio.h>
#include<math.h>

int main(){
const double PI =3.14159;
double  radious;
double circ;
double area;
printf("Enter the radious of a circle: \n");
scanf("%lf", &radious);
circ = 2 * PI * radious;
area = PI* pow(radious, 2);
printf("The circ of the circle is :%lf\n", circ);
printf("The area of the circle is :%lf", area);
}