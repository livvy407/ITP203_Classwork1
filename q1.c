#include<stdio.h>

int main()
{
	float radius;
	float length;
	float height;
	int problem;
	float Area;

	printf("Enter the type of problem to be solved:\n");

	printf("1.Area of circle\n");

	printf("2.Area of rectangle\n");

	printf("3.Area of triangle\n");

	scanf("%d", &problem);


	switch(problem)
	{
		//Area of circle
		case 1:
		printf("Enter the radius of circle:");
		scanf("%f",&radius);

		Area = 3.14*radius*radius;
		printf("These is the area of the circle: %f\n", Area);
		break;

		case 2:
		//Area of rectangle
		printf("Enter the length of the rectangle: ");
		scanf("%f",&length);

		printf("Enter the height of the rectangle: ");
		scanf("%f",&height);

		Area = length * height;
		printf("This is the area of the rectangle: %f", Area);
		break;

		case 3:
		//Area of triangle
		printf("Enter the length of the triangle:");
		scanf("%f",&length);

		printf("Enter the height of the triangle:");
		scanf("%f",&height);

		Area = (length * height)/2;
		printf("This is the area of the triangle: %f", Area);
		break;

		default:
		printf("Invalid");
	}
	return 0;
}