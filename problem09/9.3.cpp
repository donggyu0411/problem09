// ���� ��� for���� ����Ͽ� ������ �迭�� ���빰�� ���
#include <iostream>
using namespace std;

int main()
{
	int arr[2][3] = { {1,2,3},{4,5,6} };

	for (int(&row)[3] : arr)  // int 3ĭ¥�� �迭�� ����Ű�� ���۷���
	{
		for (int num : row)
		{
			cout << num << " ";
		}
		cout << endl;
	}
}