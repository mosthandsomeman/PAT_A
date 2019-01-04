//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int n, k, course, num;
//const int maxn = 26 * 26 * 26 * 10 + 1;
//vector<int> vec[maxn];
//char name[6];
//int hashName() {
//	return (name[3] - '0') + (name[2] - 'A') * 10 + (name[1] - 'A') * 10 * 26 + (name[0] - 'A') * 10 * 26 * 26;
//}
//int main() {
//	scanf("%d %d", &n, &k);
//	for (int i = 0;i < k;++i) {
//		scanf("%d %d", &course, &num);
//		for (int j = 0;j < num;++j) {
//			scanf("%s", name);
//			int id = hashName();
//			vec[id].push_back(course);
//		}
//	}
//	for (int i = 0;i < n;++i) {
//		scanf("%s", name);
//		int id = hashName();
//		printf("%s %d", name, vec[id].size());
//		sort(vec[id].begin(), vec[id].end());
//		for (int j = 0;j < vec[id].size();++j) printf(" %d", vec[id][j]);
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}