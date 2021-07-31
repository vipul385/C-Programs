#include<stdio.h>
#include<process.h>
#include<math.h>
//function to calculate area of rectangle
float recarea(float a, float b) {
   float area;
   area = a * b;
   return area;
}
//function to calculate perimeter of rectangle
float recperimeter(float a, float b){
   float perimeter;
   perimeter = 2*(a + b);
   return perimeter;
}
float circlearea(float rad)
{
	float area;
	area=3.14*rad*rad;
	return area;
}
float circleperi(float rad)
{    float perm;
	 perm=2*3.14*rad;
	 return perm;
	
}
float triArea(float a, float b, float c)
{
	// Length of sides must be positive
	// and sum of any two sides
	// must be smaller than third side.
	if (a < 0 || b < 0 || c < 0 ||(a + b <= c) || a + c <= b ||b + c <= a)
	{
		 printf("Not a valid triangle");
		exit(0);
	}
	float s = (a + b + c) / 2;
	return sqrt(s * (s - a) *(s - b) * (s - c));
}

float perimtri(float a,float b,float c)
{
	float sum;
	sum=a+b+c;
	return sum;
}

float areasq(float a)
{
	float area;
	area=a*a;
	return area;
}

float perisq(float a)
{
	float peri;
	peri= 4*a;
	return peri;
}



int main()
{   int choice;
    float r;
	float a,b,s,c; 
	printf("Calculate Area and Perimeter of :\n");
	printf("1. Circle: \n");
	printf("2. Rectangle: \n");
	printf("3. Square: \n");
	printf("4. Triangle: \n");
	printf("Enter choice: \n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("enter radius: ");
		        scanf("%f",&r);
		        printf("Area of circle is: %f \n", circlearea(r));
		        printf("Perimeter of circle is: %f \n ",circleperi(r));
		        break;
		        
		case 2: printf("Enter sides\n");
		        scanf("%f %f",&a,&b);
		        printf("Area of Rectangle is: %f \n ", recarea(a,b));
		        printf("Perimeter of rectangle is: %f \n",recperimeter(a,b));		        
		        break;
		        
		case 3: printf("enter side\n");
		        scanf("%f",&s);
		        printf("Area of square is: %f \n ",areasq(s));
				printf("Perimeter of square is: %f \n",perisq(s));
				break;
		
		case 4: printf("enter sides: \n");
		        scanf("%f %f %f",&a,&b,&c);	
		        printf("Area of triangle is: %f \n",triArea(a,b,c));
				printf("Perimeter of triangle is: %d \n",perimtri(a,b,c));
				perimtri(a,b,c);
				break;
		
		default: printf("wrong input");
		         break;			        
	}
	return 0;
}
















