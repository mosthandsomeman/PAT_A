//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<vector>
//#include<algorithm>
//using namespace std;
//const int maxn = 10005;
//int N, K, M, id, tihao, fenshu;
//struct Node
//{
//	int id, score[6], total, perNum, flag[6];
//};
//Node arr[maxn];
//vector<Node*> vec;
//int score[6] = {0};
//bool cmp(Node * a, Node * b) {
//	if (a->total != b->total) return a->total > b->total;
//	else if (a->perNum != b->perNum) return a->perNum > b->perNum;
//	else return a->id < b->id;
//}
//int main() {
//	memset(arr, 0, sizeof(arr));
//	scanf("%d %d %d", &N, &K, &M);
//	for (int i = 1;i <= K;++i) {
//		scanf("%d", score + i);
//	}
//	for (int i = 1;i <= N;++i) {
//		fill(arr[i].score, arr[i].score + 6, -1);
//		fill(arr[i].flag, arr[i].flag + 6, 0);
//	}
//	for (int i = 0;i < M;++i) {
//		scanf("%d %d %d", &id, &tihao, &fenshu);
//		arr[id].id = id;
//		arr[id].flag[tihao] = 1;
//		if (fenshu > arr[id].score[tihao]) {
//			arr[id].score[tihao] = fenshu;
//			if (fenshu == score[tihao]) arr[id].perNum++;
//		}
//	}
//	for (int i = 1;i <= N;++i) {
//		int noPass = 0, sum = 0, tijiao = 0;
//		for (int j = 1;j <= K;++j) {
//			if (arr[i].score[j] == -1) {
//				noPass++;
//			}
//			else sum += arr[i].score[j];
//		}
//		if (noPass == K) continue;
//		arr[i].total = sum;
//		vec.push_back(&arr[i]);
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	int rank = 1;
//	for (int i = 0;i < vec.size();++i) {
//		if (i != 0) {
//			if (vec[i]->total != vec[i - 1]->total) {
//				rank = i + 1;
//			}
//		}
//		printf("%d %05d %d", rank, vec[i]->id, vec[i]->total);
//		for (int j = 1;j <= K;++j) {
//			if (vec[i]->flag[j] == 0) printf(" -");
//			else 
//				printf(" %d", vec[i]->score[j] >= 0 ? vec[i]->score[j] : 0);
//		}
//		printf("\n");
//	}
//	system("pause");
//	return 0;
//}