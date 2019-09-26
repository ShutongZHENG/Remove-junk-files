// Remove junk files.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <Windows.h>
#include <locale.h>

bool fun_AskUserIsScan(void);
int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
bool fun_AskUserIsScan(void){
	wchar_t wchar_YesOrNo;
	wprintf_s(L"是否需要扫描Windows操作系统垃圾文件（按下y键进行扫描或者q键退出程序）？");
	do
	{
		wscanf_s(L"%lc", &wchar_YesOrNo,1);
		getwchar();
	} while ((wchar_YesOrNo != L'y') && (wchar_YesOrNo != L'q'));

	if (wchar_YesOrNo == L'q')
	{
		return false;
	}
	return true;
}
void fun_EnumDirectory_listedTempFile(const 