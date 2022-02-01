#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscibersCount;
	list<string> PublishedVideoTitles;

	YouTubeChannel(string name,string ownerName) {
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
};

void main()
{
	YouTubeChannel ytChannel("ThunderCoding","Ovesh");
	ytChannel.PublishedVideoTitles.push_back("JavaScript");
	ytChannel.PublishedVideoTitles.push_back("NodeJs");
	ytChannel.PublishedVideoTitles.push_back("ReactJs");
	YouTubeChannel ytChannel2("FeelThunder", "Ovi");

	ytChannel.GetInfo();
	ytChannel2.GetInfo();

	system("pause>0");
}