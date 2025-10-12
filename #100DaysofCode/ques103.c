/*Q3: Sum and Difference of Two Numbers
Link: https://www.hackerrank.com/challenges/sum-numbers-c/problem?isFullScreen=true*/

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int num1,num2;
    float num3,num4;
    
    scanf("%d %d",&num1, &num2);
    scanf("%f %f",&num3, &num4);
    
    int sum_int=num1+num2;
    int difference_int=num1-num2;
    printf("%d %d",sum_int, difference_int);
    
    printf("\n");
    
    float sum_float=num3+num4;
    float difference_float=num3-num4;
    printf("%.1f %.1f",sum_float, difference_float);
    return 0;
}
