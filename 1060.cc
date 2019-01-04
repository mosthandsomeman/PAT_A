//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//#include<cstring>
//#include<iostream>
//#include<functional>
//#include<algorithm>
//#include<vector>
//#include<ctime>
//#include<string>
//
//using namespace std;
//int n;
//
//string deal(string str, int & e) {
//	string s;
//	int k = 0;
//	while (str.size() > 0 && str[0] == '0') {
//		str.erase(str.begin());
//	}
//	if (str[0] == '.') {
//		str.erase(str.begin());
//		while (str.size() > 0 && str[0] == '0') {
//			str.erase(str.begin());
//			--e;
//		}
//	}
//	else {
//		while (k < str.size() && str[k] != '.') {
//			++k;
//			++e;
//		}
//		if (k < str.size()) {
//			str.erase(str.begin() + k);
//		}
//	}
//	if (str.size() == 0) {
//		e = 0;
//	}
//	int num = 0;
//	k = 0;
//	while (num < n) {
//		if (k < str.size()) {
//			s += str[k++];
//		}
//		else {
//			s += '0';
//		}
//		++num;
//	}
//	return s;
//}
//
//int main() {
//	string s1, s2, s3, s4;
//	cin >> n >> s1 >> s2;
//	int e1 = 0, e2 = 0;
//	s3 = deal(s1, e1);
//	s4 = deal(s2, e2);
//	
//	if (s3 == s4 && e1 == e2) {
//		cout << "YES 0." << s3 << "*10^" << e1 << endl;
//	}
//	else {
//		cout << "NO 0." << s3 << "*10^" << e1 << " 0." << s4 << "*10^" << e2 << endl;
//	}
//
//	system("pause");
//	return 0;
//}