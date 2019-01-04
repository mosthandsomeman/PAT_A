//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<vector>
//#include<queue>
//using namespace std;
//int N, x, y, R;
//bool findRoot[24] = { false };
//struct Node
//{
//	char data[12];
//	Node * lchild, * rchild;
//	int left, right;
//};
//vector<Node*> vec;
//Node * createTree(int st) {
//	Node * root = vec[st - 1];
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty()) {
//		Node * top = q.front();
//		q.pop();
//		x = top->left;
//		y = top->right;
//		if (x > 0) {
//			top->lchild = vec[x - 1];
//			q.push(top->lchild);
//		}
//		if (y > 0) {
//			top->rchild = vec[y - 1];
//			q.push(top->rchild);
//		}
//	}
//
//	return root;
//}
//bool isLeaf(Node * root) {
//	if (root == NULL) return true;
//	if (root->lchild != NULL || root->rchild != NULL) return false;
//	else return true;
//}
//void inOrder(Node * root) {
//	if (root == NULL) return;
//	bool leafL = isLeaf(root->lchild);
//	bool leafR = isLeaf(root->rchild);
//	if (!leafL) printf("(");
//	inOrder(root->lchild);
//	if (!leafL) printf(")");
//	printf("%s", root->data);
//	if (!leafR) printf("(");
//	inOrder(root->rchild);
//	if (!leafR) printf(")");
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 1;i <= N;++i) {
//		Node * node = new Node;
//		memset(node, 0, sizeof(Node));
//		scanf("%s %d %d", node->data, &node->left, &node->right);
//		if (node->left > 0) findRoot[node->left] = true;
//		if (node->right > 0) findRoot[node->right] = true;
//		vec.push_back(node);
//	}
//	for (int i = 1;i <= N;++i) {
//		if (!findRoot[i]) { R = i; break; }
//	}
//	Node * root = createTree(R);
//	inOrder(root);
//	system("pause");
//	return 0;
//}