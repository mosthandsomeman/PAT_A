//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<iostream>
//#include<vector>
//#include<queue>
//using namespace std;
//struct Node
//{
//	int data, left, right;
//	Node * lchild, *rchild;
//};
//vector<Node*> vec, res;
//int N, a, b;
//bool idx[12] = { false };
//string str;
//void layerOrder(Node * root) {
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty()) {
//		Node * tmp = q.front();
//		q.pop();
//		res.push_back(tmp);
//		if (tmp->left != -1) {
//			tmp->lchild = vec[tmp->left];
//			q.push(tmp->lchild);
//		}
//		if (tmp->right != -1) {
//			tmp->rchild = vec[tmp->right];
//			q.push(tmp->rchild);
//		}
//	}
//}
//void inOrder(Node * root) {
//	if (root == NULL) return;
//	inOrder(root->lchild);
//	res.push_back(root);
//	inOrder(root->rchild);
//}
//void shuchu() {
//	for (int i = 0;i < res.size();++i) {
//		printf("%d", res[i]->data);
//		if (i < res.size() - 1) printf(" ");
//		else printf("\n");
//	}
//}
//int main() {
//	cin >> N;
//	getchar();
//	for (int i = 0;i < N;++i) {
//		getline(cin, str);
//		Node * node = new Node;
//		node->data = i;
//		node->lchild = node->rchild = NULL;
//		node->left = node->right = -1;
//		if (str[0] != '-' && str[str.size() - 1] == '-') {
//			node->right = stoi(str.substr(0, str.size() - 2));
//			idx[node->right] = true;
//		}
//		else if (str[0] == '-' && str[2] != '-') {
//			node->left = stoi(str.substr(2));
//			idx[node->left] = true;
//		}
//		else if (str[0] != '-' && str[str.size() - 1] != '-') {
//			sscanf(str.c_str(), "%d %d", &a, &b);
//			node->right = a;
//			node->left = b;
//			idx[node->left] = true;
//			idx[node->right] = true;
//		}
//		vec.push_back(node);
//	}
//	int root = -1;
//	for (int i = 0;i < N;++i) {
//		if (!idx[i]) root = i;
//	}
//	layerOrder(vec[root]);
//	shuchu();
//	res.clear();
//	inOrder(vec[root]);
//	shuchu();
//	system("pause");
//	return 0;
//}