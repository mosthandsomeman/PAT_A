//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n, m, c;
//int arr[100010];
//bool flag = false;
//bool cmp(int & a, int & b) { return a < b; }
//int main() {
//	scanf("%d%d", &n, &m);
//	for (int i = 1;i <= n;++i) scanf("%d", arr + i);
//	sort(arr + 1, arr + n + 1, cmp);
//	int left = 1, right = n;
//	while (left < right) {
//		int sum = arr[left] + arr[right];
//		if (sum == m) {
//			flag = true;
//			break;
//		}
//		else if (sum < m) ++left;
//		else --right;
//	}
//	if (flag == false) printf("No Solution\n");
//	else printf("%d %d\n", arr[left], arr[right]);
//	system("pause");
//	return 0;
//}