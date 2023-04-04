#include<iostream>
using namespace std;
int main()
{
	int total=0, pos=0, neg=0;
	int n;
	float ave;
	cout << "Enter an integer,the input ends if it is 0:";
	cin >> n;
	while (n != 0)
	{
		total += n;
		if (n > 0) pos++;
		if (n < 0) neg++;	
		cin >> n;
	}
	ave = total *1.0/ (pos + neg);
	cout << "The number of positives is  " << pos << endl;
	cout << "The number of negatives is  " << neg << endl;
	cout << "The total is  " << total << endl;
	cout << " The average is  " << ave << endl;
	return 0;
}