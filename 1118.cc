//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>	
//#include<set>
//#include<map>
//using namespace std;
//const int maxn = 10010;
//int N, K, Q, c, d, id, sum = 0;
//int idx[maxn] = { 0 };
//int father[maxn] = { 0 };
//struct Node
//{
//	int tag;
//	set<int> member;
//};
//map<int, Node*> index;
//vector<Node*> vec;
//int main() {
//	scanf("%d", &N);
//	fill(father, father + maxn, -1);
//	for (int i = 1;i <= N;++i) {
//		scanf("%d", &K);
//		vector<int> tmp;
//		bool flag = true;
//		set<int> sset;
//		for (int j = 0;j < K;++j) {
//			scanf("%d", &id);
//			tmp.push_back(id);
//			if (father[id] != -1) {
//				flag = false;
//				sset.insert(father[id]);
//			}
//		}
//		if (flag == true) {
//			Node * node = new Node;
//			for (int j = 0;j < tmp.size();++j) {
//				father[tmp[j]] = 10000 + i;
//				node->member.insert(tmp[j]);
//			}
//			index[10000 + i] = node;
//			node->tag = 10000 + i;
//			vec.push_back(node);
//		}
//		else {
//			Node * node = index[*sset.begin()];
//			for (int j = 0;j < tmp.size();++j) {
//				father[tmp[j]] = node->tag;
//				node->member.insert(tmp[j]);
//			}
//			auto it = sset.begin();
//			for (it++;it != sset.end();++it) {
//				Node * tmpNode = index[*it];
//				for (auto elem : tmpNode->member) {
//					node->member.insert(elem);
//					father[elem] = node->tag;
//				}
//				for (int j = 0;j < vec.size();++j) {
//					if (vec[j]->tag == tmpNode->tag)
//						vec.erase(vec.begin() + j);
//				}
//			}
//		}
//	}
//	scanf("%d", &Q);
//	for (int i = 0;i < vec.size();++i) sum += vec[i]->member.size();
//	printf("%d %d\n", vec.size(), sum);
//	for (int i = 0;i < Q;++i) {
//		scanf("%d %d", &c, &d);
//		if (father[c] == father[d] && father[c] != -1) printf("Yes\n");
//		else printf("No\n");
//	}
//	system("pause");
//	return 0;
//}