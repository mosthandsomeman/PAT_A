//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<cstring>
//#include<algorithm>
//#include<map>
//#include<iostream>
//#include<string>
//#include<cmath>
//using namespace std;
//int P, M, N, score;
//struct Node
//{
//	char id[24];
//	int P, Gm, Gf, G;
//};
//vector<Node*> vec;
//map<string, Node*> mmap;
//string id;
//bool cmp(Node *& a, Node *&b) {
//	return a->G != b->G ? a->G > b->G:strcmp(a->id, b->id) < 0;
//}
//int main() {
//	scanf("%d %d %d", &P, &M, &N);
//	for (int i = 0;i < P;++i) {
//		cin >> id >> score;
//		if (score >= 200) {
//			Node * node = new Node;
//			node->Gf = node->Gm = node->G = -1;
//			node->P = score;
//			strcpy(node->id, id.c_str());
//			vec.push_back(node);
//			mmap[id] = node;
//		}
//	}
//	for (int i = 0;i < M;++i) {
//		cin >> id >> score;
//		if (mmap.find(id) != mmap.end()) {
//			mmap[id]->Gm = score;
//		}
//	}
//	for (int i = 0;i < N;++i) {
//		cin >> id >> score;
//		if (mmap.find(id) != mmap.end()) {
//			mmap[id]->Gf = score;
//		}
//	}
//	for (int i = 0;i < vec.size();++i) {
//		if (vec[i]->Gm > vec[i]->Gf) {
//			vec[i]->G = round(vec[i]->Gm * 0.4 + vec[i]->Gf * 0.6);
//		}
//		else {
//			vec[i]->G = vec[i]->Gf;
//		}
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	for (int i = 0;i < vec.size();++i) {
//		if (vec[i]->G >= 60) {
//			printf("%s %d %d %d %d\n", vec[i]->id, vec[i]->P, vec[i]->Gm, vec[i]->Gf, vec[i]->G);
//		}
//	}
//	system("pause");
//	return  0;
//}