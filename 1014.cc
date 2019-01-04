//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<queue>
//#include<map>
//using namespace std;
//const int maxn = 21;
//const int close = 540;
//struct Node
//{
//	int begin, end, cons, id;
//};
//int N, M, K, Q;
//queue<Node*> q[maxn], wait;
//map<int, Node*> res;
//int main() {
//	scanf("%d %d %d %d", &N, &M, &K, &Q);
//	int capacity = N * M;
//	for (int i = 1;i <= K;++i) {
//		Node * node = new Node;
//		scanf("%d", &node->cons);
//		node->id = i;
//		node->begin = -1;
//		if (i <= capacity) q[(i - 1) % N].push(node);
//		else wait.push(node);
//	}
//	for (int i = 0;i < N;++i) {
//		if (!q[i].empty()) {
//			Node * tmp = q[i].front();
//			tmp->begin = 0;
//		}
//	}
//	for (int i = 0;i < close;++i) {
//		int ans = 0;
//		for (int j = 0;j < N;++j) {
//			if (q[j].empty()) continue;
//			Node * tmp = q[j].front();
//			if (tmp->begin + tmp->cons == i) { //在17:00之前可以被服务
//				tmp->end = i;
//				res[tmp->id] = tmp;
//				q[j].pop();
//				if (q[j].empty()) continue;
//				Node * next = q[j].front();
//				next->begin = i;
//			}
//			ans += q[j].size();
//		}
//		while (ans < N * M && !wait.empty()) {//队列不满且有人等待
//			int u = 0, MIN = q[0].size();
//			for (int j = 1;j < N;++j) {
//				if (q[j].size() < q[u].size()) {
//					u = j;
//					MIN = q[j].size();
//				}
//			}
//			Node * tmp = wait.front();
//			q[u].push(tmp);
//			if (q[u].size() == 1) tmp->begin = i;
//			wait.pop();
//			++ans;
//		}
//	}
//	//队列中还有开始时间小于540的节点
//	for (int j = 0;j < N;++j) {
//		while (!q[j].empty()) {
//			Node * tmp = q[j].front();
//			if (tmp->begin < close) { //在17:00之前可以被服务
//				tmp->end = tmp->begin + tmp->cons;
//				res[tmp->id] = tmp;
//				q[j].pop();
//				if (q[j].empty()) break;
//				Node * next = q[j].front();
//				next->begin = tmp->end;
//			}
//			else break;
//		}
//	}
//
//	int query;
//	for (int i = 0;i < Q;++i) {
//		scanf("%d", &query);
//		if (res.find(query) == res.end()) {
//			printf("Sorry\n");
//		}
//		else {
//			printf("%02d:%02d\n", 8 + res[query]->end / 60, res[query]->end % 60);
//		}
//	}
//	system("pause");
//	return 0;
//}