// AUTHOR: OskarProgrammer
// LICENSE: MIT LICENSE

#ifndef API_NOT_SHARED_INSTANCES
#define API_NOT_SHARED_INSTANCES

#include <stdio.h>
// API
// place where you can add or remove private variables for the instances of the class
struct PRIVATEVARIABLES{
    int x;
    int y;
};

// constructor of the class
struct PRIVATEVARIABLES* createObject();

//  methods of the class
void operateOnObject(struct PRIVATEVARIABLES *inst);

// destructor of the class
void destroyObject(struct PRIVATEVARIABLES *inst);

#endif
