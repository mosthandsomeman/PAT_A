//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<vector>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//struct Node
//{
//	char c;
//	int tag;
//};
//bool cmp(Node *& a, Node*& b) {
//	return a->tag < b->tag;
//}
//vector<Node*> vec;
//string str[2], res;
//int idx[2][128] = { 0 }, xiabiao[128] = { 0 };
//void change() {
//	for (int i = 0;i < 2;++i) {
//		for (int j = 0;j < str[i].size();++j) {
//			if (str[i][j] >= 'a' && str[i][j] <= 'z') str[i][j] -= 32;
//		}
//	}
//}
//int main() {
//	fill(xiabiao, xiabiao + 128, -1);
//	cin >> str[0] >> str[1];
//	change();
//	for (int i = 0;i < 2;++i) {
//		for (int j = 0;j < str[i].size();++j) {
//			idx[i][str[i][j]]++;
//			if (i == 0 && xiabiao[str[i][j]] == -1) xiabiao[str[i][j]] = j;
//		}
//	}
//	for (int i = 0;i < 128;++i) {
//		if (idx[0][i] != idx[1][i]) {
//			Node * node = new Node;
//			node->c = i;
//			node->tag = xiabiao[i];
//			vec.push_back(node);
//		}
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	for (int i = 0;i < vec.size();++i) cout << vec[i]->c;
//	cout << endl;
//	system("pause");
//	return 0;
//}