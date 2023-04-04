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
		if (input == 1 && com == 2) { num_com++; cout << "你输了" << endl; }
		if (input == 2 && com == 3) { num_com++; cout << "你输了" << endl;}
		if(input == 2 && com == 1)  { num_input++; cout << "你赢了" << endl;}
		if (input == 3 && com == 2) { num_input++; cout << "你赢了" << endl;}
		if (input == 3 && com == 1) { num_com++; cout << "你输了" << endl;}
		if (input == 1 && com == 3) { num_input++; cout << "你赢了" << endl;}
		if (input == com) cout << "平局" << endl;
		com = rand() % 3 + 1;	
		if (num_com != 2 && num_input != 2)
		{
			cout << "请重新开始输入："; 
		    cin >> input; 
		}	
	 } 		
	 cout << endl;
	if (num_com == 2) cout << "你无了" << endl;
	if (num_input == 2) cout << "很棒" << endl;
	return 0;
}