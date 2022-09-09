#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel 
{
private:
	string Name;
	int SubscribersCount;
	list<string> Video_Titles;

protected:
	string OwnerName;

public:
	YouTubeChannel(string name, string ownerName) 
	{
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}
	void GetInfo() 
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


	void Subscribe() 
	{
		SubscribersCount++;
	}
	void Unsubscribe() 
	{
		if (SubscribersCount > 0)
			SubscribersCount--;
	}
	void PublishVideo(string title) 
	{
		Video_Titles.push_back(title);
	}
};

class Coding_YT : public YouTubeChannel 
{
public:
	Coding_YT(string name, string ownerName) :YouTubeChannel(name, ownerName) 
	{

	}

	void Action() 
	{
		cout << OwnerName << " IS PRACITCING ADVANCED CODING AND IN A HACKATHON  !! " << endl;
	}
};

//
//class Football_yt : public YouTubeChannel
//{
//public:
//	Coding_YT(string name, string ownerName) :YouTubeChannel(name, ownerName)
//	{
//
//	}
//
//	void Action()
//	{
//		cout << OwnerName << " IS PRACITCING SKILLS AND ENDURANCE FOR MAX FITNESS   !! " << endl;
//	}
//};

int main_inheri()
{
	
	Coding_YT Coding_YT("H6' CODING CLUB ", "Abhiram");
	/*Football_yt footbal("H6' FOOTBALL CLUB ", "H6");*/

	
	/*football.GetInfo();*/
	Coding_YT.GetInfo();
	Coding_YT.Action();
	system("pause>0");
	return 0;
}