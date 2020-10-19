#include <stdio.h>
#include <errno.h>
#include <string.h>

void my_perror(const char *str)
{
        if(str == NULL)
                printf("%s \n",strerror(errno));

        else
                printf("%s : %s\n",str, strerror(errno));

}
