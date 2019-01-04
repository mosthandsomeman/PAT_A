//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//struct node
//{
//	int v, height;
//	node * lchild, *rchild;
//};
//
//node * newNode(int x) {
//	node * Node = new node;
//	Node->v = x;
//	Node->height = 1;
//	Node->lchild = Node->rchild = NULL;
//	return Node;
//}
//
//int getHeight(node * Node) {
//	if (Node == NULL) return 0;
//	return Node->height;
//}
//
//int getBalanceFactor(node * Node) {
//	return getHeight(Node->lchild) - getHeight(Node->rchild);
//}
//
//void upDateHeight(node * root) {
//	root->height = max(getHeight(root->lchild), getHeight(root->rchild)) + 1;
//}
//
//void L(node *& root) {
//	node * temp = root->rchild;
//	root->rchild = temp->lchild;
//	temp->lchild = root;
//	upDateHeight(root);
//	upDateHeight(temp);
//	root = temp;
//}
//
//void R(node *& root) {
//	node * temp = root->lchild;
//	root->lchild = temp->rchild;
//	temp->rchild = root;
//	upDateHeight(root);
//	upDateHeight(temp);
//	root = temp;
//}
//
//void insert_AVL(node *& root, int x) {
//	if (root == NULL) {
//		root = newNode(x);
//		return;
//	}
//	if (x < root->v) {
//		insert_AVL(root->lchild, x);
//		upDateHeight(root);
//		if (getBalanceFactor(root) == 2) {
//			if (getBalanceFactor(root->lchild) == 1) {
//				R(root);
//			}
//			else if (getBalanceFactor(root->lchild) == -1) {
//				L(root->lchild);
//				R(root);
//			}
//		}
//	}
//	else {
//		insert_AVL(root->rchild, x);
//		upDateHeight(root);
//		if (getBalanceFactor(root) == -2) {
//			if (getBalanceFactor(root->rchild) == 1) {
//				R(root->rchild);
//				L(root);
//			}
//			else if (getBalanceFactor(root->rchild) == -1) {
//				L(root);
//			}
//		}
//	}
//}
//
//int main() {
//	int n, c;
//	node * root = NULL;
//	scanf("%d", &n);
//	for (int i = 0;i < n;++i) {
//		scanf("%d", &c);
//		insert_AVL(root, c);
//	}
//	printf("%d\n", root->v);
//	system("pause");
//	return 0;
//}