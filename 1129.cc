//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include<map>
//using namespace std;
//const int maxn = 50010;
//int N, K, c;
//bool inV[maxn] = { false };
//struct Node
//{
//	int data, ct;
//};
//vector<Node*> vec;
//map<int, Node*> idx;
//int arr[maxn] = { 0 };
//bool cmp(Node *& a, Node*&b) {
//	if (a->ct != b->ct) return a->ct > b->ct;
//	else return a->data < b->data;
//}
//int main() {
//	scanf("%d %d", &N, &K);
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &c);
//		if (i == 0) {
//			Node * node = new Node;
//			node->data = c;
//			node->ct = 1;
//			vec.push_back(node);
//			idx[c] = node;
//			inV[c] = true;
//			arr[c]++;
//		}
//		else {
//			printf("%d:", c);
//			for (int i = 0;i < vec.size();++i) printf(" %d", vec[i]->data);
//			printf("\n");
//			if (inV[c] == true) {
//				++(idx[c]->ct);
//				sort(vec.begin(), vec.end(), cmp);
//			}
//			else {
//				arr[c]++;
//				Node * node = new Node;
//				node->data = c;
//				node->ct = arr[c];
//				vec.push_back(node);
//				idx[c] = node;
//				inV[c] = true;
//				sort(vec.begin(), vec.end(), cmp);
//				if (vec.size() > K) {
//					inV[vec[vec.size() - 1]->data] = false;
//					vec.pop_back();
//				}
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}