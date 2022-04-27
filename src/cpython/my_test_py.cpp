#include "python3.9/Python.h"
#include "iostream"


using namespace std;

int main(int argc, char** argv)
{
    Py_Initialize();//初始化解释器
    if(!Py_IsInitialized()){
        cout << "python init faild" << endl;
        return 0;
    }

    // 初始化python系统文件路径，保证可以访问到 .py文件
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("import numpy");
    PyRun_SimpleString("sys.path.append('./')"); //　这里容易出错

    // 调用python文件名，不用写后缀
    PyObject* pModule = PyImport_ImportModule("my_test_matplot");
    if(pModule == NULL){
        cout << "module not found" << endl;
        return 1;
    }

    // 调用函数
    PyObject* pFunc = PyObject_GetAttrString(pModule, "pltNum");
    if(!pFunc || !PyCallable_Check(pFunc)){
        cout << "not found function add_num" << endl;
        return 0;
    }

    // 使用C++的python接口调用该函数
    PyObject_CallObject(pFunc, NULL);

    // 撤销Py_Initialize()和随后使用Python/C API函数进行的所有初始化
    Py_Finalize();

    return 0;
}