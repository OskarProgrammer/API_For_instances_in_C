// AUTHOR: OskarProgrammer
// LICENSE: MIT LICENSE

#ifndef API_OBJECTS
#define API_OBJECTS

// place where you can add or remove private variables for the instances of the class
typedef struct INST{
    int x;
    int y;
} INST;

// constructor of the class
INST* createObject(int id);

//  methods of the class
void operateOnObject(INST *instance);

// destructor of the class
void destroyObject(INST *instance);

#endif
