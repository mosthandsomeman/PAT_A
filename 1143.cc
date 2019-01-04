//#include<cstdio>
//#include<cstdlib>
//#include<map>
//#include<queue>
//using namespace std;
//const int maxn = 10010;
//int M, N, u, v;
//int preOrder[maxn];
//bool isU, isV;
//struct Node
//{
//	int data, layer;
//	Node * lchild, * rchild , * parent;
//};
//map<int, Node*> mmap;
//bool isFound(int x) {
//	if (mmap.find(x) != mmap.end()) return true;
//	else return false;
//}
//Node * create_pre(int preL, int preR) {
//	if (preL > preR) return NULL;
//	Node * root = new Node;
//	root->data = preOrder[preL];
//	mmap[root->data] = root;
//	int i;
//	for (i = preL + 1;i <= preR;++i) {
//		if (preOrder[i] >= preOrder[preL]) {
//			break;
//		}
//	}
//	root->lchild = create_pre(preL + 1, i - 1);
//	root->rchild = create_pre(i, preR);
//	if (root->lchild != NULL) root->lchild->parent = root;
//	if (root->rchild != NULL) root->rchild->parent = root;
//	return root;
//}
//void levelOrder(Node * root) {
//	queue<Node*> q;
//	q.push(root);
//	root->layer = 1;
//	while (!q.empty()) {
//		Node * tmp = q.front();
//		q.pop();
//		if (tmp->lchild != NULL) {
//			tmp->lchild->layer = tmp->layer + 1;
//			q.push(tmp->lchild);
//		}
//		if (tmp->rchild != NULL) {
//			tmp->rchild->layer = tmp->layer + 1;
//			q.push(tmp->rchild);
//		}
//	}
//}
//void findAncester(int u, int v) {
//	Node * fau = mmap[u], *fav = mmap[v];
//	if(fau->layer < fav->layer)
//		while (fau->layer < fav->layer) fav = fav->parent;
//	if (fau->layer > fav->layer)
//		while (fau->layer > fav->layer) fau = fau->parent;
//	while (fau->data != fav->data) {
//		fau = fau->parent;
//		fav = fav->parent;
//	}
//	if (fau->data == fav->data) {
//		if (fau->data != u && fau->data != v) {
//			printf("LCA of %d and %d is %d.\n", u, v, fau->data);
//		}
//		else {
//			if(fau->data == u) printf("%d is an ancestor of %d.\n", u, v);
//			else if(fav->data == v) printf("%d is an ancestor of %d.\n", v, u);
//		}
//	}
//}
//int main() {
//	scanf("%d %d", &M, &N);
//	for (int i = 0;i < N;++i) scanf("%d", preOrder + i);
//	Node * root = create_pre(0, N - 1);
//	root->parent = root;
//	levelOrder(root);
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d", &u, &v);
//		isU = isFound(u);
//		isV = isFound(v);
//		if (!isU && !isV) printf("ERROR: %d and %d are not found.\n", u, v);
//		else if (!isU && isV) printf("ERROR: %d is not found.\n", u);
//		else if (isU && !isV) printf("ERROR: %d is not found.\n", v);
//		else {
//			findAncester(u, v);
//		}
//	}
//	system("pause");
//	return 0;
//}