//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N, c;
//vector<int> vec[2];
//int main() {
//	scanf("%d", &N);
//	for (int i = 0;i < 2;++i) {
//		for (int j = 0;j < N;++j) {
//			scanf("%d", &c);
//			vec[i].push_back(c);
//		}
//	}
//	int i, j;
//	for (i = 0;i < N - 1 && vec[1][i] <= vec[1][i + 1];++i);
//	for (j = i + 1;j < N && vec[0][j] == vec[1][j]; ++j);
//	if (j == N) {
//		printf("Insertion Sort\n");
//		sort(vec[0].begin(), vec[0].begin() + i + 2);
//	}
//	else {
//		printf("Merge Sort\n");
//		int k = 1;
//		int flag = 1;
//		while (flag) {
//			flag = 0;
//			for (i = 0; i < N; i++) {
//				if (vec[0][i] != vec[1][i])
//					flag = 1;
//			}
//			k = k * 2;
//			for (i = 0; i < N / k; i++)
//				sort(vec[0].begin() + i * k, vec[0].begin() + (i + 1) * k);
//			sort(vec[0].begin() + N / k * k, vec[0].begin() + N);
//		}
//	}
//	for (int i = 0;i < N;++i) {
//		printf("%d", vec[0][i]);
//		if (i < N - 1) printf(" ");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}