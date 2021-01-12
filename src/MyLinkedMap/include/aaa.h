#include "../../Structs/include/struct.h"

template<typename Value> class Father{};

template<typename Value> class Son:Father<Value>;


template<>
class Father<StudentStructs>{

};