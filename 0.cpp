#include<iostream>
using namespace std;
int main()
{
	int year, day;
	int  j, k = 0, n = 0, r;
	int i, m;
	string str1[7] = { "Sun","Mon","Tue","Wed","Thu","Fri","Sat" };
	string str2[12] = { "January","February","March","April","May","June",
			   "July","August","September","October","November","December" };
	int a[7] = { 7,1,2,3,4,5,6 };

	cout << "Input year and a day from Monday to Sunday :";
	cin >> year >> day;
	cout << endl;
	for (j = 0; j < 7; j++)   //  寻找这年的1月1号是星期几
	{
		if (day == 7) { n = 0; break; }
		if (day == a[j])
		{
			n = k = a[j]; break;   // 打印日期和空格的个数
		}
	}
	for (m = 0; m < 12; m++)   //控制月份
	{
		r = k;    //空格数
		cout << "\t\t" << str2[m] << " \t " << year << endl;
		cout << "----------------------------------------------------" << endl;
		for (j = 0; j < 7; j++)     //打印星期
			cout << str1[j] << "\t";
		cout << endl;

		for (; r > 0 && r != 7; r--)  // 打印空格
			cout << "\t";

		for (i = 1; i < 32; i++)   // 打印日期
		{
			if (i < 10) cout << i << "\t";
			if (i >= 10) cout << i << "\t";
			n++; k++;
			if (k == 7) k = 0; // 计数，一行只能有7个数，空格也为一个数
			if (n % 7 == 0) cout << endl;	 //换行
		}
		cout << endl << endl << endl;   //换行
	}
	return 0;
}