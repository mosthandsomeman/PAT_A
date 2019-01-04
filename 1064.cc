//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<algorithm>
//#include<vector>
//#include<queue>
//using namespace std;
//int N, c;
//struct Node
//{
//	int left, right;
//};
//vector<int> vec;
//vector<int> res;
//Node arr[2010];
//int idx[2010];
//int getRoot(int L, int R) {
//	int high = 0, buttom = 0, left = 0, sum = 0, i = 1;
//	int len = R - L + 1;
//	if (len == 1) return L;
//	while (sum < len) {
//		sum += i;
//		i *= 2;
//		++high;
//	}
//	if (sum == len) {
//		return (R - L) / 2 + L;
//	}
//	else if(sum > len) {
//		buttom = i / 2;
//		left = len - (sum - buttom);//最下层数量
//		int a = (sum - buttom - 1) / 2; //左子树数量
//		if (left <= buttom / 2) a = a + left;
//		else a = a + buttom / 2;
//		return L + a;
//	}
//}
//int main() {
//	memset(arr, 0, sizeof(arr));
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		scanf("%d", &c);
//		vec.push_back(c);
//	}
//	sort(vec.begin(), vec.end());
//	for (int i = 0;i < N;++i) {
//		idx[vec[i]] = i;
//	}
//	queue<int> q;
//	int right = N - 1, left = 0;
//	int root = getRoot(left, right);
//	q.push(root);
//	arr[root].left = left;
//	arr[root].right = right;
//	while (!q.empty()) {
//		int pos = q.front();
//		q.pop();
//		res.push_back(vec[pos]);
//		int l = arr[pos].left;
//		int r = arr[pos].right;
//		if (l <= pos - 1) {
//			int lroot = getRoot(l, pos - 1);
//			arr[lroot].left = l;
//			arr[lroot].right = pos - 1;
//			q.push(lroot);
//		}
//		if (pos + 1 <= r) {
//			int rroot = getRoot(pos + 1, r);
//			arr[rroot].left = pos + 1;
//			arr[rroot].right = r;
//			q.push(rroot);
//		}
//	}
//	for (int i = 0;i < res.size() - 1;++i) {
//		printf("%d ", res[i]);
//	}
//	printf("%d\n", res[res.size() - 1]);
//	system("pause");
//	return 0;
//}