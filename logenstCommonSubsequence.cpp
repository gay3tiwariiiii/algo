
#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{
	int graph[100][100], n, x, y,z=0,u=0;
	memset(graph, INT_MAX, sizeof(graph));
	cout << "Enter number of paths:\n";
	cin >> n;
	for (int i = 0; i < n; i++) {
		graph[i][i] = 0;
		cout << "Path and destination: ";
		cin >> x >> y;
		graph[x][y];
		z = max(z, x);
		u = max(u, y);
	}
	for (int i = 0; i <= z; i++) {
		for (int j = 0; j <= u; j++) {
			cout << a[i][j] << " ";
		}
		cout << "\n";
	}

 
	return 0;
}


