#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
int main()
{

int a,b;
printf("Enter two number : ");
scanf("%d %d", &a, &b);


void *handle;
int (*add)(int, int);
int (*substract)(int, int);
int (*multiply)(int, int);
int (*divide)(int, int);
char *error;

handle = dlopen ("./lib/libtest.so", RTLD_LAZY);
if (!handle) {
fputs (dlerror(), stderr);
exit(1);
}

add = dlsym(handle, "add"); 
if ((error = dlerror()) != NULL) { 
fprintf (stderr, "%s", error); 
exit(1); 
}

substract = dlsym(handle, "substract"); 
if ((error = dlerror()) != NULL) { 
fprintf (stderr, "%s", error); 
exit(1); 
}

multiply = dlsym(handle, "multiply"); 
if ((error = dlerror()) != NULL) { 
fprintf (stderr, "%s", error); 
exit(1); 
}
divide = dlsym(handle, "divide"); 
if ((error = dlerror()) != NULL) { 
fprintf (stderr, "%s", error); 
exit(1); 
}

printf("Add : %d\n", add(a,b));
printf("Substract : %d\n", substract(a,b));
printf("Multiply : %d\n", multiply(a,b));
if (b==0)
printf ("Cant't divide\n");
else
printf("Divide : %d\n", divide(a,b));

dlclose(handle);
}
