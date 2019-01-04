//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<functional>
//#include<algorithm>
//
//using namespace std;
//struct Stu
//{
//	char id[15];
//	int score;
//	int localtion;
//	int localrank;
//}stu[30010];
//int n, k, pos;
//
//bool cmp(Stu a, Stu b) {
//	if (a.score != b.score) return a.score > b.score;
//	else return strcmp(a.id, b.id) < 0;
//}
//
//int main() {
//	scanf("%d", &n);
//	pos = 0;
//	for (int i = 1;i <= n;++i) {
//		scanf("%d", &k);
//		for (int j = 0;j < k;++j) {
//			scanf("%s %d", stu[pos].id, &stu[pos].score);
//			stu[pos].localtion = i;
//			++pos;
//		}
//		sort(stu + pos - k, stu + pos, cmp);
//		stu[pos - k].localrank = 1;
//		for (int j = pos - k + 1;j < pos;++j) {
//			if (stu[j].score == stu[j - 1].score) {
//				stu[j].localrank = stu[j - 1].localrank;
//			}
//			else {
//				stu[j].localrank = j + 1 - (pos - k);
//			}
//		}
//	}
//	printf("%d\n", pos);
//	sort(stu, stu + pos, cmp);
//	int r = 1;
//	for (int i = 0;i < pos;++i) {
//		if (i > 0 && stu[i].score != stu[i - 1].score) {
//			r = i + 1;
//		}
//		printf("%s %d %d %d\n", stu[i].id, r, stu[i].localtion, stu[i].localrank);
//	}
//	system("pause");
//	return 0;
//}