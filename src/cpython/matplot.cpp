#include <python3.9/Python.h>
#include <iostream>
 
using namespace std;
 
int main(){
    // 1、初始化python接口  
	Py_Initialize();
	if(!Py_IsInitialized()){
		cout << "python init fail" << endl;
		return 0;
	}
    // 2、初始化python系统文件路径，保证可以访问到 .py文件
	PyRun_SimpleString("import sys");
	PyRun_SimpleString("sys.path.append('./')");
 
    // 3、调用python文件名，不用写后缀
	PyObject* pModule = PyImport_ImportModule("images");
	if( pModule == NULL ){
		cout <<"module not found" << endl;
		return 1;
	}
    // 4、调用函数
	PyObject* pFunc = PyObject_GetAttrString(pModule, "__addNum");
	if( !pFunc || !PyCallable_Check(pFunc)){
		cout <<"not found function add_num" << endl;
		return 0;
	}
    
	// 传参数
	PyObject* pArgs = PyTuple_New(2);

	// 传入第一个参数
	PyTuple_SetItem(pArgs, 0, Py_BuildValue("i", 2)); //其中的i参数是函数中已经提前声明好的
	// 传入第二个参数
	PyTuple_SetItem(pArgs, 1, Py_BuildValue("i", 2));

	// 使用c++调用python接口
    PyObject* pReturn = PyObject_CallObject(pFunc, pArgs);

	int nReturn = 0;
	PyArg_Parse(pReturn, "i", &nReturn);
	cout << "python function return value: " << nReturn << endl;
    // 5、结束python接口初始化
	Py_Finalize();
	return 0;
}
