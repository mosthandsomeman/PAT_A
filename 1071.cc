//#include<cstdio>
//#include<cstdlib>
//#include<string>
//#include<sstream>
//#include<iostream>
//#include<map>
//using namespace std;
//string str, word;
//map<string, int> mmap;
//int main() {
//	getline(cin, str);
//	for (int i = 0;i < str.size();++i) {
//		if (str[i] >= 'A' && str[i] <= 'Z') str[i] += 32;
//		if (!((str[i] >= '0' && str[i] <= '9') || (str[i] >= 'a' && str[i] <= 'z'))) str[i] = ' ';
//	}
//	istringstream is(str);
//	while (is >> word) {
//		if (mmap.find(word) == mmap.end()) mmap[word] = 1;
//		else mmap[word]++;
//	}
//	int count = 0;
//	for (auto elem : mmap) {
//		if (elem.second > count) {
//			word = elem.first;
//			count = elem.second;
//		}
//	}
//	cout << word << " " << count << endl;
//	system("pause");
//	return 0;
//}