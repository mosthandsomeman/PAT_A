//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<set>
//#include<algorithm>
//#include<map>
//using namespace std;
//const int maxn = 10000;
//struct Node
//{
//	int minMem, tag;
//	set<int> member;
//	double setCount, allArea, aveArea;
//};
//int N, id, id1, id2, k, child, me, area;
//int father[maxn] = { 0 };
//vector<Node*> vec;
//map<int, Node*> index;
//bool cmp(Node *& a, Node *& b) {
//	if (a->aveArea != b->aveArea) return a->aveArea > b->aveArea;
//	else return a->minMem < b->minMem;
//}
//int main() {
//	fill(father, father + maxn, -1);
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		vector<int> tmp;
//		scanf("%d %d %d %d", &id, &id1, &id2, &k);
//		tmp.push_back(id);
//		if (id1 != -1) tmp.push_back(id1);
//		if (id2 != -1) tmp.push_back(id2);
//		for (int j = 0;j < k;++j) {
//			scanf("%d", &child);
//			tmp.push_back(child);
//		}
//		scanf("%d %d", &me, &area);
//		bool flag = true;
//		for (int j = 0;j < tmp.size();++j) {
//			if (father[tmp[j]] != -1) flag = false;
//		}
//		if (flag == true) {
//			Node * node = new Node;
//			for (int j = 0;j < tmp.size();++j) node->member.insert(tmp[j]);
//			node->setCount = me;
//			node->allArea = area;
//			node->tag = i;
//			vec.push_back(node);
//			index[10000 + i] = node;
//			for (int j = 0;j < tmp.size();++j) father[tmp[j]] = 10000 + i;
//		}
//		else {
//			set<int> sset;
//			for (int j = 0;j < tmp.size();++j) {
//				if(father[tmp[j]] != -1)
//					sset.insert(father[tmp[j]]);
//			}
//			Node * node = index[*(sset.begin())];
//			for (int j = 0;j < tmp.size();++j) {
//				father[tmp[j]] = node->tag + 10000;
//				node->member.insert(tmp[j]);
//			}
//			node->allArea += area;
//			node->setCount += me;
//			auto it = sset.begin();
//			for(++it; it!= sset.end();++it){
//				Node * tmpNode = index[*it];
//				node->allArea += tmpNode->allArea;
//				node->setCount += tmpNode->setCount;
//				for (auto elem : tmpNode->member) {
//					node->member.insert(elem);
//					father[elem] = node->tag + 10000;
//				}
//				for (int t = 0;t < vec.size();++t) {
//					if (vec[t]->tag == tmpNode->tag) {
//						vec.erase(vec.begin() + t);
//					}
//				}
//			}
//		}
//	}
//	for (int i = 0;i < vec.size();++i) {
//		vec[i]->minMem = *(vec[i]->member.begin());
//		vec[i]->aveArea = vec[i]->allArea / vec[i]->member.size();
//	}
//	sort(vec.begin(), vec.end(), cmp);
//	printf("%d\n", vec.size());
//	for (int i = 0;i < vec.size();++i) {
//		printf("%04d %d %.3f %.3f\n", vec[i]->minMem, vec[i]->member.size(),
//			vec[i]->setCount / vec[i]->member.size(), vec[i]->aveArea);
//	}
//	system("pause");
//	return 0;
//}