//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<algorithm>
//#include<vector>
//using namespace std;
//const int maxn = 210;
//int n, k, num, MIN, MAX;
//struct Node
//{
//	char name[10];
//	int age, worth;
//};
//bool cmp(Node * a, Node *b) {
//	if (a->worth != b->worth) return a->worth > b->worth;
//	else if (a->age != b->age) return a->age < b->age;
//	else return strcmp(a->name, b->name) < 0;
//}
//vector<Node *> vec;
//int main() {
//	scanf("%d %d", &n, &k);
//	for (int i = 0;i < n;++i) {
//		Node * node = new Node;
//		scanf("%s %d %d", node->name, &node->age, &node->worth);
//		if (node->age > 0 && node->age <= 200) vec.push_back(node);
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	for (int i = 1;i <= k;++i) {
//		scanf("%d%d%d", &num, &MIN, &MAX);
//		if (MIN <= 0) MIN = 1;
//		if (MAX > 200) MAX = 200;
//		bool flag = false;
//		printf("Case #%d:\n", i);
//		for (int i = 0;i < vec.size() && num > 0;++i) {
//			if (vec[i]->age >= MIN && vec[i]->age <= MAX) {
//				flag = true;
//				printf("%s %d %d\n", vec[i]->name, vec[i]->age, vec[i]->worth);
//				--num;
//			}
//		}
//		if (flag == false) printf("None\n");
//	}
//	system("pause");
//	return 0;
//}