#include<iostream>
#include<list>
using namespace std;

class YouTubeChannel {
private:
	string Name;
	int SubscibersCount;
	list<string> PublishedVideoTitles;
protected:
	string OwnerName;
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

class CookingYouTubeChannel:public YouTubeChannel {
public:
	CookingYouTubeChannel(string name, string ownerName):YouTubeChannel(name,ownerName) {

	}
	void Practice() {
		cout << OwnerName <<" is Practicing cooking, learning new recipes..." << endl;
	}
};

void main()
{
	CookingYouTubeChannel cookingYtChannel("Amy's Kitchen","Amy");
	CookingYouTubeChannel cookingYtChannel2("Penny's Kitchen","Penny");
	cookingYtChannel.publishVideo("Apple Pie");
	cookingYtChannel.publishVideo("Raspberry Pie");
	cookingYtChannel.Subscribe();
	cookingYtChannel.Subscribe();
	cookingYtChannel.Subscribe();
	cookingYtChannel.GetInfo();
	cookingYtChannel.Practice();
	cookingYtChannel2.Practice();


	system("pause>0");
}