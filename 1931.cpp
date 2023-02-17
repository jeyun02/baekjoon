#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<vector>
using namespace std;
int value[10];
int main()
{
	int N, end, begin;
	vector<pair<int, int>> schedule;

	cin >> N ;
	for (int i = 0; i < N; i++)
	{
		cin >> begin >> end;
		// end, begin -> 종료 시각을 기준으로 정렬하기 위해
		schedule.push_back(make_pair(end, begin));

	}
	// vector의 첫번째부터 마지막까지를 오름차순 정렬.
	sort(schedule.begin(), schedule.end());
	int time = schedule[0].first;
	int count = 1;
	for (int i = 1 ;i < N; i++) 
	{
		if (time <= schedule[i].second )
		{
			count++;
			time = schedule[i].first;
		}
	}
	cout << count;
}