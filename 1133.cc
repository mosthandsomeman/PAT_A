//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//using namespace std;
//struct Node
//{
//	int add, data, next;
//};
//Node arr[100010];
//int beg, N, K, add, pos;
//vector<Node*> vec[3];
//int main() {
//	scanf("%d %d %d", &beg, &N, &K);
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &add);
//		scanf("%d %d", &arr[add].data, &arr[add].next);
//		arr[add].add = add;
//	}
//	pos = beg;
//	while (pos != -1) {
//		if (arr[pos].data < 0) vec[0].push_back(&arr[pos]);
//		else if(arr[pos].data > K) vec[2].push_back(&arr[pos]);
//		else vec[1].push_back(&arr[pos]);
//		pos = arr[pos].next;
//	}
//	for (int i = 1;i < 3;++i) {
//		for (int j = 0;j < vec[i].size();++j) 
//			vec[0].push_back(vec[i][j]);
//	}
//	for (int i = 0;i < vec[0].size() - 1;++i) {
//		printf("%05d %d %05d\n", vec[0][i]->add, vec[0][i]->data, vec[0][i + 1]->add);
//	}
//	printf("%05d %d -1\n", vec[0][vec[0].size() - 1]->add, vec[0][vec[0].size() - 1]->data);
//	system("pause");
//	return 0;
//}