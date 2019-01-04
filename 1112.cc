//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//string str;
//int k;
//vector<char> vec, res;
//bool idx[256] = { false }, inv[256] = {false};
//int main() {
//	cin >> k;
//	getchar();
//	getline(cin, str);
//	for (int i = 0;i < str.size();++i) {
//		if (i + k <= str.size()) {
//			string tmp(k, str[i]);
//			if (str.substr(i, k) == tmp) {
//				i += k - 1;
//				idx[str[i]] = true;
//			}
//		}
//		else idx[str[i]] = false;
//	}
//	for (int i = 0;i < str.size();++i) {
//		if (idx[str[i]] && !inv[str[i]]) {
//			res.push_back(str[i]);
//			inv[str[i]] = true;
//		}
//	}
//	for (int i = 0;i < res.size(); ++i) printf("%c", res[i]);
//	printf("\n");
//	for (int i = 0;i < str.size();++i) {
//		if (idx[str[i]]) {
//			str.erase(i + 1, k - 1);
//		}
//	}
//	cout << str << endl;
//	system("pause");
//	return 0;
//}