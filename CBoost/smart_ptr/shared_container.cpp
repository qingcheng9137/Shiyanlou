///*************************************************************************************/
///*************************************** 2018.4.18 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////��shared_ptr��Ϊ������Ԫ�أ���������ʾvector<shared_ptr<T>>
//
//#include "stdafx.h"
//
//using namespace std;
//
//int main()
//{
//	typedef vector<shared_ptr<int>> vs;
//	vs v(10);
//	//Ԫ�ر���ʼ��Ϊ��ָ��
//
//	int ni = 0;
//	for (auto pos = v.begin(); pos != v.end(); ++pos)
//	{
//		(*pos) = make_shared<int>(++ni);	//ʹ�ù���������ֵ
//		cout << *(*pos) << ", ";	//���ֵ
//	}
//	cout << endl;
//
//	shared_ptr<int> p = v[9];
//	*p = 100;
//	cout << *v[9] << endl;
//
//	system("pause");
//	return 0;
//}