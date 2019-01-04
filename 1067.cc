//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<set>
//const int maxn = 100010;
//using namespace std;
//int n, step = 0, pos, notInPos = 0;
//int arr[maxn] = { 0 };
//int dataPos[maxn] = { 0 };
//set<int> sset;
//int main() {
//	scanf("%d", &n);
//	for (int i = 0;i < n;++i) {
//		scanf("%d", arr + i);
//		dataPos[arr[i]] = i;
//		if (arr[i] != i) {
//			++notInPos;
//			if(arr[i] != 0)
//				sset.insert(arr[i]);
//		}
//	}
//	pos = dataPos[0];
//	while (notInPos != 0) {
//		if (pos == 0) {
//			if (sset.size() > 0) {
//				int tmp = *sset.begin();
//				swap(arr[dataPos[tmp]], arr[pos]); //0归位
//				dataPos[0] = dataPos[arr[pos]];
//				dataPos[arr[pos]] = 0;
//				pos = dataPos[0];
//				++step;
//				++notInPos; //导致0不在位置
//			}
//		}
//		while (pos != 0) {
//			swap(arr[pos], arr[dataPos[pos]]);
//			dataPos[0] = dataPos[arr[pos]];
//			dataPos[arr[pos]] = pos;
//			sset.erase(sset.find(pos));
//			pos = dataPos[0];
//			++step;
//			--notInPos;
//			if (pos == 0) --notInPos;
//		}
//	}
//	printf("%d\n", step);
//	system("pause");
//	return 0;
//}