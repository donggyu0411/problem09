// 범위 기반 for문을 사용하여 이차원 배열의 내용물을 출력
#include <iostream>
using namespace std;

int main()
{
	int arr[2][3] = { {1,2,3},{4,5,6} };

	for (int(&row)[3] : arr)  // int 3칸짜리 배열을 가리키는 레퍼런스
	{
		for (int num : row)
		{
			cout << num << " ";
		}
		cout << endl;
	}
}