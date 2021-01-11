#include <string>
using namespace std;
//new
typedef struct {
    int id;
    string name;
}Major; //专业
typedef Major *Majors;

typedef struct {
    int id;
    string name;
}Course; //课程
typedef Course *Courses;

typedef struct {
    int id;
    string name;
    struct{
        int majorId;
        int *courseIds;
    }data;
}Clbum; //班级
typedef Clbum *Clbums;

//typedef struct {
//    int id;
//    struct{
//        int CourseId;
//        float grade;
//    }data;
//}Grade; //成绩
//typedef Grade *Grades;

typedef struct {
    int CourseId;
    float grade;
}Grade;
typedef Grade *Grades;

typedef struct {
    int studentGradeId;
    struct {
        Grade *grades;
    }data;
//    int studentId;
//    typedef struct test{
//        int CourseId;
//        float grade;
//    }Data,*data;
//    struct{
//        int CourseId;
//        float grade;
//    }*data;

}StudentGrade; //学生成绩
typedef StudentGrade *StudentGrades;

typedef struct {
    int id;
    string name;
    struct{
        int clbumId;
        int studentGradeId;
    }data;
}StudentStruct; //学生
typedef StudentStruct *StudentStructs;

typedef struct {
    int id;
    string name;
    struct{
        int *TeachersMayTeachCourseIds;
        int *TeacherTaughtClbumIds;
    }data;
}TeacherStruct; //教师
typedef TeacherStruct *TeacherStructs;


//typedef struct {
//    StudentStruct studentStruct;
//
//}StudentNode;

struct StudentNode {
    StudentStruct studentStruct;
    StudentNode* next;
};