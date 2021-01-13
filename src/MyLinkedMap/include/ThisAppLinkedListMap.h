#ifndef ThisAppLinkedListMap_H//ThisAppLinkedListMap_H
#define ThisAppLinkedListMap_H
#include "MyLinkedListMapV2.h"
#include "../../FileLoader/include/FileLoader.h"
#include "../../3rd/include/json.hpp"

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
    MajorMap():LinkedListMapV2<Major>(getInitMaxId(), false),jsonFileUnitObj(new JsonFileUnit("./Major.json")){
        jsonObj = jsonFileUnitObj->getJsonObj();
    }
private:
    const int baseId = 100000;
    int maxId;
    JsonFileUnit *jsonFileUnitObj;
    nlohmann::json *jsonObj;
    int getInitMaxId(){
        nlohmann::json test = *jsonObj;
        jsonObj.
    }
};


#endif //ThisAppLinkedListMap_H