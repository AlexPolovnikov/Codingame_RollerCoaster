// Ticket.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include "pch.h"
//#include <omp.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int L;
	int C;
	int N;
	long int money = 0;
	int count = 0;
	int cnt = 0;
	int Pi = 0;
	int i=0;
	cin >> L >> C >> N; cin.ignore();
	int* pi = new int[N];

	for (i; i < N; i++) {
		while (!(cin >> pi[i]) || (cin.peek() != '\n')||(cin.get()==' '))
		{
			cin.clear();
			while (cin.get() != '\n');
			//N--;
		}
	}

	while (C--) {
		cnt = 0;
		Pi = pi[count%N];
		while(((Pi + pi[(count + 1) % N]) <= L) && (cnt < N-1)){
				Pi += pi[(count + 1) % N];
				count++;
				cnt++;
			}
		money += Pi;
		count++;
		}
		
	cout << money << endl;
}