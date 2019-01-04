//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int n, b, num;
//vector<int> vec, revers;
//int main() {
//	scanf("%d %d", &n, &b);
//	num = n;
//	if (n == 0) vec.push_back(0);
//	else {
//		while (num != 0) {
//			vec.push_back(num % b);
//			num /= b;
//		}
//	}
//	revers = vec;
//	reverse(vec.begin(), vec.end());
//	if (revers == vec) printf("Yes\n");
//	else printf("No\n");
//	for (int i = 0;i < vec.size();++i) {
//		printf("%d", vec[i]);
//		if (i < vec.size() - 1) printf(" ");
//	}
//	system("pause");
//	return 0;
//}