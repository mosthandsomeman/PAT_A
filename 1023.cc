//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<vector>
//#include<map>
//using namespace std;
//vector<int> vec;
//map<int, int> m1, m2;
//
//int main() {
//	char str[25];
//	scanf("%s", str);
//	for (int i = strlen(str) - 1;i >= 0;--i) {
//		int num = str[i] - '0';
//		if (m1.find(num) == m1.end()) m1[num] = 1;
//		else m1[num]++;
//		vec.push_back(num);
//	}
//	int jinwei = 0;
//	for (int i = 0;i < vec.size();++i) {
//		vec[i] = vec[i] * 2 + jinwei;
//		jinwei = vec[i] / 10;
//		vec[i] = vec[i] % 10;
//	}
//	if (jinwei != 0) vec.push_back(jinwei);
//	for (int i = 0;i < vec.size();++i) {
//		if (m2.find(vec[i]) == m2.end()) m2[vec[i]] = 1;
//		else m2[vec[i]]++;
//	}
//	if (m1 == m2) printf("Yes\n");
//	else printf("No\n");
//	for (int i = vec.size() - 1;i >= 0;--i) {
//		printf("%d", vec[i]);
//	}
//	printf("\n");
//	system("pause");
//	return 0;
//}