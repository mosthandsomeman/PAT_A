//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int C, D, Da, N;
//double cost = 0, myPos = 0, V = 0;
//struct Node{
//	double price, dis;
//}node;
//vector<Node> vec;
//bool cmp(Node & a, Node & b) { if (a.dis != b.dis) return a.dis < b.dis; }
//int main() {
//	scanf("%d %d %d %d", &C, &D, &Da, &N);
//	for (int i = 0;i < N;++i) {
//		scanf("%lf %lf", &node.price, &node.dis);
//		vec.push_back(node);
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	node.dis = D, node.price = 0, vec.push_back(node);
//	double maxDis = C * Da;
//	if (vec[0].dis != 0) {
//		printf("The maximum travel distance = 0.00\n");
//	}
//	else {
//		for (int i = 0;i < N;++i) {
//			bool flag = false;
//			int j;
//			for (j = i + 1;j < N + 1;++j) {
//				if (vec[j].dis > vec[i].dis + maxDis) break;
//				if (vec[j].price <= vec[i].price) {
//					flag = true;
//					if (V * Da >= vec[j].dis - vec[i].dis) break;
//					cost += (vec[j].dis - vec[i].dis - V * Da) / Da * vec[i].price;
//					V += (vec[j].dis - vec[i].dis - V * Da) / Da;
//					break;
//				}
//			}
//			if (flag == false) {
//				cost += (C - V) * vec[i].price;
//				V = C;
//				V -= (vec[i + 1].dis - vec[i].dis) / Da;
//				if (vec[i + 1].dis > vec[i].dis + maxDis) myPos = vec[i].dis + maxDis;
//				else myPos = vec[i + 1].dis;
//			}
//			else {
//				V -= (vec[j].dis - vec[i].dis) / Da;
//				myPos = vec[j].dis;
//				i = j - 1;
//			}
//		}
//		if (myPos < D) printf("The maximum travel distance = %.2f\n", myPos);
//		else printf("%.2f\n", cost);
//	}
//	system("pause");
//	return 0;
//}