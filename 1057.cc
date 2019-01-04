//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<iostream>
//#include<algorithm>
//#include<stack>
//using namespace std;
//const int maxn = 100010;
//int table[100010] = { 0 };
//int block[317] = { 0 };
//int n, x;
//string str;
//stack<int> st;
//void insert(int x) {
//	st.push(x);
//	int idx = x / 316;
//	block[idx]++;
//	table[x]++;
//}
//int popSt() {
//	int x = st.top();
//	st.pop();
//	int idx = x / 316;
//	block[idx]--;
//	table[x]--;
//	return x;
//}
//int peek() {
//	int sum = 0, k;
//	if (st.size() % 2 == 0) k = st.size() / 2;
//	else k = (st.size() + 1) / 2;
//	int idx;
//	for (int i = 0;i < 317;++i) {
//		if (sum + block[i] < k)
//			sum += block[i];
//		else{
//			idx = i;
//			break;
//		}
//	}
//	int start = 316 * (idx);
//	for (int i = 0;i < 316;++i) {
//		if (sum + table[start + i] < k)
//			sum += table[start + i];
//		else
//			return start + i;
//	}
//}
//int main() {
//	cin >> n;
//	getchar();
//	for (int i = 0;i < n;++i) {
//		getline(cin, str);
//		if (str[1] == 'o') {
//			if (st.size() != 0) {
//				printf("%d\n", popSt());
//			}
//			else
//				printf("Invalid\n");
//		}
//		else if (str[1] == 'u') {
//			insert(atoi(str.substr(5).c_str()));
//		}
//		else {
//			if (st.size() != 0) printf("%d\n", peek());
//			else
//				printf("Invalid\n");
//		}
//	}
//	system("pause");
//	return 0;
//}