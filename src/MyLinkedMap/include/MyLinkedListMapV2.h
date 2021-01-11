#include "Map.h"
//#include "MyLinkedListMap.h"
#include "../../MyArray/include/Array.h"

template<typename Key, typename Value>
class LinkedListMapV2:LinkedListMap<Key, Value>{
public:
    LinkedListMapV2(int maxId, Array<Value> *initialValue):maxId(maxId), idSort(initialValue), LinkedListMap<Key, Value>(){}
    LinkedListMapV2(): LinkedListMapV2(0, nullptr){
        idSort = new Array<int>;
    }
private:
    const int baseId = 100000;
    int maxId;
    Array<int> *idSort;
//    int *ids = new int [];
};


void aaaa(){
//    auto *test = new LinkedListMapV2<int,int>();
};