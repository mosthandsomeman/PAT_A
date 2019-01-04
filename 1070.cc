//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//struct Node
//{
//	double ton, profit, price;
//};
//vector<Node> vec;
//bool cmp(Node & a, Node & b) {
//	return a.price > b.price;
//}
//int main() {
//	int n, k = 0;
//	double need;
//	scanf("%d %lf", &n, &need);
//	for (int i = 0;i < n;++i) {
//		Node node;
//		scanf("%lf", &node.ton);
//		vec.push_back(node);
//	}
//	double profit;
//	for (int i = 0;i < n;++i) {
//		scanf("%lf", &profit);
//		vec[i].profit = profit;
//		vec[i].price = vec[i].profit / vec[i].ton;
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	profit = 0;
//	while (need > 0 && k < vec.size()) {
//		if (vec[k].ton >= need) {
//			profit += need / vec[k].ton * vec[k].profit;
//			break;
//		}
//		else {
//			need -= vec[k].ton;
//			profit += vec[k].profit;
//			++k;
//		}
//	}
//	printf("%.2f\n", profit);
//	system("pause");
//	return 0;
//}