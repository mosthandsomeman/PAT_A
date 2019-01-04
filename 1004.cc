//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include<queue>
//#include<map>
//using namespace std;
//const int maxn = 110;
//int n, m, id, k, c;
//map<int, int> num;
//struct Node
//{
//	int height;
//	vector<int> child;
//}tree[maxn];
//
//void layerOrder() {
//	queue<int> q;
//	q.push(1);
//	tree[1].height = 1;
//	while (!q.empty()) {
//		int top = q.front();
//		q.pop();
//		if (tree[top].child.size() == 0) {
//			if (num.find(tree[top].height) == num.end()) {
//				num[tree[top].height] = 1;
//			}
//			else {
//				num[tree[top].height]++;
//			}
//		}
//		else {
//			if (num.find(tree[top].height) == num.end()) {
//				num[tree[top].height] = 0;
//			}
//			int childNum = tree[top].child.size();
//			for (int i = 0;i < childNum;++i) {
//				int child = tree[top].child[i];
//				tree[child].height = tree[top].height + 1;
//				q.push(child);
//			}
//		}
//	}
//}
//
//int main() {
//	scanf("%d %d", &n, &m);
//	for (int i = 0;i < m;++i) {
//		scanf("%d %d", &id, &k);
//		for (int j = 0;j < k;++j) {
//			scanf("%d", &c);
//			tree[id].child.push_back(c);
//		}
//	}
//	layerOrder();
//	int ans = 0, cou = num.size();
//	for (auto elem : num) {
//		if (ans < cou - 1) {
//			printf("%d ", elem.second);
//		}
//		else {
//			printf("%d", elem.second);
//		}
//		++ans;
//	}
//	system("pause");
//	return 0;
//}