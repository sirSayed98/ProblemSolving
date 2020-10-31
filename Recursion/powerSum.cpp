#include <vector>
#include <iostream>
#include <cmath>
using namespace std;

int total = 0;
int power = 0;
int N = 0;
int solutions = 0;
void sol(int idx, vector<int> &numbers)
{
    if (idx == N + 1)
    {
        int sum = 0;
        for (size_t i = 0; i < numbers.size(); i++)
        {
            sum += pow(numbers[i], power);
            if (sum > total)
                break;
        }
        if (sum == total)
            solutions++;
        return;
    }

    numbers.push_back(idx);
    sol(idx + 1, numbers);
    numbers.pop_back();
    sol(idx + 1, numbers);
}
int main()
{
    cin >> total;
    cin >> power;
    N = floor(pow(total, 1.0 / power));
    vector<int> numbers;
    sol(1, numbers);
    cout << solutions << endl;
}