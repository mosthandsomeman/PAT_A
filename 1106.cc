//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<queue>
//#include<cmath>
//using namespace std;
//int N, K, c, cnt = 0;
//double P, T, res = 0;
//struct Node
//{
//	int data, layer, tag;
//	vector<int> child;
//};
//vector<Node*> vec, temp;
//void layerOrder(int root) {
//	queue<Node*> q;
//	q.push(vec[root]);
//	vec[root]->layer = 0;
//	while (!q.empty()) {
//		Node * tmp = q.front();
//		q.pop();
//		temp.push_back(tmp);
//		for (int i = 0;i < tmp->child.size();++i) {
//			q.push(vec[tmp->child[i]]);
//			vec[tmp->child[i]]->layer = tmp->layer + 1;
//		}
//	}
//}
//int main() {
//	scanf("%d %lf %lf", &N, &P, &T);
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &K);
//		Node * node = new Node;
//		node->data = i;
//		for (int j = 0;j < K;++j) {
//			scanf("%d", &c);
//			node->child.push_back(c);
//		}
//		if (K == 0) node->tag = 1;
//		vec.push_back(node);
//	}
//	layerOrder(0);
//	for (int i = 0;i < temp.size();++i) {
//		if (temp[i]->tag == 1) {
//			res = P * pow((100 + T) / 100, temp[i]->layer);
//			for (int j = i;j < temp.size();++j) {
//				if (temp[j]->layer == temp[i]->layer && temp[j]->tag == 1)
//					++cnt;
//			}
//			break;
//		}
//	}
//	printf("%.4f %d\n", res, cnt);
//	system("pause");
//	return 0;
//}