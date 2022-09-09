#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
	string Name;
	string OwnerName;
	int SubscribersCount;
	list<string> PublishedVideoTitles;
public:
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscribersCount = 0;
	}
	void GetInfo() {
		cout << "Name: " << Name << endl;
		cout << "OwnerName: " << OwnerName << endl;
		cout << "SubscribersCount: " << SubscribersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
	void Subscribe() {
		SubscribersCount++;
	}
	void Unsubscribe() {
		if (SubscribersCount > 0)
			SubscribersCount--;
	}
	void PublishVideo(string title) {
		PublishedVideoTitles.push_back(title);
	}
};

class CodingYTChannel :public YouTubeChannel
{
public:
	CodingYTChannel(string Cname, string CownerName) :YouTubeChannel(name, ownerName)
	{

	}
};

int main_inheritance()
{
	CodingYTChannel yt("Abhiram's Codex", "Abhiram Suradkar ")

		return 0;
	system("pause>0");

}