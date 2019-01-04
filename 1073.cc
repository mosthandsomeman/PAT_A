//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<iostream>
//#include<algorithm>
//using namespace std;
//string str, subPre, subAft;
//int main() {
//	getline(cin, str);
//	bool flag = str[0] == '+' ? true : false;
//	str.erase(0, 1);
//	int posE;
//	for (int i = 0;i < str.size();++i) {
//		if (str[i] == 'E') {
//			posE = i;
//			break;
//		}
//	}
//	subPre = str.substr(0, posE);
//	subAft = str.substr(posE + 1);
//	int ba = atoi(subAft.c_str());
//	if (ba > 0) {
//		for (int i = 0;i < subPre.size();++i) {
//			if (subPre[i] == '.') {
//				int left = subPre.size() - i - 1;
//				if (ba > left) {
//					subPre.insert(subPre.size(), ba - left, '0');
//					subPre.erase(i, 1);
//				}
//				else if(ba < left) {
//					while (ba > 0) {
//						swap(subPre[i], subPre[i + 1]);
//						++i;
//						--ba;
//					}
//				}
//				else if (ba == left) {
//					subPre.erase(i, 1);
//				}
//			}
//		}
//	}
//	else {
//		subPre.insert(0, -ba, '0');
//		for (int i = 0;i < subPre.size();++i) {
//			if (subPre[i] == '.') {
//				subPre.erase(i, 1);
//				subPre.insert(1, 1, '.');
//			}
//		}
//	}
//	if (flag == false) subPre.insert(0, 1, '-');
//	cout << subPre << endl;
//	system("pause");
//	return 0;
//}