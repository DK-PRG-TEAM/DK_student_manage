#include <iostream>
//#include "../../Structs/include/struct.h"
//#include "../../3rd/include/json.hpp"
#include <json.hpp>
#include <struct.h>
#include <MyLinkedListMap.h>
#include <MyLinkedListMapV2.h>

using namespace std;
using JSON = nlohmann::json;

//class System{
//public:
//    void initSystem();
//    void loadSystem();
//    void saveSystem();
//    void exitSystem();
//private:
//    void loadFile();
//    void saveFile();
//};
//
//class Member: public System{};
//
//class Student: public Member{
//public:
//
//};
//
//
//class Teacher:public Member{
//
//};



class StudentManage{
public:
    StudentManage(){// 每个结构体使用class构建, class内部维护一个动态数组, 该数组记录着该类型的id号, 方便检索   , 该数组可以自动维护id编号,插入数据后自动生成一个id号, 该id号有一个初始号码, 方便后期自动生成新的id号, 另外, 应该维护一个当前最大id号(该号码应该自动根据创建的最大id号更新), 方便从文件恢复数据时创建新的数据,
        majorMap = new LinkedListMap<int, Major>();
        courseMap = new LinkedListMap<int, Course>();
        clbumMap = new LinkedListMap<int, Clbum>();
        studentGradeMap = new LinkedListMap<int, StudentGrade>();
        studentMap = new LinkedListMap<int, StudentStruct>();
        teacherMap = new LinkedListMap<int, TeacherStruct>();
    }
private:
    LinkedListMap<int, Major> *majorMap;
    LinkedListMap<int, Course> *courseMap;
    LinkedListMap<int, Clbum> *clbumMap;
    LinkedListMap<int, StudentGrade> *studentGradeMap;
    LinkedListMap<int, StudentStruct> *studentMap;
    LinkedListMap<int, TeacherStruct> *teacherMap;
};