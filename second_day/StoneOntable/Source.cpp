#include <iostream>
#include<string>
using namespace std;

int main() {
	int stones;
	string stonesS;
	cin >> stones;
	cin >> stonesS;
	int remove = 0;
	int j = 0;
	if(stonesS.length()>1)
	for (size_t i = 1; i < stonesS.length(); i++)
	{
		if (stonesS[j]==stonesS[i])
		{
			remove++;
			stonesS.erase(stonesS.begin() + i);
			i--;
		}
		else {
			j++;
		}
		
	}
	cout << remove << endl;
}