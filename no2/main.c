#include <stdio.h>
#include "/home/sejoe/project/task2/no2/lib/lib.h"
//#include "lib.h"
extern int add(int a, int b);
extern int substract(int a, int b);
extern int multiply(int a, int b);
extern int divide(int a, int b);

int main(int argc, char *argv[])
{
int a,b;
printf("Enter two number : ");
scanf("%d %d", &a, &b);

printf("Add : %d\n", add(a,b));
printf("Substract : %d\n", substract(a,b));
printf("Multiply : %d\n", multiply(a,b));
if (b==0)
printf ("Cant't divide\n");
else
printf("Divide : %d\n", divide(a,b));

return 0;
}
