#include <iostream>

using namespace std;

int main()
{
	string s, output;
	cin >> s;
	while (s.size() > 250)
	{
		cout << "Input is larger than maximum length of 250\n";
		cin >> s;
	}
	output = s;
	if (s[0] == '0')
		output[0] = '0';
	else output[0] = '1';
	for (int i = 1; i < s.size(); i++)
	{
		if (s[i] == s[i - 1])
			output[i] = '0';
		else output[i] = '1';
	}
	cout << output << endl;
}