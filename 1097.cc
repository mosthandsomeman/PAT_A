//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<cmath>
//using namespace std;
//int N, beg, add, pos;
//struct Node
//{
//	int add, data, next;
//}arr[100010];
//vector<Node*> vec, keep, rem;
//bool idx[100010] = { false };
//void Dayin(vector<Node*> tmp) {
//	if (tmp.size() == 0) return;
//	for (int i = 0;i < tmp.size() - 1;++i) {
//		printf("%05d %d %05d\n", tmp[i]->add, tmp[i]->data, tmp[i + 1]->add);
//	}
//	printf("%05d %d -1\n", tmp[tmp.size() - 1]->add, tmp[tmp.size() - 1]->data);
//}
//int main() {
//	scanf("%d %d", &beg, &N);
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &add);
//		scanf("%d %d", &arr[add].data, &arr[add].next);
//		arr[add].add = add;
//	}
//	pos = beg;
//	while (pos != -1) {
//		vec.push_back(&arr[pos]);
//		pos = arr[pos].next;
//	}
//	for (int i = 0;i < vec.size();++i) {
//		if (!idx[abs(vec[i]->data)]) {
//			idx[abs(vec[i]->data)] = true;
//			keep.push_back(vec[i]);
//		}
//		else rem.push_back(vec[i]);
//	}
//	Dayin(keep);
//	Dayin(rem);
//	system("pause");
//	return 0;
//}