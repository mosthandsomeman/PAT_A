//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<map>
//#include<set>
//#include<algorithm>
//using namespace std;
//int N, K, x, y, n, staNum = 0, idx;
//const int maxn = 10010;
//const int INF = 1000000000;
//struct Node{
//	int v, line;
//};
//vector<Node*> Adj[maxn];
//vector<int> path, tmpPath;
//int idToidx[maxn] = { 0 }, idxToid[maxn] = { 0 };
//bool vis[maxn] = { false };
//int minInter, dis;
//int getline(int a, int b) {
//	for (int i = 0;i < Adj[a].size();++i) {
//		if (Adj[a][i]->v == b) {
//			return Adj[a][i]->line;
//		}
//	}
//}
//void DFS(int st, int ed, int layer) {
//	if (st == ed ) {
//		int total = 0;
//		for (int i = 1;i < tmpPath.size() - 1;++i) {
//			int line1 = getline(tmpPath[i - 1], tmpPath[i]);
//			int line2 = getline(tmpPath[i], tmpPath[i + 1]);
//			if (line1 != line2) ++total;
//		}
//		if (layer < dis ||(layer == dis && total < minInter)) {
//			minInter = total;
//			path = tmpPath;
//			dis = layer;
//		}
//		return;
//	}
//	for (int i = 0;i < Adj[st].size();++i) {
//		if (!vis[Adj[st][i]->v]) {
//			vis[Adj[st][i]->v] = true;
//			tmpPath.push_back(Adj[st][i]->v);
//			DFS(Adj[st][i]->v, ed, layer + 1);
//			vis[Adj[st][i]->v] = false;
//			tmpPath.pop_back();
//		}
//	}
//}
//int change(int t) {
//	if (idToidx[t] == -1) {
//		idToidx[t] = staNum;
//		idxToid[staNum] = t;
//		++staNum;
//	}
//	return idToidx[t];
//}
//int main() {
//	scanf("%d", &N);
//	fill(idToidx, idToidx + maxn, -1);
//	fill(idxToid, idxToid + maxn, -1);
//	for (int i = 1;i <= N;++i) {
//		scanf("%d", &n);
//		vector<int> tmp;
//		for (int j = 0;j < n;++j) {
//			scanf("%d", &x);
//			int id = change(x);
//			tmp.push_back(id);
//		}
//		for (int j = 0;j < tmp.size() - 1;++j) {
//			int id1 = tmp[j], id2 = tmp[j + 1];
//			Node * node1 = new Node;
//			node1->v = id1;
//			node1->line = i;
//			Node * node2 = new Node;
//			node2->v = id2;
//			node2->line = i;
//			Adj[id1].push_back(node2);
//			Adj[id2].push_back(node1);
//		}
//	}
//	scanf("%d", &K);
//	for (int i = 0;i < K;++i) {
//		int st, ed;
//		scanf("%d %d", &st, &ed);
//		minInter = dis = INF;
//		path.clear();
//		tmpPath.clear();
//		int id1 = idToidx[st], id2 = idToidx[ed];
//		fill(vis, vis + maxn, false);
//		vis[id1] = true;
//		tmpPath.push_back(id1);
//		DFS(id1, id2, 0);
//		printf("%d\n", path.size()- 1);
//		for (int j = 0;j <path.size() - 1;++j) {
//			int line = getline(path[j], path[j + 1]);
//			printf("Take Line#%d from %04d to ", line, idxToid[path[j]]);
//			++j;
//			while (j < path.size() - 1){
//				int next = getline(path[j], path[j + 1]);
//				if(next == line) ++j;
//				else break;
//			}
//			printf("%04d.\n", idxToid[path[j--]]);
//		}
//	}
//	system("pause");
//	return 0;
//}