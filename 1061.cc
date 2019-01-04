//#include<cstdio>
//#include<cstdlib>
//#include<cstring>
//using namespace std;
//char str[4][80];
//char strD[7][5] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN"};
//int main() {
//	for (int i = 0;i < 4;++i) scanf("%s", str[i]);
//	char day[5];
//	int hour, minute, len, c = 2;
//	len = strlen(str[0]) > strlen(str[1]) ? strlen(str[1]) : strlen(str[0]);
//	for (int i = 0;i < len;++i) {
//		if (c == 2 && str[0][i] == str[1][i] && str[0][i] >= 'A' && str[0][i] <= 'G') {
//			strcpy(day, strD[str[0][i] - 'A']);
//			c--;
//		}
//		else if (c == 1 && str[0][i] == str[1][i]) {
//			if (str[1][i] >= 'A' && str[1][i] <= 'N') {
//				hour = str[1][i] - 'A' + 10;
//				break;
//			}
//			else if (str[1][i] >= '0' && str[1][i] <= '9') {
//				hour = str[1][i] - '0';
//				break;
//			}
//		}
//	}
//	len = strlen(str[2]) > strlen(str[3]) ? strlen(str[3]) : strlen(str[2]);
//	for (int i = 0;i < len;++i) {
//		if (str[2][i] == str[3][i] && ((str[2][i] >= 'a' && str[2][i] <= 'z')||
//			( str[2][i] >= 'A' && str[2][i] <= 'Z'))) {
//			minute = i;
//			break;
//		}
//	}
//	printf("%s %02d:%02d\n", day, hour, minute);
//	system("pause");
//	return 0;
//}