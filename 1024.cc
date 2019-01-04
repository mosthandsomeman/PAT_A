//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<string>
//#include<vector>
//#include<iostream>
//using namespace std;
//int k, num, step = 0, tmp;
//string str;
//vector<int> vec;
//bool judge(vector<int> vc) {
//	vector<int> re = vc;
//	reverse(re.begin(), re.end());
//	if (re == vc) return true;
//	else return false;
//}
//
//void opera() {
//	vector<int> temp, sum;
//	temp = vec;
//	reverse(temp.begin(), temp.end());
//	int jinwei = 0;
//	for (int i = 0;i < vec.size();++i) {
//		tmp = vec[i] + temp[i] + jinwei;
//		jinwei = tmp / 10;
//		sum.push_back(tmp % 10);
//	}
//	if (jinwei != 0) sum.push_back(jinwei);
//	vec.clear();
//	vec = sum;
//}
//
//int main() {
//	cin >> str >> k;
//	if (str.size() == 1 && str[0] == '0') vec.push_back(0);
//	else {
//		for (int i = 0;i < str.size();++i) vec.push_back(str[i] - '0');
//	}
//	while (judge(vec) == false && step < k) {
//		opera();
//		++step;
//	}
//	for (int i = vec.size() - 1;i >= 0;--i) {
//		cout << vec[i];
//	}
//	cout << endl;
//	if (step < k) cout << step <<endl;
//	else cout << k << endl;;
//
//	system("pause");
//	return 0;
//}