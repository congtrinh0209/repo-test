#include <stdio.h>
#include <iostream>
#include <stack>

using namespace std;
int m, n, mt[101][101];
int dd[101];
void DFS(int u)
{
	printf("%d", u);
	dd[u] = 1;//da di qua u
	for(int i = 1; i <= n; i++){
		if(mt[u][i] == 1 && dd[i] == 0){
			DFS(i);
		}
	}
}
int main(){
	freopen("graph.txt", "r", stdin);
	scanf("%d %d", &n, &m);
	for(int i = 1; i <= n; i++){
		int a, b;
		scanf("%d %d", &a, &b);
		mt[a][b] = 1;
		mt[b][a] = 1;
	}
	DFS(1);
}
