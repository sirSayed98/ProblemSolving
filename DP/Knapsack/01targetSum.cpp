/**
 * @file TargetSum.cpp
 * @author (mohamed sayed)
 * @brief  this is 0/1 targetsum problem using top-down approach
 * @version 0.1
 * @date 2021-01-29
 * @resouces
 *     https://www.youtube.com/watch?v=oaloiuvGcQg&list=PLEJXowNB4kPxBwaXtRO1qFLpCzF75DYrS&index=7
 *     https://www.techiedelight.com/subset-sum-problem/
 * @copyright Copyright (c) 2021
 * 
 */

#include <iostream>
#include <unordered_map>
using namespace std;
 
// create a map to store solutions of subproblems
unordered_map<int, bool> lookup;
 
// Return true if there exists a subsequence of arr[0..n] with given sum
bool subsetSum(int arr[], int n, int sum)
{
    // return true if sum becomes 0 (subset found)
    if (sum == 0)
        return true;
 
    // base case: no items left or sum becomes negative
    if (n < 0 || sum < 0)
        return false;
 
    // if sub-problem is seen for the first time, solve it and
    // store its result in a map
    if (lookup.find(sum) == lookup.end())
    {
        // Case 1. include current item in the subset (arr[n]) and recur
        // for remaining items (n - 1) with remaining sum (sum - arr[n])
        bool include = subsetSum(arr, n - 1, sum - arr[n]);
 
        // Case 2. exclude current item n from subset and recur for
        // remaining items (n - 1)
        bool exclude = subsetSum(arr, n - 1, sum);
 
        lookup[sum] = include || exclude;
    }
 
    // return solution to current sub-problem
    return lookup[sum];
}
 
// Subset Sum Problem
int main()
{
    // Input: set of items and a sum
    int arr[] = { 3, 34, 4, 12, 5, 2 };
    int sum =  1;
 
    // number of items
    int n = sizeof(arr) / sizeof(arr[0]);
 
    if (subsetSum(arr, n - 1, sum))
        cout << "Yes";
    else
        cout << "No";
 
    return 0;
}
