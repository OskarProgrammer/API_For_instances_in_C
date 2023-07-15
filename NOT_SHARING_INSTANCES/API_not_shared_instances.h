// AUTHOR: OskarProgrammer
// LICENSE: MIT LICENSE

#ifndef API_NOT_SHARED_INSTANCES
#define API_NOT_SHARED_INSTANCES

#include <stdio.h>

// place where you can add or remove private variables for the instances of the class
typedef struct PRIVATEVARIABLES{
    int x;
    int y;
} INST;

// constructor of the class
INST* createObject();

//  methods of the class
void operateOnObject(INST* inst);

// destructor of the class
void destroyObject(INST* inst);

#endif
