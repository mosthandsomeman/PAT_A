//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N, g1, g2, c, cnt = 0;
//struct Node
//{
//	char name[12], ID[12];
//	int score;
//};
//vector<Node*> vec;
//bool cmp(Node*& a, Node *& b) { return a->score > b->score; }
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		Node * node = new Node;
//		scanf("%s %s %d", node->name, node->ID, &node->score);
//		vec.push_back(node);
//	}
//	scanf("%d %d", &g1, &g2);
//	sort(vec.begin(), vec.end(), cmp);
//	for (int i = 0;i < vec.size();++i) {
//		if (vec[i]->score >= g1 && vec[i]->score <= g2) {
//			printf("%s %s\n", vec[i]->name, vec[i]->ID);
//			++cnt;
//		}
//	}
//	if (cnt == 0) printf("NONE\n");
//	system("pause");
//	return 0;
//}