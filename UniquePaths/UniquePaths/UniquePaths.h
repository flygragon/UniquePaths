#pragma once
#include<vector>
class UniquePaths {
private:
public:
	int uniquePaths(int m, int n,std::vector<std::vector<int> >& Path) {
		for (int i = 0; i <m; i++)
			Path[i][0] = 1;
		for (int j = 0; j <n; j++)
			Path[0][j] = 1;
		for (int i = 1; i <m; i++)
			for (int j = 1; j <n; j++)
				Path[i][j] = Path[i - 1][j] + Path[i][j - 1];
		return Path[m - 1][n - 1];
	}
};