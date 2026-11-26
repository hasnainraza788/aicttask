#include <iostream>
using namespace std;

void add(int a[], int n, int value);
{
	a[n] = value;
}


void insert(int a[], int n, int position, int value){
	for(int i = n; i > position; i--){
		a[i] = a[i-1];
	}
	
	a[position] = value;
}


void deletion(int a[], int n, int value){
	for (int i = value; i <n - 1; i++){
		a[i] = a[i+1];
	}
	
	n--;
}


int search (int a[], int n, int key){
	for (int i = 0; i < n; i++){
		if (a [i] == key) {
			return i;
		}
	}
	return -1;
}

void display(int a [], int n){
	for (int i = 0; i <n; i++){
		cout << a[i] << " ";
	}
	cout << endl;
}


void highest(int a[], int n){
	int max = a[0];
	
	for(int i = 1; i < n; i++){
		if (a [i] > max){
			max = a[i];
		}
	}
	
	cout << "Highest marks: " << max << endl;
}

void lowest(int a[], int n){
	int min = a[0];
	
	for (int i = 1; i < n; i++){
		i (a[i] < min) {
			min = a[i];
		}
	}
	
	cout << "Lowest marks: " << min << endl;
}


void average(int a[], int n){
	int sum = 0;
	
	for (int i = 0; i < n; i++){
		sum = sum + a[i];
	}
	
	cout << "Average: " << (float) sum / n << endl;
}

void update(int a[], int n, int position, int value){
	a[position] = value;
}


int main(){
	
	int a [100] = {10, 20, 30, 40, 50};
	int n = 5;
	
	add(a, n, 2, 25);
	n++;
}
