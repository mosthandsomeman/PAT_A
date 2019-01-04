//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//const int maxn = 1010;
//int n, l, k, id;
//bool inq[maxn] = { false };
//struct Node
//{
//	int v, high;
//	Node(int _v) :v(_v) {}
//};
//vector<Node> vec[maxn];
//int BFS(int st) {
//	int num = 0;
//	fill(inq, inq + maxn, false);
//	queue<Node> q;
//	Node tmp(st);
//	tmp.high = 0;
//	q.push(tmp);
//	inq[st] = true;
//	while (!q.empty()) {
//		Node top = q.front();
//		q.pop();
//		int u = top.v;
//		for (int i = 0;i < vec[u].size();++i) {
//			Node next = vec[u][i];
//			next.high = top.high + 1;
//			if (inq[next.v] == false && next.high <= l) {
//				q.push(next);
//				inq[next.v] = true;
//				++num;
//			}
//		}
//	}
//	return num;
//}
//int main() {
//	scanf("%d %d", &n, &l);
//	for (int i = 1;i <= n;++i) {
//		scanf("%d", &k);
//		for (int j = 0;j < k;++j) {
//			scanf("%d", &id);
//			vec[id].push_back(Node(i));
//		}
//	}
//	scanf("%d", &k);
//	for (int i = 0;i < k;++i) {
//		scanf("%d", &id);
//		printf("%d\n", BFS(id));
//	}
//	system("pause");
//	return 0;
//}