# API_For_instances_in_C
Two APIs and example implementations to use when you want to implement the classes known from other objected oriented programming languages in C.


THE PROJECT CONTAINS TWO DIFFERENT FOLDERS

Both contain the xyz.h API and a sample API implementation file.


NOT_SHARING_INSTANCES --> this is the folder for the implementation of the API that creates instances of the implemented class, however, each creation of an object involves the creation of a new place in memory allocated dynamically on the heap. An ordinary class known from other programming languages, but without inheritance or polymorphism.


SHARING_INSTANCES --> this is the folder for the implementation of the API, which creates instances based on the id provided in the constructor, then it is assigned to the global list implemented in the example implementation, which monitors whether an object with the same ID has already been created, if so, it simply returns a pointer of this element because it has already been implemented and it increments a counter that is also included in the structure in the global list. This counter is used to help free allocated memory after the destructor is called, because if the counter is not equal to 0, it will not be possible to deallocate a specific memory location because another instance is still using it, so only the counter will be decremented.


Both possibilities provided in this project in the API are defined with the specific owner of the allocated memory being the implementation and it is responsible for allocating and later organizing the memory on the heap!


Failure to call destructors on used instances in your own project may lead to memory leaks, memory fragmentation or undefined behavior.


If you want to be able to operate on several constant pointers but the same data for different entities using a given instance use SHARING_INSTANCES, it helps to increase performance but it does not allow to separate data for entities using the same instance.


If, on the other hand, you want to obtain a separate unit and separate data content for each instance, which enables better encapsulation of the instance or implementation content in the future, and you do not use any instances that are to be shared, select NOT_SHARING_INSTANCES
