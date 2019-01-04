//#include<cstdio>
//#include<cstdlib>
//#include<cmath>
//typedef long int LI;
//struct Node
//{
//	LI up, down;
//};
//LI a, b;
//int gcd(int a, int b) {
//	return !b ? a : gcd(b, a % b);
//}
//Node reduce(Node node) {
//	if (node.up == 0) node.down = 1;
//	else {
//		LI a = gcd(abs(node.up), abs(node.down));
//		node.up /= a;
//		node.down /= a;
//	}
//	return node;
//}
//Node Add(Node a, Node b) {
//	Node resut;
//	resut.up = a.up * b.down + b.up * a.down;
//	resut.down = a.down * b.down;
//	return reduce(resut);
//}
//int main() {
//	int N;
//	Node result;
//	result.up = 0, result.down = 1;
//	scanf("%d", &N);
//	for (int i = 0;i < N;++i) {
//		Node tmp;
//		scanf("%ld/%ld", &tmp.up, &tmp.down);
//		tmp = reduce(tmp);
//		result = Add(result, tmp);
//	}
//	if (result.down == 1) printf("%ld\n", result.up);
//	else if (abs(result.up) >= abs(result.down)) {
//		if (result.up < 0) printf("-%ld %ld/%ld\n", abs(result.up / result.down), abs(result.up % result.down), result.down);
//		else printf("%ld %ld/%ld\n", abs(result.up / result.down), abs(result.up % result.down), result.down);
//	}
//	else {
//		if (result.up < 0) printf("-%ld/%ld\n", abs(result.up), result.down);
//		else printf("%ld/%ld\n", abs(result.up),result.down);
//	}
//	system("pause");
//	return 0;
//}