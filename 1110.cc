//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<string>
//#include<iostream>
//#include<queue>
//#include<map>
//using namespace std;
//int N, c, d;
//string str;
//bool idx[24] = { false };
//struct Node
//{
//	int data, layer, left, right;
//	Node * lchild, * rchild;
//};
//vector<Node*> vec, res;
//map<int, Node*> mmap;
//bool isLeaf(Node * root) {
//	if (root == NULL) return false;
//	if (root->lchild == NULL && root->rchild == NULL) return true;
//	return false;
//}
//bool flag = true;
//void layerOrder(int root) {
//	queue<Node*> q;
//	q.push(mmap[root]);
//	mmap[root]->layer = 0;
//	while (!q.empty()) {
//		Node * tmp = q.front();
//		q.pop();
//		res.push_back(tmp);
//		if (tmp->left != -1) {
//			tmp->lchild = mmap[tmp->left];
//			q.push(tmp->lchild);
//			tmp->lchild->layer = tmp->layer + 1;
//		}
//		if (tmp->right != -1) {
//			tmp->rchild = mmap[tmp->right];
//			q.push(tmp->rchild);
//			tmp->rchild->layer = tmp->layer + 1;
//		}
//		if (tmp->lchild == NULL && tmp->rchild != NULL) flag = false;
// 	}
//}
//void judge() {
//	int i = 0;
//	for (i = 0;i < res.size();++i) {
//		if (isLeaf(res[i])) break;
//	}
//	for (;i < res.size();++i) {
//		if (!isLeaf(res[i])) {
//			flag = false;
//			return;
//		}
//	}
//}
//int main() {
//	scanf("%d", &N);
//	getchar();
//	for (int i = 0;i < N;++i) {
//		getline(cin, str);
//		Node * node = new Node;
//		node->data = i;
//		node->lchild = node->rchild = NULL;
//		node->left = node->right = -1;
//		vec.push_back(node);
//		mmap[i] = node;
//		if (str[0] == '-' && str[2] != '-') {
//			node->right = stoi(str.substr(2));
//			idx[node->right] = true;
//		}
//		else if (str[0] != '-' && str[str.size() - 1] == '-') {
//			node->left = stoi(str.substr(0, str.size() - 2));
//			idx[node->left] = true;
//		}
//		else if (str[0] != '-' && str[str.size() - 1] != '-') {
//			sscanf(str.c_str(), "%d %d", &c, &d);
//			node->left = c;
//			node->right = d;
//			idx[c] = true;
//			idx[d] = true;
//		}
//	}
//	int root = -1;
//	for (int i = 0;i < N;++i) {
//		if (!idx[i]) { root = i; break; }
//	}
//	layerOrder(root);
//	judge();
//	if (flag) printf("YES %d\n", res[res.size() - 1]->data);
//	else printf("NO %d\n", root);
//	system("pause");
//	return 0;
//}