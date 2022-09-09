#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel
{
public:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> Video_Titles;

	YouTubeChannel(string name, string ownerName, long subs)
	{
		cout << "ENTER NAME OF YT CHANNEL :";
		cin >> name;
		cout << " ENTER NAME OF CHANNEL OWNER : ";
		cin >> ownerName;
		cout << "ENTER SUBSCRIBER COUNT OF THE CHANNEL :";
		cin >> subs;

		Name = name;
		OwnerName = ownerName;
		SubscribersCount = subs;

	}
	void OutputInfo()
	{
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "SubscribersCount: " << SubscribersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : Video_Titles)
		{
			cout << videoTitle << endl;
		}
	}
};

int main_encap()
{
	YouTubeChannel ytChannel("H6MYMAN", "Abhiram Suradkar", 20000);

	ytChannel.OutputInfo();

	ytChannel.Video_Titles.push_back("MW Gameplay ");
	ytChannel.Video_Titles.push_back("MW 2 HYPE ");
	ytChannel.Video_Titles.push_back("MW 2 Campaign Gameplay ");


	system("pause>0");
	return 0;
}