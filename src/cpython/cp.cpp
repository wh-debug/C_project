// cp.cpp
#include <Python.h>
#include <iostream>
using namespace std;
int main(int argc, char *argv[])
{
    Py_Initialize(); // 初始化python解释器
    if (!Py_IsInitialized()){
        cout << "Initialize failed!" << endl;
        return 0;
    }

    PyObject* pModule = NULL;
    PyObject* pFunc;
    PyRun_SimpleString("import sys");
    PyRun_SimpleString("sys.path.append('./')");
    pModule = PyImport_ImportModule("pysplit");

    if (pModule == NULL){
        cout << "Module Not Found!" << endl;
    }

    pFunc = PyObject_GetAttrString(pModule, "sp");
    PyObject* args = Py_BuildValue("s", "Test String Hello Every One !");
    PyObject* pRet = PyObject_CallFunctionObjArgs(pFunc, args, NULL);
    int size = PyList_Size(pRet);
    cout << "List size is: " << size << endl;

    for(int i=0;i<size;i++){
        PyObject* cRet = PyList_GET_ITEM(pRet, i);
        char* s;
        PyArg_Parse(cRet, "s", &s);
        cout << "The " << i << "th term is: " << s << endl;
    }

    Py_Finalize(); //释放资源
    return 0;
}