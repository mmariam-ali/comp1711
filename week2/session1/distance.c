#include <stdio.h>
//Write a program that calculates the distance travelled by light in a given number of days. Considerusing appropriate data types for accuracy.
int main() {
 long meters_per_day= 25902068371200, meters_travelled;
 int number_of_days;
printf("Input a number of days: ");
scanf("%d", &number_of_days);

meters_travelled= meters_per_day * number_of_days;
printf("Distance travelled by light in %d days: %ld meters \n",number_of_days, meters_travelled);

return 0;
}