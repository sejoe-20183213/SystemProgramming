#include <stdio.h>
#include <stdlib.h>
#include "my_assert.h"

void __my_assert_fail (const char *__assertion, const char *__file, unsigned int __line, const char *__function) {

        printf("%s:%s:%u:%s:Assertion '%s' failed.\n",__progname,__file,__line,__function,__assertion);


        abort();

}
