//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<set>
//#include<algorithm>
//using namespace std;
//int N, a;
//vector<int> vec, res;
//set<int> left, right;
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &a);
//		vec.push_back(a);
//		right.insert(a);
//	}
//	right.erase(vec[0]);
//	for (int i = 0;i < vec.size();++i) {
//		bool f1 = false, f2 = false;
//		if (right.size() != 0) {
//			if (vec[i] < *right.begin()) f1 = true;
//		}
//		else f1 = true;
//		if (left.size() != 0) {
//			if (vec[i] > *left.rbegin()) f2 = true;
//		}
//		else f2 = true;
//		if (f1 && f2) res.push_back(vec[i]);
//		left.insert(vec[i]);
//		if (i < vec.size() - 1) right.erase(vec[i + 1]);
//	}
//	printf("%d\n", res.size());
//	sort(res.begin(), res.end());
//	if (res.size() == 0) printf("\n");
//	else {
//		for (int i = 0;i < res.size();++i) {
//			printf("%d", res[i]);
//			if (i < res.size() - 1) printf(" ");
//			else printf("\n");
//		}
//	}
//	system("pause");
//	return 0;
//}