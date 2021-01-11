#include "../include/main.h"

Majors majors = new Major[3]{
        {1,"计算机应用"},
        {2,"计算机网络应用"},
        {3,"计算机安全"}
};
Courses courses = new Course[7]{
        {1,"高等数学"},
        {2,"大学英语"},
        {3, "C程序设计基础"},
        {4,"体育"},
        {5,"文史概论"},
        {6, "思想道德"},
        {7, "习现概论"}
};
Clbums clbums = new Clbum[1]{
        {1, "20计算机",{1,new int[7]{1,2,3,4,5,6,7}}}
};
//Grades grades = new Grade[]{
//        {1,{1,85}},
//        {2,{2,86}},
//        {3,{3,90}},
//        {4,{4,95}},
//        {5,{5,88}},
//        {6,{6,92}},
//        {7,{7,97}},
//};


//{1,85}
//{2,86}
//{3,90}
//{4,95}
//{5,88}
//{6,92}
//{7,97}
StudentGrades studentGrades = new StudentGrade[1]{
//        {studentGrades->studentGradeId = 1,
//         studentGr ades->data.grades = new Grade[]{
//                 {1,85},
//                 {2,86},
//                 {3,90},
//                 {4,95},
//                 {5,88},
//                 {6,92},
//                 {7,97},
//        }},
        {1,
         {new Grade[7]{
            {1,85},
            {2,86},
            {3,90},
            {4,95},
            {5,88},
            {6,92},
            {7,97}}
        }}
};

//StudentStructs studentStructs = new StudentStruct[1]{
//        {1,"某同学",{1,1}}
//};
StudentStruct student1 = StudentStruct {1,"某同学",{1,1}};
StudentStruct student2 = StudentStruct {2,"王乐",{1,1}};
StudentStruct student3 = StudentStruct {3,"郭俊平",{1,1}};
StudentStruct student4 = StudentStruct {4,"皇天奇",{1,1}};
StudentStruct student5 = StudentStruct {5,"王禹",{1,1}};


int main() {
    JSON j;
    j["test"]["a"] = "123";
    j["name"] = "AnYing";
    cout << j.dump(4) << endl;
    cout << "Hello, World!" << endl;
//
//    Student student;
//    student.initSystem();

    return 0;
}


void System::initSystem() {
    loadSystem();
}
void System::loadSystem() {

}

void System::saveSystem() {

}