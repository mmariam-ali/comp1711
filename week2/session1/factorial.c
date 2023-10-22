#include <stdio.h>
//Write a program to calculate the factorial of an integer.
int main() {
     int i, factorial=1, num;
     printf("Enter an integer: ");
     scanf("%d",&num);
     for(i=1;i<=num;i++) 
        factorial=factorial*i;
     
     printf("Factorial = %d\n ", factorial);

     return 0;
}

// #include <stdio.h>
// void main(){
//   int i,f=1,num;

//   printf("Input the number : ");
//   scanf("%d",&num);

//   for(i=1;i<=num;i++)
//       f=f*i;

//   printf("The Factorial of %d is: %d\n",num,f);
// }