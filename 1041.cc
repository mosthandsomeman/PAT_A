//#include<cstdio>
//#include<cstdlib>
//#include<map>
//#include<vector>
//using namespace std;
//int N, c;
//map<int, vector<int> > res;
//int main() {
//	scanf("%d", &N);
//	for (int i = 1;i <= N;++i) {
//		scanf("%d", &c);
//		if (res.find(c) == res.end()) {
//			vector<int> vec;
//			vec.push_back(i);
//			res[c] = vec;
//		}
//		else {
//			res[c].push_back(i);
//		}
//	}
//	int idx = 100100, score;
//	for (auto elem : res) {
//		if (elem.second.size() == 1) {
//			if (elem.second[0] < idx) {
//				idx = elem.second[0];
//				score = elem.first;
//			}
//		}
//	}
//	if (idx == 100100) printf("None\n");
//	else printf("%d\n", score);
//	system("pause");
//	return 0;
//}