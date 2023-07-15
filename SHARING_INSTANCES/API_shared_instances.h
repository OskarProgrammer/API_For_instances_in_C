// AUTHOR: OskarProgrammer
// LICENSE: MIT LICENSE

#ifndef API_OBJECTS
#define API_OBJECTS

// place where you can add or remove private variables for the instances of the class
struct INST{
    int x;
    int y;
};

// constructor of the class
struct INST *createObject(int id);

//  methods of the class
void operateOnObject(struct INST *instance);

// destructor of the class
void destroyObject(struct INST *instance);

#endif
