#pragma once
#include "framework.h"
#include "逃亡.h"
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;//这个ddf是干啥的 辅助
const int maxn = 1000;//1000*1000的图是最大值
char s[maxn][maxn];
class ddf
{
	int n, m;//长和宽
	void OutImage(HDC hdc,RECT rect,wstring path/*wstring是宽字符字符串，更好的处理中文.*/);//输出一张图片
	int Get_PFA(POINT a, POINT b);//获取最短路
	bool loadFromTxt(wstring path);
};