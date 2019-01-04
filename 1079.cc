//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<queue>
//#include<map>
//#include<algorithm>
//using namespace std;
//const int maxn = 100010;
//typedef long long LL;
//int n, k, id;
//LL shuliang;
//double price, rate, sum = 0;
//bool inq[maxn] = { false };
//struct Node{
//	int v;
//	double price;
//	Node(int _v) :v(_v){}
//};
//vector<Node> vec[maxn];
//map<int, LL> idx;
//void BFS() {
//	fill(inq, inq + maxn, false);
//	queue<Node> q;
//	Node st(0);
//	st.price = price;
//	q.push(st);
//	inq[st.v] = true;
//	while (!q.empty()) {
//		Node top = q.front();
//		q.pop();
//		int u = top.v;
//		if (idx.find(u) != idx.end()) {
//			sum += top.price * idx[u];
//		}
//		for (int i = 0;i < vec[u].size();++i) {
//			Node next = vec[u][i];
//			next.price = top.price * (1 + rate / 100);
//			if (inq[next.v] == false) {
//				q.push(next);
//				inq[next.v] = true;
//			}
//		}
//	}
//}
//void DFS(int s, double price) {
//	inq[s] = true;
//	if (vec[s].size() == 0) {
//		sum += price * idx[s];
//	}
//	else {
//		for (int i = 0;i < vec[s].size();++i) {
//			if (inq[vec[s][i].v] == false) {
//				DFS(vec[s][i].v, price * (1 + rate / 100));
//			}
//		}
//	}
//}
//int main() {
//	scanf("%d %lf %lf", &n, &price, &rate);
//	for (int i = 0;i < n;++i) {
//		scanf("%d", &k);
//		if (k != 0) {
//			for (int j = 0;j < k;++j) {
//				scanf("%d", &id);
//				vec[i].push_back(Node(id));
//			}
//		}
//		else {
//			scanf("%lld", &shuliang);
//			idx[i] = shuliang;
//		}
//	}
//	//BFS();
//	DFS(0, price);
//	printf("%.1f\n", sum);
//	system("pause");
//	return 0;
//}