//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<queue>
//using namespace std;
//struct Node
//{
//	int v, layer;
//};
//const int maxn = 1010;
//vector<Node> Adj[maxn];
//bool inq[maxn] = { false };
//int N, L, K, num, c;
//
//int BFS(int s, int L) {
//	int numForward = 0;
//	queue<Node> q;
//	Node start;
//	start.v = s;
//	start.layer = 0;
//	q.push(start);
//	inq[start.v] = true;
//	while (!q.empty()) {
//		Node top = q.front();
//		q.pop();
//		int u = top.v;
//		for (int i = 0;i < Adj[u].size();++i) {
//			Node next = Adj[u][i];
//			next.layer = top.layer + 1;
//			if (inq[next.v] == false && next.layer <= L) {
//				q.push(next);
//				inq[next.v] = true;
//				numForward++;
//			}
//		}
//	}
//	return numForward;
//}
//
//int main() {
//	Node user;
//	scanf("%d %d", &N, &L);
//	for (int i = 1;i <= N;++i) {
//		user.v = i;
//		scanf("%d", &num);
//		for (int j = 0;j < num;++j) {
//			scanf("%d", &c);
//			Adj[c].push_back(user);
//		}
//	}
//	scanf("%d", &K);
//	for (int i = 0;i < K;++i) {
//		scanf("%d", &c);
//		memset(inq, false, sizeof(inq));
//		int numForward = BFS(c, L);
//		printf("%d\n", numForward);
//	}
//
//	system("pause");
//	return 0;
//}