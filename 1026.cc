//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<vector>
//#include<algorithm>
//#include<queue>
//#include<cmath>
//using namespace std;
//const int maxk = 105;
//const int BEG = 8 * 3600;
//const int END = 21 * 3600;
//int N, K, M, c;
//int isvipTab[110] = { 0 };
//int serCount[110] = { 0 };
//vector<int> vipTab;
//struct Node
//{
//	int arrive, service, begin, isVip, wait, isService;
//};
//bool cmp(Node *& a, Node *& b) {
//	if (a->arrive != b->arrive) return a->arrive < b->arrive;
//}
//bool cmp1(Node *& a, Node *& b) {
//	if (a->begin != b->begin) return a->begin < b->begin;
//}
//vector<Node*> vec;
//vector<Node*> rec;
//vector<Node*> vipVec;
//queue<Node*> que[maxk];
//int main() {
//	int hour, min, sec, service, isVip;
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		scanf("%d:%d:%d %d %d", &hour, &min, &sec, &service, &isVip);
//		Node * tmp = new Node;
//		memset(tmp, 0, sizeof(Node));
//		tmp->arrive = hour * 3600 + min * 60 + sec;
//		tmp->service = service * 60;
//		if(tmp->service >= 7200) tmp->service = 7200;
//		tmp->isVip = isVip;
//		vec.push_back(tmp);
//		if (isVip == 1) vipVec.push_back(tmp);
//	}
//	scanf("%d %d", &K, &M);
//	for (int i = 0;i < M;++i) {
//		scanf("%d", &c);
//		isvipTab[c] = 1;
//		vipTab.push_back(c);
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	sort(vipVec.begin(), vipVec.end(), cmp);
//	int idx = 0, idy = 0;
//	for (int i = 0;i < vipTab.size() && idy < vipVec.size();++i) {
//		Node * tmp = vipVec[idy++];
//		if (tmp->arrive > BEG) {
//			idy--;
//			break;
//		}
//		tmp->begin = tmp->arrive;
//		tmp->isService = 1;
//		que[vipTab[i]].push(tmp);
//	}
//	for (int i = 1;i <= K && idx < vec.size();++i) {
//		if (que[i].size() == 0) {
//			while (idx < vec.size() && vec[idx]->isService == 1) ++idx;
//			if (idx >= vec.size()) break;
//			Node * tmp = vec[idx++];
//			if (tmp->arrive > BEG) {
//				--idx;
//				break;
//			}
//			tmp->begin = tmp->arrive;
//			tmp->isService = 1;
//			que[i].push(tmp);
//		}
//	}
//	for (int i = BEG;i <= END;++i) {
//		for (int j = 1;j <= K;++j) {
//			if (que[j].empty()) continue;
//			Node * tmp = que[j].front();
//			if (tmp->begin + tmp->service == i) {
//				tmp->wait = tmp->begin - tmp->arrive;
//				que[j].pop();
//				serCount[j]++;
//				rec.push_back(tmp);
//			}
//		}
//		for (int j = 0;j < vipTab.size() && idy < vipVec.size();++j) {
//			if (que[vipTab[j]].empty()) {
//				while (idy < vipVec.size() && vipVec[idy]->isService == 1) ++idy;
//				if (idy >= vipVec.size()) break;
//				Node * tmp = vipVec[idy++];
//				if (tmp->arrive > i) {
//					--idy;
//					break;
//				}
//				tmp->begin = i;
//				tmp->isService = 1;
//				que[vipTab[j]].push(tmp);
//			}
//		}
//		for (int j = 1;j <= K && idx < vec.size();++j) {
//			if (que[j].empty()) {
//				while (idx < vec.size() &&vec[idx]->isService == 1) ++idx;
//				if (idx >= vec.size()) break;
//				Node * tmp = vec[idx++];
//				if (tmp->arrive > i) {
//					--idx;
//					break;
//				}
//				tmp->begin = i;
//				tmp->isService = 1;
//				que[j].push(tmp);
//			}
//		}
//	}
//
//	for (int i = 1;i <= K;++i) {
//		if (!que[i].empty()) {
//			Node * tmp = que[i].front();
//			if (tmp->begin >= END) continue;
//			tmp->wait = tmp->begin - tmp->arrive;
//			que[i].pop();
//			rec.push_back(tmp);
//			serCount[i]++;
//		}
//	}
//	sort(rec.begin(), rec.end(), cmp1);
//	for (int i = 0;i < rec.size();++i) {
//		if (rec[i]->isService == 1) {
//			printf("%02d:%02d:%02d %02d:%02d:%02d %.0f\n",
//				rec[i]->arrive / 3600, (rec[i]->arrive % 3600) / 60, rec[i]->arrive % 60,
//				rec[i]->begin / 3600, (rec[i]->begin % 3600) / 60, rec[i]->begin % 60,
//				round(rec[i]->wait / 60.0));
//		}
//	}
//	for (int i = 1;i <= K;++i) {
//		printf("%d", serCount[i]);
//		if (i < K) printf(" ");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}