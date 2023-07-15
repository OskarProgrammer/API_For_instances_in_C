// AUTHOR: OskarProgrammer
// LICENSE: MIT LICENSE
// implementation
#include <stdio.h>
#include <stdlib.h>
#include "API_not_shared_instances.h"

//constructor of the class
extern struct PRIVATEVARIABLES *createObject()
{
    struct PRIVATEVARIABLES *inst = (struct PRIVATEVARIABLES *)malloc(sizeof(struct PRIVATEVARIABLES));

    return inst;
}

// methods of the class
extern void operateOnObject(struct PRIVATEVARIABLES *inst)
{
    printf("Method");
}

//destructor of the class
extern void destroyObject(struct PRIVATEVARIABLES *inst)
{
    free(inst); // deallocating the memory
    inst = NULL;    // saving the hanging pointer
}

