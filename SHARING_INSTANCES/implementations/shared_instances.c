// AUTHOR: OskarProgrammer
// LICENSE: MIT LICENSE
//implementation
#include <stdio.h>
#include <stdlib.h>
#include "../headers/API_shared_instances.h"


#define MAX_OBJECTS 4

typedef struct OBJECTSLIST{
    struct INST *inst;
    int count;
}OBJECTSLIST;

static OBJECTSLIST list[MAX_OBJECTS];   // global list that count the amount of the objects and which are allready allocated so the implementation doesnt have to allocate the same object

// constructor
struct INST *createObject(int id)
{
    if (list[id].count == 0 ){
        list[id].inst = (struct INST *)malloc(sizeof(struct INST));
    }

    list[id].count++;

    return list[id].inst;
}

// methods
void operateOnObject(struct INST *instance)
{
    // some of your code
    // example:
    printf("Test\n");
}

// getting the id of the instance given in the parameter list
// -1 value => error, because the index in this way of looking for index shouldnt become negative number
int getIdOfInstance(struct INST *instance)
{
    for (int index = 0; index < MAX_OBJECTS; index++)
    {
        if (list[index].inst == instance)
        {
            return index;
        }
    }
    return (-1);
}

// destructor
void destroyObject(struct INST *instance)
{
    int id = getIdOfInstance(instance); //finding the id of the instnace on the list
    if (id < 0){    
        printf("Error during destroying the object: instance not found in the memory list.");
        return; //error handling
    }
    list[id].count--;

    if (list[id].count == 0){
        free(instance);     // dealocating the memory of the instance
        instance = NULL;    // saving the hanging pointer
    }
}


