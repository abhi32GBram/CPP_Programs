#include <iostream>
using namespace std;
#include <list>

class youtube
{
public:
	string channel_name;
	string owner_name;
	int subscribers;
	list<string>Vid_Titles;
};

int main_yt()
{
	youtube	yt;
	yt.channel_name = "H6MyNan";
	yt.owner_name = "Abhiram Suradkar";
	yt.subscribers = 100000;
	yt.Vid_Titles = { "\n(I.)Dream Face Reveal", "(II.)Philosophy of The End Dimnesion" ,"(III.)2 Noobs Attmept WR" };


	cout << "\nNAME OF THE CHANNEL : " << yt.channel_name << endl;
	cout << "\nNAME OF CHANNEL OWNER : " << yt.owner_name << endl;
	cout << "\nNUMBER OF SUBSCRIBERS  : " << yt.subscribers << endl;
	cout << "\nVIDEOS PUBLISHED :" << endl;
	for (string Titles : yt.Vid_Titles)
	{
		cout << Titles << endl;
	}
	system("pause>0");
	return 0;
}

