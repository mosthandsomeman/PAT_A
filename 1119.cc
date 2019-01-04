//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//using namespace std;
//const int maxn = 32;
//int N, c, flag = true;
//struct Node
//{
//	int data;
//	Node * lchild, *rchild;
//};
//int pre[maxn], post[maxn];
//vector<int> in;
//vector<Node*> vec;
//
//Node * create_prePost(int preL, int preR, int postL, int postR) {
//	if (preL > preR) return NULL;
//	Node * root = new Node;
//	root->data = pre[preL];
//	vec.push_back(root);
//	root->lchild = root->rchild = NULL; // 确定根节点
//	if (preL == preR) return root;
//	if (pre[preL + 1] == post[postR - 1]) {
//		flag = false; //只有一个子节点  放在左子树
//		root->lchild = create_prePost(preL + 1, preR, postL, postR - 1);
//	}
//	else {//有两个子节点
//		int i;
//		for (i = preL + 1;i <= preR;++i) {
//			if (pre[i] == post[postR - 1]) break;
//		}
//		int left = i - preL - 1;
//		root->lchild = create_prePost(preL + 1, i - 1, postL, postL + left - 1);
//		root->rchild = create_prePost(i, preR, postL + left, postR - 1);
//	}
//	return root;
//}
//void inOrder(Node * root) {
//	if (root == NULL) return;
//	inOrder(root->lchild);
//	in.push_back(root->data);
//	inOrder(root->rchild);
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) scanf("%d", pre + i);
//	for (int i = 0;i < N;++i) scanf("%d", post + i);
//	Node * root = create_prePost(0, N - 1, 0, N - 1);
//	inOrder(root);
//	if (flag) printf("Yes\n");
//	else printf("No\n");
//	for (int i = 0;i < in.size();++i) {
//		printf("%d", in[i]);
//		if (i < in.size() - 1) printf(" ");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}