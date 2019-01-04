//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<string>
//#include<iostream>
//#include<algorithm>
//#include<sstream>
//#include<vector>
//#include<set>
//#include<map>
//using namespace std;
//int n, m;
//struct Node
//{
//	string ID, year;
//	string title, auther, publisher;
//	vector<string> keyWords;
//}node;
//
//map<string, set<string> > res;
//vector<Node> vec;
//
//void insert(string str, string id) {
//	if (res.find(str) == res.end()) {
//		set<string> tmp;
//		tmp.insert(id);
//		res[str] = tmp;
//	}
//	else {
//		res[str].insert(id);
//	}
//}
//
//int main() {
//	cin >> n;
//	getchar();
//	string key, words, query, subStr;
//	for (int i = 0;i < n;++i) {
//		getline(cin, node.ID);
//		getline(cin, node.title);
//		getline(cin, node.auther);
//		getline(cin, key);
//		istringstream is(key);
//		node.keyWords.clear();
//		while (is >> words) {
//			node.keyWords.push_back(words);
//		}
//		getline(cin, node.publisher);
//		getline(cin, node.year);
//		vec.push_back(node);
//		insert(node.title, node.ID);
//		insert(node.auther, node.ID);
//		insert(node.publisher, node.ID);
//		insert(node.year, node.ID);
//		for (int i = 0;i < node.keyWords.size();++i) {
//			insert(node.keyWords[i], node.ID);
//		}
//	}
//	cin >> m;
//	getchar();
//	for (int i = 1;i <= m;++i) {
//		getline(cin, query);
//		int j = 0;
//		while (query[j] != ':') ++j;
//		j += 2;
//		subStr = query.substr(j);
//		if (res.find(subStr) == res.end()) cout << query << endl << "Not Found" << endl;
//		else {
//			cout << query << endl;
//			for (auto elem : res[subStr]) {
//				cout << elem << endl;
//			}
//		}
//	}
//
//	system("pause");
//	return 0;
//}
//
////for (int i = 0;i < n;++i) {
////	cout << vec[i].ID << endl;
////	cout << vec[i].title << endl;
////	cout << vec[i].auther << endl;
////	for (int j = 0;j < vec[i].keyWords.size();++j) {
////		cout << vec[i].keyWords[j];
////		if (i < vec[i].keyWords.size() - 1) cout << " ";
////		else cout << endl;
////	}
////	cout << vec[i].year << endl;
////}