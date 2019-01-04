//#include<cstdio>
//#include<cstdlib>
//#include<iostream>
//#include<string>
//#include<vector>
//using namespace std;
//string num;
//int N, flag = 1;
//string str[10] = { "ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu" };
//string spc[3] = { "Qian", "Bai", "Shi" };
//string other[3] = { "Fu", "Yi", "Wan" };
//vector<string> res;
//void func(int x) {
//	string tmp = to_string(x);
//	if (tmp.size() != 4) tmp.insert(0, 4 - tmp.size(), '0');
//	int len = res.size();
//	for (int i = 0;i < 4;++i) {
//		if (tmp[i] != '0') {
//			res.push_back(str[tmp[i] - '0']);
//			if (i < 3) res.push_back(spc[i]);
//		}
//		else {
//			while (i < 4 && tmp[i] == '0') ++i;
//			if (i >= 4) break;
//			--i;
//			res.push_back(str[0]);
//		}
//	}
//	if (len == 0 && tmp[0] == '0') res.erase(res.begin());
//}
//int main() {
//	cin >> num;
//	if (num[0] == '-') {
//		flag = -1;
//		num.erase(num.begin());
//	}
//	N = stoi(num);
//	int yi = N / 100000000;
//	if (yi != 0) {
//		func(yi);
//		res.push_back(other[1]);
//	}
//	int wan = N % 100000000 / 10000;
//	if (wan != 0) {
//		func(wan);
//		res.push_back(other[2]);
//	}
//	int last = N % 10000;
//	if (last != 0) func(last);
//	if (flag == -1) {
//		res.insert(res.begin(), other[0]);
//	}
//	if (N == 0) res.push_back(str[0]);
//	for (int i = 0;i < res.size();++i) {
//		printf("%s", res[i].c_str());
//		if (i < res.size() - 1) printf(" ");
//		else printf("\n");
//	}
//	system("pause");
//	return 0;
//}