#include <iostream>
#include <stdio.h>

using namespace std;
int time(int hour_1,int minute_1,int second_1,int hour_2,int minute_2,int second_2)
{
  int hour = hour_1 - hour_2;
  int min = minute_1 - minute_2;
  int sec = second_1 = second_2;
  return (hour*60*60)+(min*60)+sec;
}
int main()
{
  cout << "Time : " <<time(11,23,45,7,15,20) << " S";
  getchar();
  return 0;
}