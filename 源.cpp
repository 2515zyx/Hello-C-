#include<iostream>
#include<string>
using namespace std;

int *count(const string& s)
{
	static int a[10] = { 0 };
	int num = s.length();
	for (int i = 0; i < num; i++)
	{  	
		if (isdigit(s[i]))
			a[s[i]-'0']++;
	}
	/*for (int i = 0; i < 10; i++)
		cout << i << "数字有" << a[i] << endl;*/
	return a;
}
int main()
{
	string str;
	getline(cin, str);
	
	int* counts = count(str);
	for (int i = 0; i < 10; i++)
	   cout << i << "数字有" << counts[i] << endl;
	return 0;
}