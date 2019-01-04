//#include<cstdio>
//#include<cstdlib>
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//int n;
//string str;
//vector<string> vec;
//string commonSuffix(string str1, string str2) {
//	string com;
//	int len1 = str1.size(), len2 = str2.size(), i, j;
//	for (i = len1 - 1, j = len2 - 1;i >= 0 && j >= 0;--i, --j) {
//		if (str1[i] != str2[j]) {
//			if (i == len1 - 1) com = "";
//			else com = str1.substr(i + 1);
//			break;
//		}
//	}
//	if (j >= 0 && i < 0) com = str1;
//	if (i >= 0 && j < 0) com = str2;
//	if (i < 0 && j < 0) com = str1;
//	return com;
//}
//int main() {
//	cin >> n;
//	getchar();
//	for (int i = 0;i < n;++i) {
//		getline(cin, str);
//		vec.push_back(str);
//	}
//	for (int i = 1;i < n;++i) {
//		if (i == 1)
//			str = commonSuffix(vec[i], vec[i - 1]);
//		else
//			str = commonSuffix(vec[i], str);
//	}
//	if (str.size() != 0)
//		cout << str << endl;
//	else
//		cout << "nai" << endl;
//	system("pause");
//	return 0;
//}