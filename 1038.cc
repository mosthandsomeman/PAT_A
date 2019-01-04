//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<iostream>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N;
//string str, result = "";
//vector<string> vec[10];
//bool cmp(string & a, string & b) {
//	return a + b < b + a;
//}
//int main() {
//	cin >> N;
//	for (int i = 0;i < N;++i) {
//		cin >> str;
//		vec[str[0] - 48].push_back(str);
//	}
//	for (int i = 0;i < 10;++i) {
//		sort(vec[i].begin(), vec[i].end(), cmp);
//		for (int j = 0;j < vec[i].size();++j) result += vec[i][j];
//	}
//	while (result[0] == '0') result.erase(0, 1);
//	if (result.size() == 0) cout << "0" << endl;
//	else cout << result << endl;
//
//	system("pause");
//	return 0;
//}