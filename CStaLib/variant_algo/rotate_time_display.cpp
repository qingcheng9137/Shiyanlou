///*************************************************************************************/
///*************************************** 2018.4.10 ***********************************/
///*****************************          Jerry Zheng           ************************/
///**************************** Beijing Insititute of Technology ***********************/
///*************************************************************************************/
//
////序列：1，2，3，4，5，6，7，8，要求每间隔1s循环显示一次
////响应键盘动态
////延时程序
//
//#include "stdafx.h"
//
///*1s延时程序*/
//void delay()
//{
//	int nstart = time(NULL);
//	int nend = nstart;
//	do 
//	{
//		/*单位是1s，所以当他们第一次不同的时候，过了1s，因为end()是连续变化的*/
//		if (nstart != nend)
//		{
//			break;
//		}
//	} while (nend = time(NULL));
//}
//
//int main()
//{
//	int a[] = { 1,2,3,4,5,6,7,8 };
//	vector<int>v(a, a + 8);
//	cout << endl;
//	while (!_kbhit())	//按任意键退出演示
//	{
//		copy(v.begin(), v.end(), ostream_iterator<int>(cout, "\t"));
//		rotate(v.begin(), v.begin() + 1, v.end());
//		delay();
//		cout << endl;
//	}
//	system("pause");
//	return 0;
//}