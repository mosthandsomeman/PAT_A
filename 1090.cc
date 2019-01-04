//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<queue>
//#include<cmath>
//using namespace std;
//int N, K, c, cnt = 0, maxlayer = 0;
//double P, T, res = 0;
//struct Node
//{
//	int data, layer, tag;
//	vector<int> child;
//};
//vector<Node*> vec;
//vector<int> num;
//void layerOrder(Node * root) {
//	queue<Node*> q;
//	q.push(root);
//	vec[root->data]->layer = 0;
//	while (!q.empty()) {
//		Node * tmp = q.front();
//		q.pop();
//		if (tmp->layer > maxlayer) maxlayer = tmp->layer;
//		for (int i = 0;i < tmp->child.size();++i) {
//			q.push(vec[tmp->child[i]]);
//			vec[tmp->child[i]]->layer = tmp->layer + 1;
//		}
//	}
//}
//int main() {
//	Node * root = NULL;
//	scanf("%d %lf %lf", &N, &P, &T);
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &c);
//		num.push_back(c);
//		Node * node = new Node;
//		node->data = i;
//		vec.push_back(node);
//		if (c == -1) root = node;
//	}
//	for (int i = 0;i < num.size();++i) {
//		if (num[i] != -1) vec[num[i]]->child.push_back(i);
//	}
//	layerOrder(root);
//	for (int i = 0;i < vec.size();++i) {
//		if (vec[i]->layer == maxlayer) {
//			++cnt;
//		}
//	}
//	res = P * pow((100 + T) / 100, maxlayer);
//	printf("%.2f %d\n", res, cnt);
//	system("pause");
//	return 0;
//}