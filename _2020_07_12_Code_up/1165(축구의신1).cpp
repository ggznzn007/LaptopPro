#include <iostream>

using namespace std;

int main()
{
    int time, score;

    cin >> time >> score;
    time = 90 - time;
    if (time == 0)
    {
        cout << score;//90�� ���Խ� ���� ���� ����
    }
    else
    {
        score += 1; //�������ڸ��� ���� ����
        if (time >= 5) {
            score += (time - 1) / 5;
        }
        cout << score;

        return 0;
    }
}