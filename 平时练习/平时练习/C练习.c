#include<stdio.h>
#include<math.h> 
int main() {
	printf("\t\t\t\t\t  ***520快乐\n\n");            //可以将***改为名字。
	printf("\t\t\t\t绸缪束薪，\t\t三心在天。\n");          //为了输出格式好看进行居中。
	printf("\t\t\t\t今夕何夕，\t\t见此良人。\n");
	printf("\t\t\t\t子兮子兮，\t\t如此良人何！\n");
	for (double y = 1.9; y > -1.2; y -= 0.1) {
		for (double x = -1.8; x < 2.6; x += 0.04) {
			if (x * x + (y - pow(x * x, 1.0 / 3)) * (y - pow(x * x, 1.0 / 3)) <= 1) printf("6");  //完成爱心部分，这里使用的是心型曲线的直角坐标公式。
			else if (x <= -1.4 && x >= -1.7 && y <= 1.6 && y >= -1.1)   printf("6");  //这一个输出是完成 I 字。
			else if (x >= 1.4 && x <= 1.6 && y <= 1.6 && y >= -1.1)   printf("6");  //从这里开始的三个输出是完成  U  字.
			else if (x >= 2.3 && x <= 2.5 && y <= 1.6 && y >= -1.1)   printf("6");
			else if (x >= 1.6 && x <= 2.3 && y <= -0.7 && y >= -1.1)   printf("6");
			else printf(" ");              //前面之所以用else if而不是直接用if的原因是便于这里空格的输出。
		}
		printf("\n");
	}
	return 0;
}