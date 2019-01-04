#include<cstdio>
#include<cstdlib>
#include<vector>
#include<algorithm>
using namespace std;
const int maxn = 10005;
int N, V;
int c[maxn] = { 0 }, dp[maxn] = { 0 };
bool select[maxn][110] = { false };
int main() {
	scanf("%d %d", &N, &V);
	for (int i = 0;i < N;++i) scanf("%d", c + i);
	sort(c, c + N);
	for (int v = 0; v < V;++v) dp[v] = 0;
	for (int i = 1;i <= N;++i) {
		for (int v = V; v >= c[i];--v) {
			if (dp[v] <= dp[v - c[i]] + c[i]) {
				dp[v] = dp[v - c[i]] + c[i];
				select[i][v] = true;
			}
		}
	}
	if (dp[V] != V) printf("No Solution\n");
	else {
		vector<int> vec;
		int v = V, i = N;
		while (v > 0) {
			if (select[i][v]) vec.push_back();
		}
		for (int i = 0;i < maxn;++i) {
			if (select[i][V]) {
			}
		}
	}
	system("pause");
	return 0;
}