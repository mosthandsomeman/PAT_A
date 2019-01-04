//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//struct  Node
//{
//	int data, left, right, lnum, rnum;
//	Node * lchild, *rchild;
//};
//int N, a, b;
//vector<Node*> vec;
//vector<int> num, res;
//void layerOrder() {
//	queue<Node*> q;
//	q.push(vec[0]);
//	while (!q.empty()) {
//		Node * tmp = q.front();
//		q.pop();
//		res.push_back(tmp->data);
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
//void setChildNum(Node * root) {
//	if (root == NULL) return;
//	setChildNum(root->lchild);
//	setChildNum(root->rchild);
//	if (root->lchild != NULL)
//		root->lnum = root->lchild->lnum + root->lchild->rnum + 1;
//	if (root->rchild != NULL)
//		root->rnum = root->rchild->lnum + root->rchild->rnum + 1;
//}
//void insert_avl(Node *& root, int L, int R) {
//	if (L > R || root == NULL) return;
//	root->data = num[L + root->lnum];
//	if (root->lchild != NULL) {
//		insert_avl(root->lchild, L, L + root->lnum - 1);
//	}
//	if (root->rchild != NULL) {
//		insert_avl(root->rchild, L + root->lnum + 1, R);
//	}
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		scanf("%d %d", &a, &b);
//		Node * node = new Node;
//		node->left = a;
//		node->right = b;
//		node->lnum = node->rnum = 0;
//		node->lchild = node->rchild = NULL;
//		vec.push_back(node);
//	}
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &a);
//		num.push_back(a);
//	}
//	sort(num.begin(), num.end());
//	layerOrder();
//	res.clear();
//	setChildNum(vec[0]);
//	insert_avl(vec[0], 0, N - 1);
//	layerOrder();
//	for (int i = 0;i < res.size();++i) {
//		printf("%d", res[i]);
//		if (i < res.size() - 1) printf(" ");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}