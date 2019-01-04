//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<cstring>
//#include<vector>
//using namespace std;
//char num[10][6] = { "zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine" };
//char str[200];
//int sum = 0;
//vector<int> vec;
//int main() {
//	scanf("%s", str);
//	int len = strlen(str);
//	for (int i = 0;i < len;++i) {
//		sum += str[i] - '0';
//	}
//	if (sum == 0) {
//		vec.push_back(0);
//	}
//	else {
//		while (sum != 0) {
//			vec.push_back(sum % 10);
//			sum /= 10;
//		}
//	}
//
//	for (int i = vec.size() - 1; i >= 0;--i) {
//		if (i > 0) {
//			printf("%s ", num[vec[i]]);
//		}
//		else {
//			printf("%s", num[vec[i]]);
//		}
//	}
//	system("pause");
//	return 0;
//}