/*
#include <stdio.h>

int main()
{
	int arr[3][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};

	int* p1 = arr;  // arr은 안되지만 arr[0]은 가능함.
	int (*p2)[5] = arr;  // int형 5개 묶음을 가르키는 포인터p2라는 뜻임. 이렇게 선언해야 p2의 주소값을 증가시킬때마다 arr[0],arr[1]로 주소값이 변경됨 (배열포인터라고함)
						//그냥 일반 포인터에다가 arr을 넣으면 arr[0] -> arr[0][1] -> arr[0][2]처럼 1증가때 4바이트씩만 주소가 바뀜 

	int* p2[5] = { 100,200,300,400,500 }; // 포인터배열임. 위와 완전 다른거임. 인트형주소값을 저장하는 인트형포인터를 5개짜리 배열형식으로 만든것임.
										  // 쉽게 말해서 배열포인터는 1개의 포인터고, 포인터배열은 포인터가 여러개임. 다만 차이는
										  // 포인터배열은 그냥 int형의 주소값을 가르키는것이고 포인터배열은 int형배열의 주소값을 가르키는것임.

	printf("arr[3][5]의 바이트크기 : %d \n", sizeof(arr));
	printf("arr[3][5]의 배열의 개수 : %d \n", sizeof(arr) / sizeof(int));
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("arr의 주소값 : %p \n", arr);
	printf("arr[0]의 주소값 : %p \n", arr[0]);
	printf("arr[1]의 주소값 : %p \n", arr[1]);
	printf("arr[2]의 주소값 : %p \n", arr[2]);
	printf("p1의 값 : %p \n", p1);
	printf("ㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡㅡ\n");
	printf("p2의 값 : %p \n", p2);
	printf("p2의 값 : %p \n", p2 + 1);
	


	return 0;
}
*/