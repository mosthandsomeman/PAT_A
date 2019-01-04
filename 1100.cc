//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<iostream>
//#include<istream>
//using namespace std;
//int N;
//string str;
//string high[13] = { "", "tam", "hel", "maa", "huh", "tou", "kes", "hei", "elo", "syy", "lok", "mer", "jou" };
//string low[13] = { "tret", "jan", "feb", "mar", "apr", "may", "jun", "jly", "aug", "sep", "oct", "nov", "dec" };
//int main() {
//	cin >> N;
//	getchar();
//	for (int i = 0;i < N;++i) {
//		getline(cin, str);
//		if (str[0] >= '0' && str[0] <= '9') {
//			string res =  "";
//			if (stoi(str) / 13 > 0) {
//				res += high[stoi(str) / 13];
//			}
//			if (stoi(str) % 13 == 0) {
//				if(res.size() == 0) res += low[0];
//			}
//			else {
//				if(res.size() != 0) res += " ";
//				res += low[stoi(str) % 13];
//			}
//			cout << res << endl;
//		}
//		else {
//			if (str.size() > 5) {
//				int res = 0;
//				string s1 = str.substr(0, 3), s2 = str.substr(4);
//				for (int j = 1;j <= 12;++j) {
//					if (high[j] == s1) res += j * 13;
//				}
//				for (int j = 0;j <= 12;++j) {
//					if (low[j] == s2) res += j;
//				}
//				cout << res << endl;
//			}
//			else {
//				int res = 0;
//				for (int j = 0;j <= 12;++j) {
//					if (low[j] == str) res += j;
//				}
//				for (int j = 1;j <= 12;++j) {
//					if (high[j] == str) res += 13 * j;
//				}
//				cout << res << endl;
//			}
//		}
//	}
//	system("pause");
//	return 0;
//}