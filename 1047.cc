//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxk = 2510;
//int n, k, course, num;
//vector<char *> vec[maxk];
//bool cmp(char *a, char * b) {
//	return strcmp(a, b) < 0;
//}
//int main() {
//	scanf("%d %d", &n, &k);
//	for (int i = 0;i < n;++i) {
//		char * name = new char[6];
//		scanf("%s %d", name, &num);
//		for (int j = 0;j < num;++j) {
//			scanf("%d", &course);
//			vec[course].push_back(name);
//		}
//	}
//	for (int i = 1;i <= k;++i) {
//		printf("%d %d\n", i, vec[i].size());
//		if (vec[i].size() != 0) {
//			sort(vec[i].begin(), vec[i].end(), cmp);
//			for (auto elem : vec[i]) printf("%s\n", elem);
//		}
//	}
//	system("pause");
//	return 0;
//}