//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<string>
//#include<iostream>
//using namespace std;
//string str[2];
//int arr[2][128] = { 0 }, loss = 0;
//int main() {
//	cin >> str[0] >> str[1];
//	for (int i = 0;i < 2;++i) {
//		for(int j=0;j<str[i].size();++j)
//			arr[i][str[i][j]]++;
//	}
//	for (int i = 0;i < 128;++i) {
//		if (arr[0][i] < arr[1][i]) loss += arr[1][i] - arr[0][i];
//	}
//	if (loss == 0) printf("Yes %d\n", str[0].size() - str[1].size());
//	else printf("No %d\n", loss);
//	system("pause");
//	return 0;
//}