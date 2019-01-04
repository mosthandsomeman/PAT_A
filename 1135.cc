//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<vector>
//#include<set>
//using namespace std;
//int N, K, x;
//bool flag = true;
//set<int> sset;
//struct Node
//{
//	int tag, data;
//	Node * lchild, *rchild;
//};
//void insert(Node *& root, int t) {
//	if (root == NULL) {
//		root = new Node;
//		root->data = t > 0 ? t : -t;
//		root->tag = t > 0 ? 1 : -1;
//		root->lchild = root->rchild = NULL;
//		return;
//	}
//	int num = abs(t);
//	if (root->data > num) insert(root->lchild, t);
//	else insert(root->rchild, t);
//}
//void preOrder(Node * root) {
//	if (root == NULL) return;
//	if (root->lchild == NULL) {
//		root->lchild = new Node;
//		root->lchild->data = 0;
//		root->lchild->tag = 2;
//		root->lchild->lchild = root->lchild->rchild = NULL;
//	}
//	if (root->rchild == NULL) {
//		root->rchild = new Node;
//		root->rchild->data = 0;
//		root->rchild->tag = 2;
//		root->rchild->lchild = root->rchild->rchild = NULL;
//	}
//	if (root->tag == -1) {
//		if (root->lchild != NULL) if (root->lchild->tag == -1) flag = false;
//		if (root->rchild != NULL) if (root->rchild->tag == -1) flag = false;
//	}
//	if (root->lchild != NULL && root->lchild->tag != 2) preOrder(root->lchild);
//	if (root->rchild != NULL && root->rchild->tag != 2) preOrder(root->rchild);
//}
//void preOrder_1(Node * root, int num) {
//	if (root == NULL) return;
//	if (root->tag > 0) ++num;
//	if (root->lchild == NULL && root->rchild == NULL) {
//		sset.insert(num);
//		return;
//	}
//	if (root->lchild != NULL) preOrder_1(root->lchild, num);
//	if (root->rchild != NULL) preOrder_1(root->rchild, num);
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &K);
//		vector<int> vec;
//		for (int j = 0;j < K;++j) {
//			scanf("%d", &x);
//			vec.push_back(x);
//		}
//		flag = true;
//		sset.clear();
//		Node * root = NULL;
//		for (int j = 0;j < K;++j) insert(root, vec[j]);
//		preOrder(root);
//		if (root == NULL) printf("Yes\n");
//		else {
//			if (root->tag == -1 || !flag) printf("No\n");
//			else {
//				preOrder_1(root, 0);
//				if (sset.size() > 1) printf("No\n");
//				else if(sset.size() == 1) printf("Yes\n");
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}