//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<vector>
//#include<map>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//int N, M;
//struct Node
//{
//	char str[16];
//	int score, site;
//};
//struct Node2
//{
//	int site, count;
//};
//vector<Node*> vecB, vecA, vecT;
//map<int, vector<Node2> > mmap;
//int siteToidx[10010] = { 0 };
//int siteToScore[10010] = { 0 };
//int site, type, date;
//char c;
//bool cmp(Node *& a, Node * &b) {
//	if (a->score != b->score) return a->score > b->score;
//	else return	strcmp(a->str, b->str) < 0;
//}
//bool cmp1(Node2 & a, Node2 & b) {
//	if (a.count != b.count) return a.count > b.count;
//	else return a.site < b.site;
//}
//int main() {
//	scanf("%d %d", &N, &M);
//	getchar();
//	for (int i = 0;i < N;++i) {
//		Node * node = new Node;
//		char tmp1[6], tmp2[8];
//		scanf("%s %d", node->str, &node->score);
//		if (node->str[0] == 'A') vecA.push_back(node);
//		else if (node->str[0] == 'B') vecB.push_back(node);
//		else if (node->str[0] == 'T') vecT.push_back(node);
//		site = atoi(strncpy(tmp1, node->str + 1, 3));
//		date = atoi(strncpy(tmp2, node->str + 4, 6));
//		siteToidx[site]++;
//		siteToScore[site] += node->score;
//		if (mmap.find(date) == mmap.end()) {
//			vector<Node2> tmp;
//			Node2 node2;
//			node2.site = site;
//			node2.count = 1;
//			tmp.push_back(node2);
//			mmap[date] = tmp;
//		}
//		else {
//			int flag = 0;
//			for (int j = 0;j < mmap[date].size();++j) {
//				if (mmap[date][j].site == site)
//				{
//					mmap[date][j].count++;
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0) {
//				Node2 tmp;
//				tmp.count = 1;
//				tmp.site = site;
//				mmap[date].push_back(tmp);
//			}
//		}
//	}
//	
//	for (int i = 1;i <= M;++i) {
//		cin >> type;
//		if (type == 1) {
//			scanf(" %c", &c);
//			printf("Case %d: %d %c\n", i, type, c);
//			vector<Node*> vec;
//			if (c == 'A') vec = vecA;
//			else if (c == 'B') vec = vecB;
//			else vec = vecT;
//			if (vec.size() == 0) printf("NA\n");
//			else {
//				sort(vec.begin(), vec.end(), cmp);
//				for (int k = 0;k < vec.size();++k) printf("%s %d\n", vec[k]->str, vec[k]->score);
//			}
//		}
//		else if (type == 2) {
//			scanf("%d", &site);
//			printf("Case %d: %d %d\n", i, type, site);
//			if(siteToidx[site] == 0) printf("NA\n");
//			else printf("%d %d\n", siteToidx[site], siteToScore[site]);
//		}
//		else {
//			char tmpDate[8];
//			scanf(" %s", tmpDate);
//			printf("Case %d: %d %s\n", i, type, tmpDate);
//			date = atoi(tmpDate);
//			if(mmap.find(date)== mmap.end()) printf("NA\n");
//			else {
//				auto vec = mmap[date];
//				sort(vec.begin(), vec.end(), cmp1);
//				for (int k = 0;k < vec.size(); ++k) printf("%d %d\n", vec[k].site, vec[k].count);
//			}
//		}
//	}
//
//	system("pause");
//	return  0;
//}