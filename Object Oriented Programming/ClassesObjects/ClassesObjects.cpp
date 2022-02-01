#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel {
public:
	string Name;
	string OwnerName;
	int SubscibersCount;
	list<string> PublishedVideoTitles;
};

void main() 
{
	YouTubeChannel ytChannel;
	ytChannel.Name = "ThunderCoding";
	ytChannel.OwnerName = "Ovesh";
	ytChannel.SubscibersCount = 2100;
	ytChannel.PublishedVideoTitles = { "javaScript","NodeJS","C++","ReactJS","Java","Python","HTML","CSS","R","C","PHP","C#" };

	cout << "Name : " << ytChannel.Name << endl;
	cout << "Owner Name : " << ytChannel.OwnerName << endl;
	cout << "SubscibersCount : " << ytChannel.SubscibersCount << endl;
	cout << "Videos" << endl;
	for (string videoTitle : ytChannel.PublishedVideoTitles) {
		cout << videoTitle << endl;
	}

	system("pause>0");
}