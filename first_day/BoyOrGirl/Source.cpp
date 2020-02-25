#include<iostream>
#include<list>
#include<string>
using namespace std;

int main() {
	list <char>l1;
	char arr[100];
	string s1;

	cin >> s1;
	for (int i = 0; i < s1.length(); i++)
	{
		arr[i] = s1[i];

	}

	l1.assign(arr, arr + s1.length());
	l1.sort();
	auto it = l1.begin();
	auto it2 = l1.begin();
	it2++;
	while (it2!=l1.end())
	{
		char a = *it;
		char b = *it2;
		if (a == b)
		{
			l1.erase(it);
			it = it2;
			it2++;
		}
		else {
			it++;
			it2++;
		}

	}
	if (l1.size() % 2 == 1)//odd
		cout << "IGNORE HIM!" << endl;
	else
		cout << "CHAT WITH HER!" << endl;
	/*
	for (auto it = l1.begin(); it != l1.end(); ++it)
	{
		cout << *it << " ";

	}*/
	//cout << endl;

	return 0;
}