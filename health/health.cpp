
#include <iostream>
#include <Windows.h>
#include <cstdlib>
#include <stdio.h>
using namespace std;

int main()
{
    SYSTEMTIME st = {0};
    int s0_hour, s0_min;
    int h1, m1;
    char c;
    start:
        cout << "多久提醒一次呢？？(h : m)" << endl;
        cin >> h1 >> c >> m1;
        m1 = h1 * 60 + m1;//用分钟计算
        GetLocalTime(&st);
        s0_hour = st.wHour;
        s0_min = st.wMinute;

    while(1)
    {
         GetLocalTime(&st);
         if((st.wHour - s0_hour) * 60 + st.wMinute - s0_min == m1)
         {
            //printf("\a"); 让YOU本发出奇怪的声音
            MessageBoxA(0, "主人，休息下下吧！", "@|_| :)",1);
            //system("cls");
            goto start;
         }
         cout << st.wYear << " - " << st.wMonth << " - " << st.wDay << " " << st.wHour << " : " << st.wMinute << " : " << st.wSecond << endl;
    }
    system("pause");
    return 0;
}

