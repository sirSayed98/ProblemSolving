#include <vector>
#include <iostream>
using namespace std;


vector<vector<int>> graph(20, vector<int>(20, 0));

int main(){
    int nVer, Edges;
    cin >> nVer >> Edges;
    for (int i = 0; i < Edges; i++)
    {
        int first, second;
        cin >> first >> second;
        graph[first][second] = graph[second][first] = 1; //Or weight
    }
}