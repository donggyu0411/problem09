// ������ ��� for���� ����Ͽ� ������ �迭�� ���빰�� ���
#include <iostream>
using namespace std;

int main()
{
	int arr[2][3] = { {1,2,3},{4,5,6} };

	for (int(*row)[3] = arr; row < arr + 2; row++)
	{
		for (int* num = *row; num < *row + 3; num++)
		{
			cout << *num << ' ';
		}
		cout << endl;
	}
}