//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//#include<stack>
//using namespace std;
//int m, n, k, c;
//vector<int> vec;
//bool ins[1010] = { false };
//int main() {
//	scanf("%d %d %d", &m, &n, &k);
//	for (int j = 0;j < k;++j) {
//		vec.clear();
//		stack<int> st;
//		fill(ins, ins + 1010, false);
//		for (int i = 0;i < n;++i) {
//			scanf("%d", &c);
//			vec.push_back(c);
//		}
//		for (int i = 1;i <= vec[0];++i) st.push(i);
//		fill(ins + 1, ins + vec[0] + 1, true);
//		if (st.size() > m) {
//			printf("NO\n");
//			continue;
//		}
//		st.pop();
//		for (int i = 1;i < vec.size();++i) {
//			if (ins[vec[i]] == true) {
//				if (st.top() != vec[i]) break;
//				else st.pop();
//			}
//			else {
//				for (int t = 1;t <= vec[i];++t) {
//					if (ins[t] == false) {
//						st.push(t);
//						ins[t] = true;
//					}
//				}
//				if (st.size() > m) break;
//				st.pop();
//			}
//		}
//		if (st.size() == 0) printf("YES\n");
//		else printf("NO\n");
//	}
//	system("pause");
//	return 0;
//}