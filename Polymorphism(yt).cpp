#include <iostream>
#include <list>
using namespace std;

class YouTubeChannel {
private:
	string Name;
	int SubscribersCount;
	list<string> Video_Titles;
protected:
	string OwnerName;
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
		for (string videoTitle : Video_Titles) {
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
		Video_Titles.push_back(title);
	}
};

class Coding_YT :public YouTubeChannel {
public:
	Coding_YT(string name, string ownerName) :YouTubeChannel(name, ownerName) {

	}
	void Practice() {
		cout << OwnerName << " is practicing cooking, learning new recipes, experimenting with spices..." << endl;
	}
};

int main_poly()
{
	Coding_YT Coding_YT("Amy's Kitchen", "Amy");
	return 0;
	system("pause>0");
}