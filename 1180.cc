//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N, M, K, a;
//int quota[110] = { 0 };
//struct Node
//{
//	int numb, GE, GI;
//	vector<int> choice;
//	double ave;
//	bool isAdmit;
//};
//vector<Node*> vec, temp;
//vector<int> admit[110];
//bool cmp(Node*& a, Node*&b) {
//	if (a->ave != b->ave) return a->ave > b->ave;
//	else if (a->GE != b->GE) return a->GE > b->GE;
//	else return a->numb < b->numb;
//}
//void setValue() {
//	for (int i = 0;i < K;++i) {
//		vector<Node*> cnt[110];
//		bool flag = false;
//		for (int j = 0;j < temp.size();++j) {
//			if (!temp[j]->isAdmit) {
//				cnt[temp[j]->choice[i]].push_back(temp[j]);
//				flag = true;
//			}
//		}
//		if (!flag) return;
//		for (int j = 0;j < M;++j) {
//			if (cnt[j].size() != 0) {
//				if (admit[j].size() < quota[j]) {
//					for (int t = 0;t < cnt[j].size();++t) {
//						admit[j].push_back(cnt[j][t]->numb);
//						cnt[j][t]->isAdmit = true;
//					}
//				}
//			}
//		}
//	}
//}
//int main() {
//	scanf("%d %d %d", &N, &M, &K);
//	for (int i = 0;i < M;++i) scanf("%d", quota + i);
//	for (int i = 0;i < N;++i) {
//		Node * node = new Node;
//		node->numb = i;
//		scanf("%d %d", &node->GE, &node->GI);
//		for (int j = 0;j < K;++j) {
//			scanf("%d", &a);
//			node->choice.push_back(a);
//		}
//		node->ave = node->GE + node->GI;
//		node->isAdmit = false;
//		vec.push_back(node);
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	for (int i = 0, j = 0;i < vec.size();++i) {
//		j = i + 1;
//		temp.clear();
//		temp.push_back(vec[i]);
//		while (j < vec.size() && vec[j]->ave == vec[i]->ave && vec[j]->GE == vec[i]->GE) {
//			temp.push_back(vec[j]);
//			++j;
//		}
//		setValue();
//		i = j - 1;
//	}
//	for (int i = 0;i < M;++i) {
//		if (admit[i].size() == 0) printf("\n");
//		else {
//			sort(admit[i].begin(), admit[i].end());
//			for (int j = 0;j < admit[i].size();++j) {
//				printf("%d", admit[i][j]);
//				if (j < admit[i].size() - 1) printf(" ");
//				else printf("\n");
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}