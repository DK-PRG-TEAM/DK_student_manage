#ifndef MyLinkedListMapV2_H//MyLinkedListMapV2_H
#define MyLinkedListMapV2_H

#include "Map.h"
#include "MyLinkedListMap.h"
#include "../../MyArray/include/Array.h"
#include "../../Structs/include/struct.h"

template<typename Value>
class LinkedListMapV2:LinkedListMap<int, Value>{
public:
    LinkedListMapV2(int maxId, bool safeSearch): maxId(maxId), safeSeache(safeSearch), LinkedListMap<int, Value>(){
        crateAndInitIdSortAndStudentStructPtr(maxId);
    }
//    LinkedListMapV2(): LinkedListMapV2(0){}

    void add(int key,Value value){
        idSortAndStudentStructPtr->add(key, value);
        return LinkedListMap<int,Value>::add(key,value);
    }
    Value remove(int key){
        idSortAndStudentStructPtr->set(key, nullptr); //这里删除元素不是真的删除, 而是将待删除元素处置为空指针
        return LinkedListMap<int,Value>::remove(key);
    }
    Value get(int key){
        if (safeSeache){
            return LinkedListMap<int,Value>::get(key);
        }
        return idSortAndStudentStructPtr->get(key);
    }
    bool contains(int key){
        if (safeSeache){
            return LinkedListMap<int,Value>::contains(key);
        }
        return idSortAndStudentStructPtrInit(key);
    }

private:
    const int baseId = 100000;
    int maxId;
    bool safeSeache;
    void crateNewIdSortAndStudentStructPtr(){
        idSortAndStudentStructPtr = new Array<Value>;
    }
    void idSortAndStudentStructPtrInit(int length){
        for (int i = 0; i < length; i++) {
            idSortAndStudentStructPtr->add(i, nullptr);
        }
    }
    void crateAndInitIdSortAndStudentStructPtr(int length){
        crateNewIdSortAndStudentStructPtr();
        idSortAndStudentStructPtrInit(length);
    }
    Array<Value> *idSortAndStudentStructPtr;//增加:在id处增加 删除在id处设置为null 修改:无 查找:返回id处指针
//    int *ids = new int [];
};


#endif ////MyLinkedListMapV2_H