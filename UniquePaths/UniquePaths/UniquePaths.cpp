// UniquePaths.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include"UniquePaths.h"
using namespace std;

int main()
{
	int m, n;
	cin >> m >> n;
	vector<vector<int> > MyPaths(m);
	for (int i = 0; i < m; i++)
		MyPaths[i].resize(n);
	UniquePaths UP;
	cout << UP.uniquePaths(m, n,MyPaths) << '\n';
	system("pause");
    return 0;
}

