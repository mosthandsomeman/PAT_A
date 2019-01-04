//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//string a, b, c;
//int step = 0;
//string addStr(string x, string y) {
//	string sum = "";
//	int jinwei = 0, i, j;
//	for (i = 0, j = 0;i < x.size() && j < y.size();++i, ++j) {
//		sum.insert(0, 1, (x[i] + y[j] - 96 + jinwei) % 10 + 48);
//		jinwei = (x[i] + y[j] - 96 + jinwei) / 10;
//	}
//	while  (i < x.size()) {
//		sum.insert(0, 1, (x[i] - 48 + jinwei) % 10 + 48);
//		jinwei = (x[i++] - 48 + jinwei) / 10;
//	}
//	while (j < y.size()) {
//		sum.insert(0, 1, (y[j] - 48 + jinwei) % 10 + 48);
//		jinwei = (y[j] - 48 + jinwei) / 10;
//	}
//	if(jinwei != 0) sum.insert(0, 1, jinwei % 10 + 48);
//	return sum;
//}
//int main() {
//	cin >> a;
//	b = a;
//	reverse(b.begin(), b.end());
//	while (a != b && step < 10) {
//		c = addStr(a, b);
//		cout << a << " + " << b << " = " << c << endl;
//		a = b = c;
//		reverse(b.begin(), b.end());
//		++step;
//	}
//	if (step < 10 && step > 0) cout << c << " is a palindromic number." << endl;
//	else if(step == 0) cout << a << " is a palindromic number." << endl;
//	else cout << "Not found in 10 iterations." << endl;
//	system("pause");
//	return 0;
//}