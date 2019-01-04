//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//#include<vector>
//using namespace std;
//int n, change = 0, flag = 0;
//struct Node
//{
//	char name[12], pass[12];
//};
//vector<Node> vec;
//bool check(char * str, int len) {
//	for (int i = 0;i < len;++i) {
//		if (str[i] == '1' || str[i] == '0' || str[i] == 'l' || str[i] == 'O') {
//			return true;
//		}
//	}
//	return false;
//}
//int main() {
//	scanf("%d", &n);
//	for (int i = 0;i < n;++i) {
//		Node node;
//		scanf("%s %s", node.name, node.pass);
//		if (check(node.pass, strlen(node.pass))) vec.push_back(node);
//	}
//	if (vec.size() == 0) {
//		if (n == 1) printf("There is 1 account and no account is modified\n");
//		else printf("There are %d accounts and no account is modified\n", n);
//	}
//	else {
//		printf("%d\n", vec.size());
//		for (int i = 0;i < vec.size();++i) {
//			int len = strlen(vec[i].pass);
//			for (int j = 0;j < len;++j) {
//				switch (vec[i].pass[j])
//				{
//				case '1': vec[i].pass[j] = '@'; break;
//				case '0': vec[i].pass[j] = '%'; break;
//				case 'l': vec[i].pass[j] = 'L'; break;
//				case 'O': vec[i].pass[j] = 'o'; break;
//				}
//			}
//			printf("%s %s\n", vec[i].name, vec[i].pass);
//		}
//	}
//	system("pause");
//	return 0;
//}