#ifndef ThisAppLinkedListMap_H//ThisAppLinkedListMap_H
#define ThisAppLinkedListMap_H
#include "MyLinkedListMapV2.h"

//template<typename Value>
//class ThisAppLinkedListMap:LinkedListMapV2<Value>{
//public:
//    ThisAppLinkedListMap(Value value): LinkedListMapV2<Value>(0, nullptr){}
//
//private:
//    int test;
//};
//
//template<>
//class ThisAppLinkedListMap<Major>{
//public:
//    ThisAppLinkedListMap(): hahah(0){}
//private:
//    int hahah;
//}
//
//};


class MajorMap:LinkedListMapV2<Major>{
public:
//    MajorMap():LinkedListMapV2<Major>(){}
private:
    const int baseId = 100000;
};


#endif //ThisAppLinkedListMap_H