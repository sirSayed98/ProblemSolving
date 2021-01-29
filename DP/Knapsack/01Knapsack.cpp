/**
 * @file 01Knapsack.cpp
 * @author your name (mohamed sayed)
 * @brief  this is 0/1 knapsack problem using top-down approach
 * @version 0.1
 * @date 2021-01-29
 * @resouces
 *      https://www.youtube.com/watch?v=dT6dvdbpChA&list=PLEJXowNB4kPxBwaXtRO1qFLpCzF75DYrS&index=5
 *      https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/
 * @copyright Copyright (c) 2021
 * 
 */

#include <bits/stdc++.h>
using namespace std;


// Returns the value of maximum profit
int knapSackRec(int total, int wt[],
                int val[], int i,
                int **dp)
{
    // base condition
    if (i < 0)
        return 0;
    if (dp[i][total] != -1)
        return dp[i][total];

    if (wt[i] > total)
    {

        // Store the value of function call
        // stack in table before return
        dp[i][total] = knapSackRec(total, wt,
                                   val, i - 1,
                                   dp);
        return dp[i][total];
    }
    else
    {
        // Store value in a table before return
        dp[i][total] = max(val[i] + knapSackRec(total - wt[i],
                                                wt, val,
                                                i - 1, dp),
                           knapSackRec(total, wt, val,
                                       i - 1, dp));

        // Return value of table after storing
        return dp[i][total];
    }
}

int knapSack(int total, int wt[], int val[], int n)
{
    // double pointer to declare the
    // table dynamically
    int **dp;
    dp = new int *[n];

    // loop to create the table dynamically
    for (int i = 0; i < n; i++)
        dp[i] = new int[total + 1];

    // loop to initially filled the
    // table with -1
    for (int i = 0; i < n; i++)
        for (int j = 0; j < total + 1; j++)
            dp[i][j] = -1;
    return knapSackRec(total, wt, val, n - 1, dp);
}

// Driver Code
int main()
{
    int wt[] = {4, 3, 5};
    int val[] = {7, 6, 11};
    int total = 10;
    int n = sizeof(val) / sizeof(val[0]);
    cout << knapSack(total, wt, val, n);
    return 0;
}
