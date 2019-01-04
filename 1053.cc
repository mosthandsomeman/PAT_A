//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//
//const int maxn = 110;
//struct node
//{
//	int w;
//	vector<int> child;
//}Node[maxn];
//
//int N, M, S, id, k, c;
//int path[maxn];
//bool cmp(int a, int b) {
//	return Node[a].w > Node[b].w;
//}
//
//void DFS(int index, int num, int sum) {
//	if (sum > S) return;
//	else if (sum == S) {
//		if (Node[index].child.size() == 0) {
//			for (int i = 0;i < num;++i) {
//				if (i < num - 1) {
//					printf("%d ", Node[path[i]].w);
//				}
//				else {
//					printf("%d\n", Node[path[i]].w);
//				}
//			}
//		}
//		return;
//	}
//	else {
//		int len = Node[index].child.size();
//		for (int i = 0;i < len;++i) {
//			int child = Node[index].child[i];
//			path[num] = child;
//			DFS(child, num + 1, sum + Node[child].w);
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d %d", &N, &M, &S);
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &Node[i].w);
//	}
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d", &id, &k);
//		for (int j = 0;j < k;++j) {
//			scanf("%d", &c);
//			Node[id].child.push_back(c);
//		}
//		sort(Node[id].child.begin(), Node[id].child.end(), cmp);
//	}
//
//	path[0] = 0;
//	DFS(0, 1, Node[0].w);
//
//	system("pause");
//	return 0;
//}