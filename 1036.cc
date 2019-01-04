//#include<cstdio>
//#include<cstdlib>
//#include<algorithm>
//#include<vector>
//using namespace std;
//int n;
//struct Node
//{
//	char name[12], ID[12];
//	char sex;
//	int grade;
//};
//bool cmp(Node & a, Node & b) {
//	return a.grade < b.grade;
//}
//vector<Node> man, woman;
//
//int main() {
//	scanf("%d", &n);
//	for (int i = 0;i < n;++i) {
//		Node node;
//		scanf("%s %c %s %d", node.name, &node.sex, node.ID, &node.grade);
//		if (node.sex == 'M') man.push_back(node);
//		else woman.push_back(node);
//	}
//	sort(man.begin(), man.end(), cmp);
//	sort(woman.begin(), woman.end(), cmp);
//	if (woman.size() == 0) printf("Absent\n");
//	else printf("%s %s\n", woman[woman.size() - 1].name, woman[woman.size() - 1].ID);
//	if (man.size() == 0) printf("Absent\n");
//	else printf("%s %s\n", man[0].name, man[0].ID);
//	if (woman.size() == 0 || man.size() == 0) printf("NA\n");
//	else printf("%d\n", woman[woman.size() - 1].grade - man[0].grade);
//	system("pause");
//	return 0;
//}