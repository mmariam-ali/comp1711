// #include <math.h>
// #include <stdio.h>

// int main (){
//     double base =4, exp =2, result;

//     result = pow(base, exp);
//     printf("%d", result);
// }

// C program to illustrate 
// power function 
#include <math.h> 
#include <stdio.h> 

int main() 
{ 
	double x = 6.1, y = 4.8; 

	// Storing the answer in result. 
	double result = pow(x, y); 
	printf("%.2lf", result); 

	return 0; 
} 
