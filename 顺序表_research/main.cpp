#include <iostream>
#include "List.h"
#include "TestForFuntion.h"
#include "func.h"

using namespace std;

/*
main.cpp
只放测试函数和主函数
*/

int test()
{
	//先分配内存
	SqList* L, * L1;
	L = (SqList*)malloc(sizeof(SqList));
	L1 = (SqList*)malloc(sizeof(SqList));

	//初始化线性表
	InitList(L);
	InitList(L1);

	//CreatList(L,L1,1);
	//CreatList(L,1);

	cout << endl;
	//CreatRand1();
	PrintList(L);
	PrintList(L1);
	//PrintList(L1);
	//创建线性表并打印，结束

	//int l = Length(L);
	//cout << l << endl;

	//test_LocateElem(L);
	//test_GetElem(L);
	//test_ListDelete(L);
	int l1, l2;
	cout << "输入两线性表长度:" << endl;
	cin>>l1>>l2;
	L = testForfunc08(l1,l2);

	//func01(L);
	//func02(L);
	//func03(L);
	//func04(L);
	//func05(L);
	//func06(L);
	//L = func07(L, L1);

	PrintList(L);
	cout << L->length << endl;
	//PrintList(L1);
	//DestroyList(L);

	return 1;
}

int main()
{
	test();
	return 0;
}