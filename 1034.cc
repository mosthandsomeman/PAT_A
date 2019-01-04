//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<map>
//#include<iostream>
//using namespace std;
//
//const int INF = 1000000000;
//const int maxn = 2010;
//int G[maxn][maxn] = { 0 }, weight[maxn] = {0};//ÁÚ½Ó¾ØÕó
//map<string, int> stringToInt;
//map<int, string> intToString;
//map<string, int> gang;
//int n, k, w, perSonNum = 0;
//string str1, str2;
//bool vis[maxn] = { false };
//
//void DFS(int nowVisit, int & head, int & numMember, int & totalVal) {
//	numMember++;
//	vis[nowVisit] = true;
//	if (weight[nowVisit] > weight[head]) {
//		head = nowVisit;
//	}
//	for (int i = 0;i < perSonNum;++i) {
//		if (G[nowVisit][i] > 0 && G[nowVisit][i] != INF) {
//			totalVal += G[nowVisit][i];
//			G[nowVisit][i] = G[i][nowVisit] = 0;
//			if (vis[i] == false) {
//				DFS(i, head, numMember, totalVal);
//			}
//		}
//	}
//}
//
//void DFSTrave() {
//	for (int i = 0;i < perSonNum;++i) {
//		if (vis[i] == false) {
//			int head = i, numMember = 0, totalVal = 0;
//			DFS(i, head, numMember, totalVal);
//			if (numMember > 2 && totalVal > k) {
//				gang[intToString[head]] = numMember;
//			}
//		}
//	}
//}
//
//int change(string str) {
//	if (stringToInt.find(str) != stringToInt.end()) {
//		return stringToInt[str];
//	}
//	else {
//		intToString[perSonNum] = str;
//		stringToInt[str] = perSonNum;
//		return perSonNum++;
//	}
//}
//
//int main() {
//	cin >> n >> k;
//	for (int i = 0;i < n;++i) {
//		cin >> str1 >> str2 >> w;
//		int id1 = change(str1);
//		int id2 = change(str2);
//		weight[id1] += w;
//		weight[id2] += w;
//		G[id1][id2] += w;
//		G[id2][id1] += w;
//	}
//
//	DFSTrave();
//	cout << gang.size() << endl;
//	for (auto elem : gang) {
//		cout << elem.first << " " << elem.second << endl;
//	}
//
//	system("pause");
//	return 0;
//}