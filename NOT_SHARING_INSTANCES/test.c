#include <stdio.h>
#include <stdlib.h>
#include "API_not_shared_instances.h"

int main(void){

    struct PRIVATEVARIABLES *inst = createObject();
    operateOnObject(inst);
    destroyObject(inst);

    return EXIT_SUCCESS;
}

#include "API_not_shared_instances.h"
