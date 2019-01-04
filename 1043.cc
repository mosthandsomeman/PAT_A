//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//using namespace std;
//
//int n, c;
//vector<int> origin, pre, preM, post, postM;
//struct node
//{
//	int data;
//	node * lchild, *rchild;
//};
//
//void insert(node *& root, int x) {
//	if (root == NULL) {
//		root = new node;
//		root->data = x;
//		root->lchild = root->rchild = NULL;
//		return;
//	}
//	if (root->data > x) {
//		insert(root->lchild, x);
//	}
//	else {
//		insert(root->rchild, x);
//	}
//}
//
//void preOrder(node * root, vector<int> & v) {
//	if (root == NULL) return;
//	v.push_back(root->data);
//	preOrder(root->lchild, v);
//	preOrder(root->rchild, v);
//}
//
//void preOrderM(node * root, vector<int> & v) {
//	if (root == NULL) return;
//	v.push_back(root->data);
//	preOrderM(root->rchild, v);
//	preOrderM(root->lchild, v);
//}
//
//void postOrder(node * root, vector<int> & v) {
//	if (root == NULL) return;
//	postOrder(root->lchild, v);
//	postOrder(root->rchild, v);
//	v.push_back(root->data);
//}
//
//void postOrderM(node * root, vector<int> & v) {
//	if (root == NULL) return;
//	postOrderM(root->rchild, v);
//	postOrderM(root->lchild, v);
//	v.push_back(root->data);
//}
//
//int main() {
//	scanf("%d", &n);
//	node * root = NULL;
//	for (int i = 0;i < n;++i) {
//		scanf("%d", &c);
//		origin.push_back(c);
//		insert(root, c);
//	}
//
//	preOrder(root, pre);
//	preOrderM(root, preM);
//	postOrder(root, post);
//	postOrderM(root, postM);
//	if (origin == pre) {
//		printf("YES\n");
//		for (int i = 0;i < post.size();++i) {
//			printf("%d", post[i]);
//			if (i < post.size() - 1) printf(" ");
//		}
//	}
//	else if (origin == preM) {
//		printf("YES\n");
//		for (int i = 0;i < postM.size();++i) {
//			printf("%d", postM[i]);
//			if (i < postM.size() - 1) printf(" ");
//		}
//	}
//	else {
//		printf("NO\n");
//	}
//
//	system("pause");
//	return 0;
//}