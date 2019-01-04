//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<queue>
//using namespace std;
//int N, n1 = 0, n2 = 0, a, sum = 0, maxLayer = -1;
//struct Node
//{
//	int data, layer;
//	Node * lchild, * rchild;
//};
//void insert(Node *& root, int x) {
//	if (root == NULL) {
//		root = new Node;
//		root->data = x;
//		root->lchild = root->rchild = NULL;
//		return;
//	}
//	if (x <= root->data) insert(root->lchild, x);
//	else insert(root->rchild, x);
//}
//void layerOrder(Node * root) {
//	if (root == NULL) return;
//	queue<Node*> q;
//	q.push(root);
//	root->layer = 0;
//	maxLayer = 0;
//	while (!q.empty()) {
//		Node * tmp = q.front();
//		q.pop();
//		if (tmp->layer > maxLayer) maxLayer = tmp->layer;
//		if (tmp->lchild != NULL) {
//			q.push(tmp->lchild);
//			tmp->lchild->layer = tmp->layer + 1;
//		}
//		if (tmp->rchild != NULL) {
//			q.push(tmp->rchild);
//			tmp->rchild->layer = tmp->layer + 1;
//		}
//	}
//}
//void preOrder(Node * root) {
//	if (root == NULL) return;
//	preOrder(root->lchild);
//	if (root->layer == maxLayer) n1++;
//	if (root->layer == maxLayer - 1) n2++;
//	preOrder(root->rchild);
//}
//int main() {
//	scanf("%d", &N);
//	Node * root = NULL;
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &a);
//		insert(root, a);
//	}
//	layerOrder(root);
//	preOrder(root);
//	printf("%d + %d = %d\n", n1, n2, n1 + n2);
//	system("pause");
//	return 0;
//}