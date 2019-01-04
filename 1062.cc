//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int n, l, h;
//struct Node
//{
//	int id, vir, tal, total;
//};
//vector<Node> vec[4];
//
//bool cmp(Node & a, Node & b) {
//	if (a.total != b.total) return a.total > b.total;
//	else if (a.vir != b.vir) return a.vir > b.vir;
//	else return a.id < b.id;
//}
//
//int main() {
//	int id, v, t, ant = 0;
//	scanf("%d %d %d", &n, &l, &h);
//	for (int i = 0;i < n;++i) {
//		scanf("%d %d %d", &id, &v, &t);
//		if (v >= l && t >= l) {
//			Node node;
//			node.id = id;
//			node.vir = v;
//			node.tal = t;
//			node.total = v + t;
//			if (v >= h && t >= h) {
//				vec[0].push_back(node);
//			}
//			else if (v >= h && t < h) {
//				vec[1].push_back(node);
//			}
//			else if (v < h && t < h && v >= t) {
//				vec[2].push_back(node);
//			}
//			else {
//				vec[3].push_back(node);
//			}
//			++ant;
//		}
//	}
//	for (int i = 0;i < 4;++i) {
//		sort(vec[i].begin(), vec[i].end(), cmp);
//	}
//	
//	printf("%d\n", ant);
//	for (int i = 0;i < 4;++i) {
//		if (vec[i].size() > 0) {
//			for (int j = 0;j < vec[i].size();++j) {
//				printf("%d %d %d\n", vec[i][j].id, vec[i][j].vir, vec[i][j].tal);
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}