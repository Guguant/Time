/**
*a song by 黄伟文
* give you ten years later
*/


#include <iostream>
#include <cstdlib>
#include <windows.h>
using namespace std;

void stop()
{
    Sleep(500);
}

bool str()
{
    string str1 = "op";
    cin >> str1;
    if(str1 == "exit")
    {
        cout << "exit == > " << endl;
        cout << "3..." << endl;
        Sleep(1000);
        cout << "2..." << endl;
        Sleep(1000);
        cout << "1..." << endl;
        Sleep(1000);
        cout << "0...." << endl;
        exit(0);
    }
    else
    {
        str();
    }
}
int main()
{
    system("title 十年后");
    system("color 0D");
    cout << "给十年后的我" << endl;
    stop();
    cout << "专辑： Concert YY 黄伟文作品展 演唱会" << endl;
    stop();
    cout << "歌手： 黄耀明 / 容祖儿 / 苏永康 / 薛凯琪 / 陈奕迅 / 何韵诗 / 黄伟文"<< endl;
    stop();
    cout << endl;
    stop();
    cout << "这十年来做过的事" << endl;
    stop();
    cout << "能令你无悔 骄傲吗" << endl;
    stop();
    cout << "那时候你所相信的事"<< endl;
    stop();
    cout << "没有被动摇吧？" << endl;
    stop();
    cout << "对象和缘份已出现"<< endl;
    stop();
    cout << "成就也还算不赖吗？"<< endl;
    stop();
    cout << "旅途上你增添了经历"<< endl;
    stop();
    cout << "又有让棱角　消失吗？" << endl;
    stop();
    cout << "软弱吗？"<< endl;
    stop();
    cout << "你成熟了　不会失去格调吧？" << endl;
    stop();
    cout << "当初坚持还在吗？"<< endl;
    stop();
    cout << "刀锋不会　磨钝了吧？"<< endl;
    stop();
    cout << "老练吗？"<< endl;
    stop();
    cout << "你情愿变得聪明而不冲动吗？" << endl;
    stop();
    cout << "但变成　步步停下三思 会累吗？" << endl;
    stop();
    cout << "快乐吗？" << endl;
    stop();
    cout << "你还是记得你跟我约定吧？" << endl;
    stop();
    cout << "区区几场成败里　应该不致 麻木了吧？" << endl;
    stop();
    cout << "快乐吗？" << endl;
    stop();
    cout << "你忘掉理想　只能忙於生活吗？ " << endl;
    stop();
    cout << "别太迟　又十年後至想 快乐吗？" << endl;
    stop();
    str();
    system("pause");
    return 0;
}
