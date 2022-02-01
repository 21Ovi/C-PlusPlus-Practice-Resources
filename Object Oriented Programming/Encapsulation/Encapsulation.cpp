#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel {
private:
	string Name;
	string OwnerName;
	int SubscibersCount;
	list<string> PublishedVideoTitles;
public:
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscibersCount = 0;
	}

	void GetInfo() {
		cout << "Name : " << Name << endl;
		cout << "Owner Name : " << OwnerName << endl;
		cout << "SubscibersCount : " << SubscibersCount << endl;
		cout << "Videos: " << endl;
		for (string videoTitle : PublishedVideoTitles) {
			cout << videoTitle << endl;
		}
	}
	void Subscribe() {
		SubscibersCount++;
	}
	void Unsubscribe() {
		if (SubscibersCount > 0)
			SubscibersCount--;
	}
	void publishVideo(string title) {
		PublishedVideoTitles.push_back(title);
	}
};

void main()
{
	YouTubeChannel ytChannel("ThunderCoding", "Ovesh");
	ytChannel.publishVideo("JavaScript");
	ytChannel.publishVideo("NodeJs");
	ytChannel.publishVideo("ReactJs");

	ytChannel.Unsubscribe();
	ytChannel.Unsubscribe();
	ytChannel.GetInfo();

	system("pause>0");
}