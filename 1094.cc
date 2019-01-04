//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<queue>
//using namespace std;
//const int maxn = 110;
//int N, M, K, a, b, cnt = 0, layer = 1;
//struct Node
//{
//	int data, layer;
//	vector<int> child;
//}arr[maxn];
//int idx[maxn] = { 0 };
//void layerOrder() {
//	queue<Node*> q;
//	q.push(&arr[1]);
//	arr[1].layer = 1;
//	while (!q.empty()) {
//		Node * tmp = q.front();
//		q.pop();
//		idx[tmp->layer]++;
//		for (int i = 0;i < tmp->child.size();++i) {
//			q.push(&arr[tmp->child[i]]);
//			arr[tmp->child[i]].layer = tmp->layer + 1;
//		}
//	}
//}
//int main(){
//	scanf("%d %d", &N, &M);
//	for (int i = 1;i <= N;++i) arr[i].data = i;
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d", &a, &K);
//		for (int j = 0;j < K;++j) {
//			scanf("%d", &b);
//			arr[a].child.push_back(b);
//		}
//	}
//	layerOrder();
//
//	for (int i = 0;i < maxn;++i) {
//		if (idx[i] > cnt) {
//			layer = i; cnt = idx[i];
//		}
//	}
//	printf("%d %d\n", cnt, layer);
//	system("pause");
//	return 0;
//}