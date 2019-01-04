//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//const int maxn = 36;
//struct Node
//{
//	int data, layer;
//	Node * lchild, *rchild;
//};
//int N, pre[maxn], in[maxn];
//Node * create_inPre(int preL, int preR, int inL, int inR) {
//	if (preL > preR) return NULL;
//	Node * root = new Node;
//	root->data = pre[preR];
//	root->lchild = root->rchild = NULL;
//	int i;
//	for (i = inL;i <= inR;++i) {
//		if (pre[preR] == in[i]) break;
//	}
//	int left = i - inL;
//	root->lchild = create_inPre(preL, preL + left - 1, inL, i - 1);
//	root->rchild = create_inPre(preL + left, preR - 1, i + 1, inR);
//	return root;
//}
//vector<Node*> res, tmp;
//void layerOrder(Node * root) {
//	if (root == NULL) return;
//	queue<Node*> q;
//	root->layer = 0;
//	q.push(root);
//	while (!q.empty()) {
//		Node * tmp = q.front();
//		q.pop();
//		res.push_back(tmp);
//		if (tmp->lchild != NULL) {
//			tmp->lchild->layer = tmp->layer + 1;
//			q.push(tmp->lchild);
//		}
//		if (tmp->rchild != NULL) {
//			tmp->rchild->layer = tmp->layer + 1;
//			q.push(tmp->rchild);
//		}
//	}
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) scanf("%d", in + i);
//	for (int i = 0;i < N;++i) scanf("%d", pre + i);
//	Node * root = create_inPre(0, N - 1, 0, N - 1);
//	layerOrder(root);
//	printf("%d", res[0]->data);
//	for (int i = 1;i < res.size();++i) {
//		if (res[i]->layer == res[i - 1]->layer) tmp.push_back(res[i]);
//		else {
//			if (tmp.size() > 0) {
//				if (tmp[0]->layer % 2 == 0) reverse(tmp.begin(), tmp.end());
//				for (int j = 0;j < tmp.size();++j) printf(" %d", tmp[j]->data);
//			}
//			tmp.clear();
//			tmp.push_back(res[i]);
//		}
//	}
//	if (tmp.size() > 0) {
//		if (tmp[0]->layer % 2 == 0) reverse(tmp.begin(), tmp.end());
//		for (int j = 0;j < tmp.size();++j) printf(" %d", tmp[j]->data);
//	}
//	system("pause");
//	return 0;
//}