//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<iostream>
//using namespace std;
//string z, a, b;
//int n;
//int main() {
//	cin >> n;
//	for (int i = 0;i < n;++i) {
//		cin >> z;
//		a = z.substr(0, z.size() / 2);
//		b = z.substr(z.size() / 2);
//		if (stoi(a) == 0 || stoi(b) == 0) {
//			cout << "No" << endl;
//			continue;
//		}
//		if ((stoi(z) % stoi(a) == 0 && (stoi(z) / stoi(a) % stoi(b) == 0)) || 
//			(stoi(z) % stoi(b) == 0 && (stoi(z) / stoi(b) % stoi(a) == 0)))
//			cout << "Yes" << endl;
//		else cout << "No" << endl;
//	}
//	system("pause");
//	return 0;
//}