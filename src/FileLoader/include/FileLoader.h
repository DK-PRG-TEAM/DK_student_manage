#include <iostream>
#include <fstream>
#include <string>
#include "../../3rd/include/json.hpp" //nlohmann/json

using json = nlohmann::json;



class FileUnit{
public:
    FileUnit(string filePath): filePath(filePath){
        fileObj.open(filePath, ios::in | ios::out);
        if (!fileObj.is_open()){
            cout<<"文件:"<<filePath<<"读取失败!!"<<endl;
        }
    }
    ~FileUnit(){
        fileObj.close();
    }
    string getFileString(){
        string fileString;
        while (getline(fileObj,fileString)){
            cout << fileString.c_str() << endl;
        }
        return fileString;
    }
    void writeStringToFile(string target){
        fileObj << target;
    }

private:
    string filePath;
    fstream fileObj;
};