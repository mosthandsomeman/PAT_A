//#include<cstdio>
//#include<cstdlib>
//#include<queue>
//#include<algorithm>
//using namespace std;
//int M, N, L, T, cnt = 0;
//int arr[1300][130][61] = { 0 };
//bool vis[1300][130][61] = { false };
//int X[6] = { 1, 0, 0, -1, 0, 0 };
//int Y[6] = { 0, 1, 0, 0, -1, 0 };
//int Z[6] = { 0, 0, 1, 0, 0, -1 };
//struct Node
//{
//	int x, y, z;
//};
//bool judge(int x, int y, int z) {
//	if (x < 0 || x >= M || y < 0 || y >= N || z < 0 || z >= L) return false;
//	if (arr[x][y][z] == 0 || vis[x][y][z]) return false;
//	return true;
//}
//int BFS(int x, int y, int z) {
//	queue<Node*> q;
//	Node * node = new Node;
//	node->x = x, node->y = y, node->z = z;
//	q.push(node);
//	vis[x][y][z] = true;
//	int num = 0;
//	while (!q.empty()) {
//		Node * tmp = q.front();
//		q.pop();
//		++num;
//		for (int i = 0;i < 6;++i) {
//			int tx = tmp->x + X[i];
//			int ty = tmp->y + Y[i];
//			int tz = tmp->z + Z[i];
//			if (judge(tx, ty, tz)) {
//				Node * temp = new Node;
//				temp->x = tx, temp->y = ty, temp->z = tz;
//				q.push(temp);
//				vis[tx][ty][tz] = true;
//			}
//		}
//	}
//	if (num >= T) return num;
//	else return 0;
//}
//int main() {
//	scanf("%d %d %d %d", &M, &N, &L, &T);
//	for (int i = 0;i < L;++i) {
//		for (int j = 0;j < M;++j) {
//			for (int k = 0;k < N;++k)
//				scanf("%d", &arr[j][k][i]);
//		}
//	}
//	for (int i = 0;i < L;++i) {
//		for (int j = 0;j < M;++j) {
//			for (int k = 0;k < N;++k) {
//				if (!vis[j][k][i] && arr[j][k][i] == 1) {
//					cnt += BFS(j, k, i);
//				}
//			}
//		}
//	}
//	printf("%d\n", cnt);
//	system("pause");
//	return 0;
//}