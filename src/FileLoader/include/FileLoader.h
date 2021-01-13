#include <iostream>
#include <fstream>
#include <string>
#include "../../3rd/include/json.hpp" //nlohmann/json

using json = nlohmann::json;



class JsonFileUnit{
public:
    JsonFileUnit(string filePath): filePath(filePath){
        fileObj.open(filePath, ios::in | ios::out);
        if (!fileObj.is_open()){
            cout<<"文件:"<<filePath<<"读取失败!!"<<endl;
        }
    }
    ~JsonFileUnit(){
        fileObj.close();
    }
    json* getJsonObj(){
        jsonObj->parse(getFileString());
        return jsonObj;
    };
    void writeJsonToFile(){
        fileObj << jsonObj->dump(4) <<endl;
    }

private:
    string filePath;
    fstream fileObj;
    json *jsonObj;
    string getFileString(){
        string fileString;
        while (getline(fileObj,fileString)){
            cout << fileString.c_str() << endl;
        }
        return fileString;
    }
};