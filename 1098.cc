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
//		sort(vec[1].begin(), vec[1].begin() + i + 2);
//	}
//	else {
//		printf("Heap Sort\n");
//		int i, j;
//		for (i = N - 1;i > 0 && vec[1][i] >= vec[1][i - 1];--i);
//		make_heap(vec[1].begin(), vec[1].begin() + i + 1);
//		pop_heap(vec[1].begin(), vec[1].begin() + i + 1);
//	}
//	for (int i = 0;i < N;++i) {
//		printf("%d", vec[1][i]);
//		if (i < N - 1) printf(" ");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}