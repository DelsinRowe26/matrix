#include <iostream>
#include <time.h>
using namespace std;

int main() {
	srand(time(0));
	int n, gldiog = 1, a0=0, a1=0, a2 = 0, b0 = 0, b1 = 0, b2 = 0, pbdiog, c2, c0, c1;
	n = 3;
	int a[10][10];
	// заполнение
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			a[i][j] = (-100) + rand() % (100-(-100));
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			if (i == j) {
				//gldiog = a[i][j];
				gldiog = gldiog * a[i][j];
			}
			//cout << i << j;
			if (j == 1 && i == 0) {
				
				a0 = a[i][j];
				j++;
				b0 = a[i][j];
				j--;
				j--;
				c1 = a[i][j];
				j++;
			}
			else if (j == 2 && i == 1) {
				a1 = a[i][j];
				i++;
				j--;
				b1 = a[i][j];
				i--;
				c2 = a[i][j];
				j++;
				i++;
				c0 = a[i][j];
				i--;
			}
			else if (j == 0 && i == 2) {
				a2 = a[i][j];
				i--;
				b2 = a[i][j];
				i++;
			}
		}
	}
	pbdiog = b0 * a2 * c2;
	gldiog = gldiog + (a0 * a1 * a2) + (b0 * b1 * b2) - pbdiog - (b2 * a0 * c0) - (a1 * b1 * c1);
	cout << gldiog;
	return 0;
}