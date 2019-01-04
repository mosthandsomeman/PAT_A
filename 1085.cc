//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<algorithm>
//using namespace std;
//int N, p, cnt = 1;
//double c;
//vector<double> vec;
//int main() {
//	scanf("%d %d", &N, &p);
//	for (int i = 0;i < N;++i) {
//		scanf("%lf", &c);
//		vec.push_back(c);
//	}
//	sort(vec.begin(), vec.end());
//	for (int i = 0;i < N;++i) {
//		for (int j = cnt + i - 1;j < N;++j) {
//			if (vec[j] / vec[i] <= p) {
//				int temp = j - i + 1;
//				if (temp > cnt) cnt = temp;
//			}
//			else break;
//		}
//	}
//	printf("%d\n", cnt);
//	system("pause");
//	return 0;
//}