#include"Header.h"
#include "mathutils.h"
#include"dtgreet.h"
#include"rng.h"
using namespace std;

int main()
{
	/*cout << min(4, 34) << endl;
	cout << max(43, 545) << endl;
	cout << clamp(12, 78, 99) << endl;
	cout << dist(5, 6, 7, 8) << endl;

	dayGreeting(4, 3, 1234);
	timeGreeting(1, 34);
	isLeapYear(2020);*/
	seedRng(31);
	cout << rng() <<endl;
	cout << rngRange(12, 54) << endl;
	cout << rngb() << endl;
	cout << rngBchance(5) << endl;

	system("pause");
}