#include <iostream>
using namespace std;

void ArrayInOut()
{
	int num;
	int i, j, k;
	cout << "Enter the number of the seque" << endl;
	cin >> num;
	int A[num];
	for( i = 0; i < num; i++ )
	{
	cout << "A[" << i << "]=" << endl;
	cin >> A[i];
	}
	for( i = 0; i < num; i++ )
	{
	cout << "A[" << i << "]=" << A[i] << endl;
	}
	
	return 0;
}

int main(){
	ArrayInOut;
	return 0;
}
