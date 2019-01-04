//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<string>
//#include<vector>
//#include<algorithm>
//#include<map>
//#include<iostream>
//using namespace std;
//int N;
//int cost[24] = { 0 };
//char off[10] = "off-line";
//char onn[10] = "on-line";
//struct Node
//{
//	int mon, day, hour, min;
//	char tag[10];
//}node;
//map<string, vector<Node> > mmap;
//bool cmp(Node & a, Node & b) {
//	if (a.day != b.day) return a.day < b.day;
//	else if (a.hour != b.hour) return a.hour < b.hour;
//	else return a.min < b.min;
//}
//void calulate(Node a, Node b, int & lasting, double & itemC) {
//	while (1) {
//		++lasting;
//		itemC += cost[a.hour];
//		++a.min;
//		if (a.min == 60) {
//			++a.hour, a.min = 0;
//		}
//		if (a.hour == 24) {
//			++a.day, a.hour = 0;
//		}
//		if (a.day == b.day && a.hour == b.hour && a.min == b.min) {
//			break;
//		}
//	}
//}
//int main() {
//	for (int i = 0;i < 24;++i) scanf("%d", cost + i);
//	scanf("%d", &N);
//	string name;
//	for (int i = 0;i < N;++i) {
//		cin >> name;
//		scanf("%d:%d:%d:%d %s", &node.mon,
//			&node.day, &node.hour, &node.min, node.tag);
//		if (mmap.find(name) == mmap.end()) {
//			vector<Node> tmp;
//			tmp.push_back(node);
//			mmap[name] = tmp;
//		}
//		else {
//			mmap[name].push_back(node);
//		}
//	}
//	for (auto elem : mmap) {
//		auto vec = elem.second;
//		sort(vec.begin(), vec.end(), cmp);
//		bool conti = false;
//		for (int i = 0;i < vec.size() - 1;++i) {
//			if (strcmp(vec[i].tag, onn) == 0 && strcmp(vec[i + 1].tag, off) == 0) {
//				conti = true;
//			}
//		}
//		if (!conti) continue;
//		double total = 0, itemC = 0;
//		int lasting = 0;
//		printf("%s %02d\n", elem.first.c_str(), vec[0].mon);
//		for (int i = 0;i < vec.size() - 1;++i) {
//			itemC = 0, lasting = 0;
//			if (strcmp(vec[i].tag, onn) == 0 && strcmp(vec[i + 1].tag, off) == 0) {
//				calulate(vec[i], vec[i + 1], lasting, itemC);
//				total += itemC;
//				printf("%02d:%02d:%02d %02d:%02d:%02d %d $%.2f\n", vec[i].day, vec[i].hour, vec[i].min,
//					vec[i + 1].day, vec[i + 1].hour, vec[i + 1].min, lasting, itemC / 100);
//			}
//		}
//		if(total != 0)
//			printf("Total amount: $%.2f\n", total/100);
//	}
//	system("pause");
//	return 0;
//}