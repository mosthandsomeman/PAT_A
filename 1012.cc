//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<functional>
//#include<map>
//#include<vector>
//using namespace std;
//int N, m;
//map<char, int> order;
//struct Node
//{
//	int id;
//	int C, M, E, A;
//	int rank;
//	char ch;
//	Node(int _id, int _c, int _m, int _e, int _a) :id(_id), C(_c), M(_m), E(_e), A(_a), rank(-1),ch('\0') {}
//};
//map<int, Node*> res;
//vector<Node*> vec;
//
//void init() {
//	order['\0'] = 1;
//	order['E'] = 2;
//	order['M'] = 3;
//	order['C'] = 4;
//	order['A'] = 5;
//}
//
//bool cmpE(Node * a, Node * b) {
//	if (a->E != b->E) return a->E > b->E;
//	else return a->id < b->id;
//}
//
//bool cmpM(Node * a, Node * b) {
//	if (a->M != b->M) return a->M > b->M;
//	else return a->id < b->id;
//}
//
//bool cmpC(Node * a, Node * b) {
//	if (a->C != b->C) return a->C > b->C;
//	else return a->id < b->id;
//}
//
//bool cmpA(Node * a, Node * b) {
//	if (a->A != b->A) return a->A > b->A;
//	else return a->id < b->id;
//}
//
//void setRank(char ch) {
//	int preRank = 1, curRank, curScore, preScore, id;
//	if (vec[0]->rank == -1) {
//		vec[0]->rank = 1;
//		vec[0]->ch = ch;
//	}
//	else if (1 < vec[0]->rank || (1 == vec[0]->rank && order[ch] > order[vec[0]->ch])) {
//		vec[0]->rank = 1;
//		vec[0]->ch = ch;
//	}
//	for (int i = 1;i < vec.size();++i) {
//		id = vec[i]->id;
//		switch (ch){
//		case 'E':curScore = vec[i]->E; preScore = vec[i - 1]->E; break;
//		case 'M':curScore = vec[i]->M; preScore = vec[i - 1]->M; break;
//		case 'C':curScore = vec[i]->C; preScore = vec[i - 1]->C; break;
//		case 'A':curScore = vec[i]->A; preScore = vec[i - 1]->A; break;
//		}
//		if (curScore == preScore) curRank = preRank;
//		else {
//			curRank = i + 1;
//			preRank = curRank;
//		}
//		if (vec[i]->rank == -1) {
//			vec[i]->rank = curRank;
//			vec[i]->ch = ch;
//		}
//		else if (curRank < vec[i]->rank || (curRank == vec[i]->rank && order[ch] > order[vec[i]->ch])) {
//			vec[i]->rank = curRank;
//			vec[i]->ch = ch;
//		}
//	}
//}
//
//int main() {
//	int id, C, M, E, A;
//	scanf("%d %d", &N, &m);
//	init();
//	for (int i = 0;i < N;++i) {
//		scanf("%d %d %d %d", &id, &C, &M, &E);
//		A = (int)((double)(C + M + E) / 3 + 0.5);
//		Node *node = new Node(id, C, M, E, A);
//		vec.push_back(node);
//		res[id] = node;
//	}
//
//	sort(vec.begin(), vec.end(), cmpE);
//	setRank('E');
//	sort(vec.begin(), vec.end(), cmpM);
//	setRank('M');
//	sort(vec.begin(), vec.end(), cmpC);
//	setRank('C');
//	sort(vec.begin(), vec.end(), cmpA);
//	setRank('A');
//	for (int i = 0;i < m;++i) {
//		scanf("%d", &id);
//		if (res.find(id) == res.end()) printf("N/A\n");
//		else {
//			printf("%d %c\n", res[id]->rank, res[id]->ch);
//		}
//	}
//	system("pause");
//	return 0;
//}