//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//const int maxk = 105;
//const int BEG = 8 * 3600;
//const int END = 17 * 3600;
//int n, k;
//double total = 0;
//struct Node
//{
//	int arrive, begin, cons;
//};
//bool cmp(Node * a, Node * b) {
//	return a->arrive < b->arrive;
//}
//queue<Node*> q[maxk];
//vector<Node*> vec;
//int main() {
//	scanf("%d %d", &n, &k);
//	int a, b, c, d;
//	for (int i = 1;i <= n;++i) {
//		Node *tmp = new Node;
//		scanf("%d:%d:%d %d", &a, &b, &c, &d);
//		tmp->arrive = a * 3600 + b * 60 + c;
//		tmp->cons = d * 60;
//		if (tmp->arrive > END) continue;
//		vec.push_back(tmp);
//	}
//	sort(vec.begin(), vec.end(), cmp); //按到达时间排序
//	int idx = 0;
//	for (int i = 0;i < k && idx < vec.size();++i) {
//		Node * tmp = vec[idx++];
//		if (tmp->arrive < BEG) tmp->begin = BEG;
//		else tmp->begin = tmp->arrive;
//		q[i].push(tmp);
//	}
//	for (int i = BEG;i <= END;++i) {
//		for (int j = 0;j < k;++j) {
//			if (q[j].empty()) continue;
//			Node * tmp = q[j].front();
//			if (tmp->begin + tmp->cons == i) {
//				total += tmp->begin - tmp->arrive;
//				q[j].pop();
//			}
//		}
//		for (int j = 0;j < k && idx < vec.size(); ++j, ++idx) {
//			if (q[j].size() == 0) {
//				Node * tmp = vec[idx];
//				tmp->begin = i;
//				q[j].push(tmp);
//			}
//		}
//	}
//	for (int j = 0;j < k;++j) {
//		if (!q[j].empty()) {
//			Node * tmp = q[j].front();
//			total += tmp->begin - tmp->arrive;
//		}
//	}
//	while (idx < vec.size()) {
//		total += END - vec[idx]->arrive;
//		++idx;
//	}
//	if (vec.size() == 0) printf("0.0\n");
//	else printf("%.1f\n", total / vec.size() / 60);
//	system("pause");
//	return 0;
//}