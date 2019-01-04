//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N, K, beg, add;
//struct  Node
//{
//	int add, next, data;
//};
//vector<Node*> vec;
//Node arr[100010];
//int main() {
//	scanf("%d %d %d", &beg, &N, &K);
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &add);
//		scanf("%d %d", &arr[add].data, &arr[add].next);
//		arr[add].add = add;
//	}
//	int pos = beg;
//	while (pos != -1) {
//		vec.push_back(&arr[pos]);
//		pos= arr[pos].next;
//	}
//	if (vec.size() != 0) {
//		int cnt = vec.size() / K, count = 0;
//		while (count != cnt) {
//			reverse(vec.begin() + count * K, vec.begin() + (count + 1) * K);
//			++count;
//		}
//		for (int i = 0;i < vec.size() - 1;++i) {
//			printf("%05d %d %05d\n", vec[i]->add, vec[i]->data, vec[i + 1]->add);
//		}
//		printf("%05d %d -1\n", vec[vec.size() - 1]->add, vec[vec.size() - 1]->data);
//	}
//	system("pause");
//	return 0;
//}