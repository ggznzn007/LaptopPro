#include <iostream>

using namespace std;

int main(void)
{

    int num1, num2, num3, temp;
   cin>>num1>>num2>>num3;

    //������� num1,num2,num3 �� ������ num2�� ����Ѵ�.
    // ex 7 3 4
    // 1. num1�� num2�� ���Ͽ� ���� ���� num1�� ���� �Ѵ�. ->3 7 4
    // 2.

    if (num1 >= num2) 
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }
    if (num2 >= num3)
    {
        temp = num3;
        num3 = num2;
        num2 = temp;
    }
    if (num1 >= num2)
    {
        temp = num2;
        num2 = num1;
        num1 = temp;
    }

    cout<<num2;


    return 0;
}