//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<deque>
//using namespace std;
//int N, k, c, row, num, pos = 0;
//char name[10];
//struct Node
//{
//	string name;
//	int h;
//};
//bool cmp(Node* &a, Node* &b) {
//	if (a->h != b->h) return a->h > b->h;
//	else return a->name < b->name;
//}
//vector<Node*> vec;
//int main() {
//	cin >> N >> k;
//	for (int i = 0;i < N;++i) {
//		Node * node = new Node;
//		cin >> node->name >> node->h;
//		vec.push_back(node);
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	int t = N / k;
//	num = N % k + N / k;
//	while (k > 0) {
//		deque<Node*> tmpVec;
//		int i = 0;
//		while (i < num) {
//			if (i % 2 == 1) tmpVec.push_front(vec[pos++]);
//			else tmpVec.push_back(vec[pos++]);
//			++i;
//		}
//		while (!tmpVec.empty()) {
//			cout << tmpVec.front()->name;
//			tmpVec.pop_front();
//			if (tmpVec.size() >= 1) cout << " ";
//			else cout << endl;
//		}
//		--k;
//		num = t;
//	}
//	system("pause");
//	return 0;
//}