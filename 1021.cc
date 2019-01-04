//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//const int maxn = 10002;
//bool inq[maxn] = { false };
//int layer[maxn] = { 0 };
//int N, u, v, piece = 0;
//bool flag = false;
//struct Node
//{
//	int v, layer;
//	Node(int _v) :v(_v) {}
//};
//vector<int> Adj[maxn];
//vector<Node> res;
//bool cmp(Node & a, Node & b) {
//	if (a.layer != b.layer) return a.layer > b.layer;
//	else return a.v < b.v;
//}
//
//void BFS(int s) {
//	int high = 1;
//	queue<int> q;
//	inq[s] = true;
//	q.push(s);
//	layer[s] = 1;
//	while (!q.empty()) {
//		int u = q.front();
//		q.pop();
//		for (int i = 0;i < Adj[u].size();++i) {
//			int next = Adj[u][i];
//			layer[next] = layer[u] + 1;
//			if (layer[next] > high) high = layer[next];
//			if (inq[next] == false) {
//				q.push(next);
//				inq[next] = true;
//			}
//		}
//	}
//	Node node(s);
//	node.layer = high;
//	res.push_back(node);
//}
//
//void BFSTrave() {
//	for (int i = 1;i <= N;++i) {
//		if (inq[i] == false) {
//			BFS(i);
//			++piece;
//		}
//	}
//	if (piece == 1) flag = true;
//	else return;
//	res.clear();
//	for (int i = 1;i <= N;++i) {
//		memset(inq, 0, sizeof(inq));
//		memset(layer, 0, sizeof(layer));
//		if (inq[i] == false) {
//			BFS(i);
//		}
//	}
//}
//
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < N - 1;++i) {
//		scanf("%d %d", &u, &v);
//		Adj[u].push_back(v);
//		Adj[v].push_back(u);
//	}
//	BFSTrave();
//	if (flag == false) {
//		printf("Error: %d components\n", piece);
//	}
//	else {
//		sort(res.begin(), res.end(), cmp);
//		printf("%d\n", res[0].v);
//		for (int i = 1;i < N;++i) {
//			if (res[i].layer == res[0].layer) printf("%d\n", res[i].v);
//			else break;
//		}
//	}
//	system("pause");
//	return 0;
//}