#include<stdio.h>

int main()
{
    int h, b;
    float area;
    printf("\n\nEnter the height of the Triangle: ");
    scanf("%d", &h);
    printf("\n\nEnter the base of the Triangle: ");
    scanf("%d", &b);

    /*
        Formula for the area of the triangle = (height x base)/2
        
        Also, typecasting denominator from int to float 
        to get the output in float
    */
    area = (h*b)/(float)2;
    printf("\n\n\nThe area of the triangle is: %f", area);

    printf("\n\n\t\t\tCoding is Fun !\n\n\n");
    return 0;
}
