#include <stdio.h>
#include <stdlib.h>
#include "API_shared_instances.h"

int main(){

    struct INST *inst = createObject(2);
    operateOnObject(inst);
    destroyObject(inst);

    return EXIT_SUCCESS;
}