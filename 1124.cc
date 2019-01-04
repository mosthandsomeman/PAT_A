//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<set>
//#include<iostream>
//using namespace std;
//int N, M, K, first;
//set<string> sset;
//string str;
//int main() {
//	cin >> N >> M >> K;
//	first = K;
//	if (K > N || K < 1) cout << "Keep going..." << endl;
//	else {
//		for (int i = 1;i <= N;++i) {
//			cin >> str;
//			if (i == first) {
//				if (sset.find(str) == sset.end()) {
//					cout << str << endl;
//					first += M;
//					sset.insert(str);
//				}
//				else {
//					while (i <= N && sset.find(str) != sset.end()) {
//						++i; cin >> str;
//					}
//					if (i > N) break;
//					cout << str << endl;
//					first = i + M;
//					sset.insert(str);
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}