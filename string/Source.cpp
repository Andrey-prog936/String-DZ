#include "String.h"

int main()
{
	String str1("asde2");
	String str2("gds32");

	String str4 = str1 + str2;
	str4.Print();

	String str5 = str1 * str2;
	str5.Print(); // = sd2

	//cout << (str1 > str2) << endl;
	//cout << (str1 < str2) << endl;
	//cout << (str1 == str2) << endl;
	//cout << (str1 != str2) << endl;

	system("pause");
	return 0;
}