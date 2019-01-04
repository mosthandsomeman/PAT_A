//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<queue>
//
//using namespace std;
//const int maxn = 100;
//int pre[maxn], in[maxn], post[maxn];
//int n;
//vector<int> result;
//
//struct node
//{
//	int data;
//	node * lchild, * rchild;
//};
//
//node * create(int postL, int postR, int inL, int inR) {
//	if (postL > postR) return NULL;
//	node * root = new node;
//	root->data = post[postR];
//	int k;
//	for (k = inL;k <= inR;++k) {
//		if (in[k] == post[postR]) {
//			break;
//		}
//	}
//	int numLeft = k - inL;
//	root->lchild = create(postL, postL + numLeft - 1, inL, inL + numLeft);
//	root->rchild = create(postL + numLeft, postR - 1, k + 1, inR);
//	return root;
//}
//
//void layerOrder(node * root) {
//	queue<node*> q;
//	q.push(root);
//	while (!q.empty()) {
//		node * now = q.front();
//		q.pop();
//		result.push_back(now->data);
//		if (now->lchild != NULL) q.push(now->lchild);
//		if (now->rchild != NULL) q.push(now->rchild);
//	}
//}
// 
//int main() {
//	scanf("%d", &n);
//	for (int i = 1;i <= n;++i) {
//		scanf("%d", post + i);
//	}
//	for (int i = 1;i <= n;++i) {
//		scanf("%d", in + i);
//	}
//	node * root = create(1, n, 1, n);
//	layerOrder(root);
//	for (int i = 0;i < n;++i) {
//		if (i < n - 1) {
//			printf("%d ", result[i]);
//		}
//		else {
//			printf("%d ", result[i]);
//		}
//	}
//
//	system("pause");
//	return 0;
//}
