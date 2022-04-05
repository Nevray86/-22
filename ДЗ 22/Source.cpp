#include<iostream>
using namespace std;

//Задача 1
void replacement(int ar[], int length);
void showAr(int ar[], int length);

//Задача 2
void Degree(int* n, int m);

int main() {
	setlocale(LC_ALL, "ru");
	//Задача 1

	int Arr[10] = { 1,2,3,4,5,6,7,8,9,10};

	cout << "Задача 1\nИзначальный массив\n";
	showAr(Arr, 10);
	cout << endl;

	cout << "Итоговый массив\n";
	replacement(Arr,10);
	cout << endl;
	cout << endl;

	//Задача 2
	cout << "Задача 2\nВведите число:";
	int n,m;
	cin >> n;
	cout << "В какую степень хотите возвести? ";
	cin >> m;
	Degree(&n, m);
	cout << endl;



	return 0;
}
//Задача 1
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
//Задача 2
void Degree(int* n, int m) {
	int a = *n;
	for (int i = 1; i < m; i++) {
		*n = a * *n;
	} a = *n;
	cout  << a;
}
