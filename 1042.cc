//#include<cstdio>
//#include<cstdlib>
//#include<vector>
//#include<string>
//#include<iostream>
//using namespace std;
//int N, c;
//vector<int> order;
//vector<string> card, tmp;
//
//int main() {
//	cin >> N;
//	for (int i = 0;i < 54;++i) {
//		cin >> c;
//		order.push_back(c);
//	}
//	string str[4] = { "S", "H", "C", "D" };
//	for (int i = 0;i < 4;++i) {
//		for (int j = 1;j <= 13;++j) {
//			card.push_back(str[i] + to_string(j));
//		}
//	}
//	card.push_back("J1");
//	card.push_back("J2");
//	for (int i = 0;i < N;++i) {
//		tmp = card;
//		for (int j = 0;j < 54;++j) {
//			tmp[order[j] - 1] = card[j];
//		}
//		card = tmp;
//	}
//	for (int i = 0;i < 54;++i) {
//		cout << card[i];
//		if (i < 53) cout << " ";
//	}
//	system("pause");
//	return 0;
//}