#include <stdio.h>
#include <stdlib.h>
#include "API_not_shared_instances.h"

int main(){
    // to compile the program you have to define all input files with extension .c:
    // gcc test.c not_shared_instances.c -o test
    
    struct PRIVATEVARIABLES *inst = createObject();
    operateOnObject(inst);
    destroyObject(inst);

    return EXIT_SUCCESS;
}
