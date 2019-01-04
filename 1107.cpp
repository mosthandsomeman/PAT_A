//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include<set>
//#include<map>
//const int maxn = 1010;
//using namespace std;
//int father[maxn] = { 0 };
//struct Node
//{
//	int tag;
//	set<int> person, hobby;
//};
//map<int, Node*> index;
//vector<Node*> vec;
//bool cmp(Node *&a, Node *& b) {
//	return a->person.size() > b->person.size();
//}
//int N, K, a;
//int main() {
//	scanf("%d", &N);
//	fill(father, father + maxn, -1);
//	for (int i = 1;i <= N;++i) {
//		scanf("%d: ", &K);
//		set<int> sset;
//		vector<int> temp;
//		bool flag = true;
//		for (int i = 0;i < K;++i) {
//			scanf("%d", &a);
//			temp.push_back(a);
//			if (father[a] != -1) {
//				flag = false;
//				sset.insert(father[a]);
//			}
//		}
//		if (flag) {
//			Node * node = new Node;
//			node->tag = 1000 + i;
//			node->person.insert(i);
//			for (int j = 0;j < temp.size();++j) {
//				node->hobby.insert(temp[j]);
//				father[temp[j]] = 1000 + i;
//			}
//			index[1000 + i] = node;
//			vec.push_back(node);
//		}
//		else {
//			Node * node = index[*sset.begin()];
//			node->person.insert(i);
//			for (int j = 0;j < temp.size();++j) {
//				node->hobby.insert(temp[j]);
//				father[temp[j]] = node->tag;
//			}
//			auto it = sset.begin();
//			++it;
//			for (;it != sset.end();++it) {
//				Node * tmpNode = index[*it];
//				for (auto elem : tmpNode->person) {
//					node->person.insert(elem);
//				}
//				for (auto elem : tmpNode->hobby) {
//					node->hobby.insert(elem);
//					father[elem] = node->tag;
//				}
//				for (int t = 0;t < vec.size(); ++t) {
//					if (tmpNode->tag == vec[t]->tag)
//						vec.erase(vec.begin() + t);
//				}
//			}
//		}
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	printf("%d\n", vec.size());
//	for (int i = 0;i < vec.size();++i) {
//		printf("%d", vec[i]->person.size());
//		if (i < vec.size() - 1) printf(" ");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}