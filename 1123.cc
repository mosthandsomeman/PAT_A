//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include<queue>
//using namespace std;
//int N, c;
//struct Node
//{
//	int data, height;
//	Node * lchild, *rchild;
//};
//vector<Node*> res;
//Node * newNode(int x) {
//	Node * node = new Node;
//	node->data = x;
//	node->height = 1;
//	node->lchild = node->rchild = NULL;
//	return node;
//}
//int getHeight(Node * root) {
//	if (root == NULL) return 0;
//	else return root->height;
//}
//int getBalance(Node * root) {
//	return getHeight(root->lchild) - getHeight(root->rchild);
//}
//void update(Node *& root) {
//	root->height = max(getHeight(root->lchild), getHeight(root->rchild)) + 1;
//}
//void L(Node *& root) {
//	Node * tmp = root->rchild;
//	root->rchild = tmp->lchild;
//	tmp->lchild = root;
//	update(root);
//	update(tmp);
//	root = tmp;
//}
//void R(Node *& root) {
//	Node * tmp = root->lchild;
//	root->lchild = tmp->rchild;
//	tmp->rchild = root;
//	update(root);
//	update(tmp);
//	root = tmp;
//}
//void insert_AVL(Node *& root, int x) {
//	if (root == NULL) {
//		root = newNode(x);
//		return;
//	}
//	if (x < root->data) {
//		insert_AVL(root->lchild, x);
//		update(root);
//		if (getBalance(root) == 2) {
//			if (getBalance(root->lchild) == 1) {
//				R(root);
//			}
//			else if (getBalance(root->lchild) == -1) {
//				L(root->lchild);
//				R(root);
//			}
//		}
//	}
//	else {
//		insert_AVL(root->rchild, x);
//		update(root);
//		if (getBalance(root) == -2) {
//			if (getBalance(root->rchild) == -1) {
//				L(root);
//			}
//			else if (getBalance(root->rchild) == 1) {
//				R(root->rchild);
//				L(root);
//			}
//		}
//	}
//}
//bool flag = true, after = false;
//void layerOrder(Node* root) {
//	if (root == NULL) return;
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty()) {
//		Node * tmp = q.front();
//		q.pop();
//		res.push_back(tmp);
//		if (tmp->lchild != NULL) {
//			if (after) flag = false;
//			q.push(tmp->lchild);
//		}
//		else {
//			after = true;
//		}
//		if (tmp->rchild != NULL) {
//			if (after) flag = false;
//			q.push(tmp->rchild);
//		}
//		else {
//			after = true;
//		}
//	}
//}
//int main() {
//	scanf("%d", &N);
//	Node * root = NULL;
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &c);
//		insert_AVL(root, c);
//	}
//	layerOrder(root);
//	for (int i = 0;i < res.size();++i) {
//		printf("%d", res[i]->data);
//		if (i < res.size() - 1) printf(" ");
//		else printf("\n");
//	}
//	if (flag) printf("YES\n");
//	else printf("NO\n");
//	system("pause");
//	return 0;
//}