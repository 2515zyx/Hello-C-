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
	for (j = 0; j < 7; j++)   //  Ѱ�������1��1�������ڼ�
	{
		if (day == 7) { n = 0; break; }
		if (day == a[j])
		{
			n = k = a[j]; break;   // ��ӡ���ںͿո�ĸ���
		}
	}
	for (m = 0; m < 12; m++)   //�����·�
	{
		r = k;    //�ո���
		cout << "\t\t" << str2[m] << " \t " << year << endl;
		cout << "----------------------------------------------------" << endl;
		for (j = 0; j < 7; j++)     //��ӡ����
			cout << str1[j] << "\t";
		cout << endl;

		for (; r > 0 && r != 7; r--)  // ��ӡ�ո�
			cout << "\t";

		for (i = 1; i < 32; i++)   // ��ӡ����
		{
			if (i < 10) cout << i << "\t";
			if (i >= 10) cout << i << "\t";
			n++; k++;
			if (k == 7) k = 0; // ������һ��ֻ����7�������ո�ҲΪһ����
			if (n % 7 == 0) cout << endl;	 //����
		}
		cout << endl << endl << endl;   //����
	}
	return 0;
}