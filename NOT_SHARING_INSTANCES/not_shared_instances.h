// AUTHOR: OskarProgrammer
// LICENSE: MIT LICENSE

#ifndef NOT_SHARED_INSTANCES
#define NOT_SHARED_INSTANCES

#include <stdio.h>
#include <stdlib.h>
#include "API_not_shared_instances.h"

//constructor of the class
INST *createObject(){
    INST *inst = (INST *)malloc(sizeof(INST));
    return inst;
}

// methods of the class
void operateOnObject(INST *inst){
    // some code
}

//destructor of the class
void destroyObject(INST *inst){
    free(inst); // deallocating the memory
    inst = NULL;    // saving the hanging pointer
}

#endif
