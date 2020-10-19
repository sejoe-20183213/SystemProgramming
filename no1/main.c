#include <stdio.h>
#include "/home/sejoe/project/task2/no1/lib/lib.h"
//#include "lib.h"

int main()
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

}
