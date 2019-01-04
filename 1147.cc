//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//using namespace std;
//const int maxn = 1010;
//int heap[maxn] = { 0 };
//int N, M;
//bool isMaxHeap() {
//	bool flag = true;
//	int lastNode = N / 2;
//	for (int i = lastNode;i >= 1;--i) {
//		int j = 2 * i;
//		if (j + 1 <= N) j = heap[j] > heap[j + 1] ? j : j + 1;
//		if (heap[i] < heap[j]) {
//			flag = false;
//			break;
//		}
//	}
//	return flag;
//}
//bool isMinHeap() {
//	bool flag = true;
//	int lastNode = N / 2;
//	for (int i = lastNode;i >= 1;--i) {
//		int j = 2 * i;
//		if (j + 1 <= N) j = heap[j] < heap[j + 1] ? j : j + 1;
//		if (heap[i] > heap[j]) {
//			flag = false;
//			break;
//		}
//	}
//	return flag;
//}
//vector<int> vec;
//void postOrder(int st) {
//	if (st * 2 <= N) postOrder(st * 2);
//	if (st * 2 + 1 <= N) postOrder(st * 2 + 1);
//	vec.push_back(heap[st]);
//}
//
//int main() {
//	scanf("%d %d", &M, &N);
//	for (int k = 0;k < M;++k) {
//		for (int i = 1;i <= N;++i) scanf("%d", heap + i);
//		if (isMaxHeap()) printf("Max Heap\n");
//		else if (isMinHeap()) printf("Min Heap\n");
//		else printf("Not Heap\n");
//		vec.clear();
//		postOrder(1);
//		for (int i = 0;i < vec.size() - 1;++i) printf("%d ", vec[i]);
//		printf("%d\n", vec[vec.size() - 1]);
//	}
//	system("pause");
//	return 0;
//}