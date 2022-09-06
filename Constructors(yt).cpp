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

	// constructor 
	youtube(string Name, string ownerName)
	{
		channel_name = Name;
		owner_name = ownerName;
		subscribers = 0;
	}
	//class method 
	void showInfo()
	{
		cout << "\nNAME OF THE CHANNEL : " << channel_name << endl;
		cout << "\nNAME OF CHANNEL OWNER : " << owner_name << endl;
		cout << "\nNUMBER OF SUBSCRIBERS  : " << subscribers << endl;
		cout << "\nVIDEOS PUBLISHED :" << endl;
		for (string Titles : Vid_Titles)
		{
			cout << Titles << endl;
		}
	}
};

int main_construc_yt()
{
	youtube yt("H6MYMAN", "Abhiram Suradkar");
	yt.Vid_Titles.push_back("(I.)Dream Face Reveal");
	yt.Vid_Titles.push_back("(II.)Philosophy of The End Dimnesion");
	yt.Vid_Titles.push_back("(III.)2 Noobs Attmept WR");

	youtube yt2("AmySings", "Amy");

	yt.showInfo();
	yt2.showInfo();
	system("pause>0");
	return 0;
}



//yt.channel_name = "H6MyNan";
	//yt.owner_name = "Abhiram Suradkar";
	//yt.subscribers = 100000;
	//yt.Vid_Titles = { "\n(I.)Dream Face Reveal", "(II.)Philosophy of The End Dimnesion" ,"(III.)2 Noobs Attmept WR" };

	//yt2.channel_name = "Serpentine  ";
	//yt2.owner_name = "Serpentine ";
	//yt2.subscribers = 10;
	//yt2.Vid_Titles = { "BRUH", "EH" ,"NOOB" };

