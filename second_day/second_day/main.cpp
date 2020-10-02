#include <iostream>
#include<string>
using namespace std;

int main() {
	string stones;
	string instructions;
	cin >> stones;
	cin >> instructions;
	int j = 0;
	int answer = 0;
	for (size_t i = 0; i < instructions.length(); i++)
	{
		if (instructions[i] == stones[j])
		{
			answer++;
			j++;
		}
	}
	cout << answer + 1 << endl;
	
}