//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<iostream>
//#include<string>
//#include<stack>
//using namespace std;
//int N, c;
//string str;
//vector<int> pre, in, post;
//stack<int> st;
//struct Node
//{
//	int dada;
//	Node * lchild, * rchild;
//};
//Node * create_preIn(int preL, int preR, int inL, int inR) {
//	if (preL > preR) return NULL;
//	Node * root = new Node;
//	root->dada = pre[preL];
//	root->lchild = root->rchild = NULL;
//	int i;
//	for (i = inL;i <= inR;++i) {
//		if (in[i] == pre[preL]) break;
//	}
//	int num = i - inL;
//	root->lchild = create_preIn(preL + 1, preL + num, inL, i - 1);
//	root->rchild = create_preIn(preL + num + 1, preR, i + 1, inR);
//	return root;
//}
//void postOrder(Node * root) {
//	if (root == NULL) return;
//	postOrder(root->lchild);
//	postOrder(root->rchild);
//	post.push_back(root->dada);
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < 2 * N;++i) {
//		cin >> str;
//		if (str == "Push") {
//			cin >> c;
//			st.push(c);
//			pre.push_back(c);
//		}
//		else {
//			in.push_back(st.top());
//			st.pop();
//		}
//	}
//	Node * root = create_preIn(0, N - 1, 0, N - 1);
//	postOrder(root);
//	for (int i = 0;i < post.size();++i) {
//		printf("%d", post[i]);
//		if (i < post.size() - 1) printf(" ");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}