#include<iostream>
using namespace std;

//������ 1
void replacement(int ar[], int length);
void showAr(int ar[], int length);

//������ 2
void Degree(int* n, int m);

int main() {
	setlocale(LC_ALL, "ru");
	//������ 1

	int Arr[10] = { 1,2,3,4,5,6,7,8,9,10};

	cout << "������ 1\n����������� ������\n";
	showAr(Arr, 10);
	cout << endl;

	cout << "�������� ������\n";
	replacement(Arr,10);
	cout << endl;
	cout << endl;

	//������ 2
	cout << "������ 2\n������� �����:";
	int n,m;
	cin >> n;
	cout << "� ����� ������� ������ ��������? ";
	cin >> m;
	Degree(&n, m);
	cout << endl;



	return 0;
}
//������ 1
void replacement(int ar[], int length) {
	int* par;
	cout << "[";
	for (int i = 0; i < 10; i++) {
		par = &ar[i];
		if (*par % 2 == 0)
			*par -= 1;
		else
			*par += 1;
		cout << *par << ", ";
	}cout << "\b\b]";
}
void showAr(int ar[], int length) {
	cout << "[";
	for (int i = 0; i < 10; i++) {
		cout << ar[i] << ", ";
	}cout << "\b\b]";

}
//������ 2
void Degree(int* n, int m) {
	int a = *n;
	for (int i = 1; i < m; i++) {
		*n = a * *n;
	} a = *n;
	cout  << a;
}
