#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main()
{    
	int com, input, num_com = 0, num_input = 0;
	srand((unsigned)time(NULL));
	com = rand() % 3 + 1;
	cout << "input your number(1~3):";
	cin >> input;
	 while (num_com != 2 && num_input != 2)
	 {
		if (input == 1 && com == 2) { num_com++; cout << "������" << endl; }
		if (input == 2 && com == 3) { num_com++; cout << "������" << endl;}
		if(input == 2 && com == 1)  { num_input++; cout << "��Ӯ��" << endl;}
		if (input == 3 && com == 2) { num_input++; cout << "��Ӯ��" << endl;}
		if (input == 3 && com == 1) { num_com++; cout << "������" << endl;}
		if (input == 1 && com == 3) { num_input++; cout << "��Ӯ��" << endl;}
		if (input == com) cout << "ƽ��" << endl;
		com = rand() % 3 + 1;	
		if (num_com != 2 && num_input != 2)
		{
			cout << "�����¿�ʼ���룺"; 
		    cin >> input; 
		}	
	 } 		
	 cout << endl;
	if (num_com == 2) cout << "������" << endl;
	if (num_input == 2) cout << "�ܰ�" << endl;
	return 0;
}