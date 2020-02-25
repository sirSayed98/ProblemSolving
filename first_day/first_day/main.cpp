#include<iostream>
using namespace std;
int main() {
	int n=0;
	int a1=0, a2=0, a3=0;
	int ans=0;
	cin >> n;
	for (size_t i = 0; i < n; i++)
	{
		cin >> a1>>a2>>a3;
		if (a1 + a2 + a3 >= 2)
			ans++;
	}
	cout << ans << endl;
	return 0;
}