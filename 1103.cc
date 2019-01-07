//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//#include<cmath>
//using namespace std;
//int n, k, p, maxSum = -1;
//vector<int> vec, tempPath, path;
//void DFS(int idx, int sum, int num, int facSum) {
//	if (num == k) {
//		if (sum == n && facSum > maxSum) {
//			maxSum = facSum;
//			path = tempPath;
//		}
//		return;
//	}
//	while (idx >= 1) {
//		if (sum + vec[idx] <= n) {
//			tempPath[num] = idx;
//			DFS(idx, sum + vec[idx], num + 1, facSum + idx);
//		}
//		if (idx == 1) return;
//		--idx;
//	}
//}
//int main() {
//	scanf("%d %d %d", &n, &k, &p);
//	int temp = 0, idx = 1;
//	while (temp <= n) {
//		vec.push_back(temp);
//		temp = pow(idx, p);
//		++idx;
//	}
//	tempPath.resize(k);
//	DFS(vec.size() - 1, 0, 0, 0);
//	if (maxSum == -1) printf("Impossible\n");
//	else {
//		printf("%d = ", n);
//		for (int i = 0;i < path.size();++i) {
//			if (i != 0) printf(" + ");
//			printf("%d^%d", path[i], p);
//		}
//	}
//	system("pause");
//	return 0;
//}