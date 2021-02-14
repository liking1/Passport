#include <iostream>
#include "ForeignPassport.h"

int main()
{
	ForeignPassport ps1("Tluhovskiy Vladislav Urievich", "VK", 327424689, { 1,6,2001 }, { 15,07,2016 });
	ps1.addVisa({ "Ukraine",{3,1,2021} });
	cout << ps1 << endl;
}