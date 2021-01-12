#ifndef ThisAppLinkedListMap_H//ThisAppLinkedListMap_H
#define ThisAppLinkedListMap_H
#include "MyLinkedListMapV2.h"

template<typename Value>
class ThisAppLinkedListMap:LinkedListMapV2<Value>{
public:
    ThisAppLinkedListMap(Value value): LinkedListMapV2<Value>(0, nullptr){}

private:
    int test;
};

template<>
class ThisAppLinkedListMap<Major>{
public:
    ThisAppLinkedListMap(){}
private:
    void aaa(){
}

};



#endif //ThisAppLinkedListMap_H