//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//using namespace std;
//const int maxn = 1010;
//int heap[maxn] = { 0 };
//int N;
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
//void DFS(int st) {
//	vec.push_back(heap[st]);
//	if (2 * st > N) {//到达叶子节点
//		for (int i = 0;i < vec.size() - 1;++i) {
//			printf("%d ", vec[i]);
//		}
//		printf("%d\n", vec[vec.size() - 1]);
//		vec.pop_back();
//		return;
//	}
//	if (2 * st + 1 <= N) {//有右孩子
//		DFS(2 * st + 1);
//	}
//	if (2 * st <= N) {
//		DFS(2 * st);
//	}
//	vec.pop_back();
//}
//int main() {
//	scanf("%d", &N);
//	for (int i = 1;i <= N;++i) {
//		scanf("%d", heap + i);
//	}
//	if (isMaxHeap()) {
//		DFS(1);
//		printf("Max Heap");
//	}
//	else if (isMinHeap()) {
//		DFS(1);
//		printf("Min Heap");
//	}
//	else {
//		DFS(1);
//		printf("Not Heap");
//	}
//	system("pause");
//	return 0;
//}