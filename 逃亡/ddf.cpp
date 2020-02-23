#include "ddf.h"

void ddf::OutImage(HDC hdc,RECT rect, wstring path)
{
	HBITMAP bb = (HBITMAP)LoadImage(NULL, path.c_str(), IMAGE_BITMAP, rect.right - rect.left,
		rect.top - rect.bottom, LR_LOADFROMFILE);
	HDC dc = CreateCompatibleDC(hdc);
	SelectObject(dc, bb);
	BitBlt(hdc, rect.left, rect.top, rect.right - rect.left,
		rect.top - rect.bottom, dc, 0, 0, SRCCOPY);
}


//在LoadFormTxt预处理最短路
//返回值：0 = 上，1=下，2=左，4=右

//你写下面这个函数把，我先刷题去了
int ddf::Get_PFA(POINT a, POINT b)
{
	
}

bool ddf::loadFromTxt(wstring path)
{
	FILE* fp; _wfopen_s(&fp, path.c_str(), L"r");
	if (!fp)return false;
	int n, m;
	fscanf_s(fp, "%d%d", &n, &m);
	for (int i = 0; i < n; i++)
		fgets(s[i], m + 1, fp);
}
