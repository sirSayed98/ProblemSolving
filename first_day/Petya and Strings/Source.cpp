#include<iostream>
#include<string>

using namespace std;

int main() {
	string s1;
	string s2;
	string c1;
	string c2;
	cin >> s1;
	cin >> s2;

	int size = s1.length();
	for (int i = 0; i < size; i++)
	{
		c1 += toupper(s1[i]);
		c2 += toupper(s2[i]);
	}

	
	int an = 0;
	an=c1.compare(c2);
	switch(an)
	{
	case 1:
		cout <<1<< endl;
		break;
	case -1:
		cout << -1 << endl;
		break;
	case 0:
		cout << 0 << endl;
		break;
	default:
		cout << " something error" << endl;

	}


	return 0;
}