#ifndef ThisAppLinkedListMap_H//ThisAppLinkedListMap_H
#define ThisAppLinkedListMap_H
#include "MyLinkedListMapV2.h"
#include "../../FileLoader/include/FileLoader.h"
#include "../../3rd/include/json.hpp"

using json = nlohmann::json;

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
    MajorMap():LinkedListMapV2<Major>(getInitBaseId(),getInitMaxId(), false),fileUnitObj(new FileUnit("./Major.json")){
        jsonObj.parse(fileUnitObj->getFileString());
//        initBaseInfo();
    }
    void addMajor(string majorName){
        LinkedListMapV2<Major>::autoAdd(Major{LinkedListMapV2<Major>::getNewId(), majorName});
//        maxId++;
    }
    Major deleteMajor(int majorId){
        return LinkedListMapV2<Major>::remove(majorId);
    }
//    void setMajor(int majorId, Major newMajor){
//        LinkedListMapV2<Major>::set(majorId,newMajor);
//    }
    void saveFile(){

    }
private:
//    int baseId;
//    int maxId;
    FileUnit *fileUnitObj;
    json jsonObj;
//    void initBaseInfo(){
//        maxId = getInitMaxId();
//        baseId = getInitBaseId();
//    }
    int getInitMaxId(){
        return jsonObj["maxId"]; //TODO:应当加入判断, 判断该对象或者该值是否存在, 如果存在则调用该值, 否则调用默认值
    }
    int getInitBaseId(){
        return jsonObj["baseId"];
    }
};


#endif //ThisAppLinkedListMap_H