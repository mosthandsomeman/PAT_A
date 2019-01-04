//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<map>
//#include<cmath>
//#include<set>
//#include<iostream>
//using namespace std;
//const int maxn = 310;
//int N, M, K, id1, id2, personNum = 1;
//int G[maxn][maxn] = { 0 };
//vector<int> vec[maxn];
//map<string, int> idToidx;
//map<int, string> idxToid;
//string x, y;
//struct Node
//{
//	int id1, id2;
//};
//bool cmp(Node *& a, Node *& b) {
//	if (a->id1 != b->id1) return a->id1 < b->id1;
//	else return a->id2 < b->id2;
//}
//int change(string xx) {
//	if (idToidx.find(xx) == idToidx.end()) {
//		idToidx[xx] = personNum;
//		idxToid[personNum] = xx;
//		++personNum;
//	}
//	return idToidx[xx];
//}
//int main() {
//	cin >> N >> M;
//	fill(G[0], G[0] + maxn * maxn, -1);
//	for (int i = 0;i < M;++i) {
//		cin >> x >> y;
//		id1 = change(x);
//		id2 = change(y);
//		G[id1][id2] = G[id2][id1] = 1;
//		if ((x[0] == '-' && y[0] == '-') || (x[0] != '-' && y[0] != '-')) {
//			vec[id1].push_back(id2);
//			vec[id2].push_back(id1);
//		}
//	}
//	cin >> K;
//	for (int i = 0;i < K;++i) {
//		cin >> x >> y;
//		id1 = idToidx[x];
//		id2 = idToidx[y];
//		vector<Node*> res;
//		for (int j = 0;j < vec[id1].size();++j) {
//			if (vec[id1][j] == id2) continue;
//			for (int k = 0;k < vec[id2].size();++k) {
//				if (vec[id2][k] == id1) continue;
//				if (G[vec[id1][j]][vec[id2][k]] != -1) {
//					Node * node = new Node;
//					node->id1 = abs(stoi(idxToid[vec[id1][j]]));
//					node->id2 = abs(stoi(idxToid[vec[id2][k]]));
//					res.push_back(node);
//				}
//			}
//		}
//		if (res.size() == 0) printf("0\n");
//		else {
//			sort(res.begin(), res.end(), cmp);
//			printf("%d\n", res.size());
//			for (int j = 0;j < res.size();++j) printf("%04d %04d\n", res[j]->id1, res[j]->id2);
//		}
//	}
//	system("pause");
//	return 0;
//}