//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<cstring>
//#include<string>
//#include<map>
//#include<algorithm>
//using namespace std;
//int N, M, h, m, s, tempidx = 0, maxtime = -1, ant[10010] = { 0 };
//struct Node {
//	int time, tag;
//	char name[10];
//};
//map<string, int> idx;
//vector<Node*> vec, res;
//bool cmp(Node *& a, Node *& b) { return a->time < b->time; }
//bool cmp1(Node *&a, Node *& b) {
//	if (strcmp(a->name, b->name) != 0) return strcmp(a->name, b->name) < 0;
//	else return a->time < b->time;
//}
//int main() {
//	scanf("%d %d", &N, &M);
//	for (int i = 0;i < N;++i) {
//		Node * node = new Node;
//		char * tag = new char[10];
//		scanf("%s %d:%d:%d %s", node->name, &h, &m, &s, tag);
//		node->time = h * 3600 + m * 60 + s;
//		node->tag = strcmp(tag, "in") == 0 ? 1 : -1;
//		vec.push_back(node);
//	}
//	sort(vec.begin(), vec.end(), cmp1);
//	for (int i = 0;i < vec.size() - 1;++i) {
//		if (strcmp(vec[i]->name, vec[i + 1]->name) == 0 && vec[i]->tag == 1 && vec[i + 1]->tag == -1) {
//			res.push_back(vec[i]);
//			res.push_back(vec[i + 1]);
//			if (idx.find(vec[i]->name) == idx.end()) idx[vec[i]->name] = vec[i + 1]->time - vec[i]->time;
//			else idx[vec[i]->name] += vec[i + 1]->time - vec[i]->time;
//			if (idx[vec[i]->name] > maxtime) maxtime = idx[vec[i]->name];
//		}
//	}
//	sort(res.begin(), res.end(), cmp);
//	for (int i = 0;i < res.size();++i) {
//		if (i == 0) ant[i] += res[i]->tag;
//		else ant[i] = ant[i - 1] + res[i]->tag;
//	}
//	for (int i = 0;i < M;++i) {
//		scanf("%d:%d:%d", &h, &m, &s);
//		int time = 3600 * h + m * 60 + s;
//		int j;
//		for (j = tempidx; j < res.size();++j) {
//			if (res[j]->time > time) {
//				printf("%d\n", ant[j - 1]);
//				break;
//			}
//			else if (j == res.size() - 1) printf("%d\n", ant[j]);
//		}
//		tempidx = j;
//	}
//	for (auto elem : idx) {
//		if (elem.second == maxtime) printf("%s ", elem.first.c_str());
//	}
//	printf("%02d:%02d:%02d\n", maxtime / 3600, maxtime % 3600 / 60, maxtime % 60);
//	system("pause");
//	return 0;
//}