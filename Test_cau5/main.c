#include <Windows.h>
#include <stdio.h>

WINAPI func(LPVOID doiso)
{
	while (1)
	{
		printf("Hello\r\n");
		Sleep(2000);
	}
}

void main()
{
	HANDLE thread1 = CreateThread(NULL, 16, func, NULL, NULL, NULL);
	while (1)
	{
		printf("Xin chao\r\n");
		Sleep(2000);
	}
}