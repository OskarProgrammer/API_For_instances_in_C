#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "../headers/API_not_shared_instances.h"

int main(void){
    // to compile the program you have to define all input files with extension .c:
    // gcc test.c not_shared_instances.c -o test
    
    struct PRIVATEVARIABLES *inst = createObject();
    operateOnObject(inst);
    destroyObject(inst);
    
    assert(inst != NULL && "Object destruction failed");

    return EXIT_SUCCESS;
}
