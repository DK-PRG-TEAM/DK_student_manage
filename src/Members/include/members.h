class Members{
public:
    void add();
    void del();
    void revision();
    void search();
    void browse();
    void save();
    void export();
private:

};

typedef struct {
    char *name;
    bool isMan;
}MembersBaseInfo;




//new
typedef struct {
    int id;
    char *name;
}Major; //专业

typedef struct {
    int id;
    char *name;
}Course; //课程

typedef struct {
    int id;
    char *name;
    struct data{
        int majorId;
        int *courseIds;
    };
}Clbum; //班级

typedef struct {
    int id;
    struct data{
        int CourseId;
        float grade;
    };
}Grade; //成绩

typedef struct {
    int studentGradeId;
    int studentId;
    struct data{
        int *gradeIds;
    };
}StudentGrade; //学生成绩

typedef struct {
    int id;
    char *name;
    struct data{
        int clbumId;
        int studentGradeId;
    };
}Student; //学生

typedef struct {
    int id;
    int *name;
    struct data{
        int *TeachersMayTeachCourseIds;
        int *TeacherTaughtClbumIds;
    };
}Teacher; //教师