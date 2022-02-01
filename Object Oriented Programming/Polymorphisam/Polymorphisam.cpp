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
	int ContentQuality;
public:
	YouTubeChannel(string name, string ownerName) {
		Name = name;
		OwnerName = ownerName;
		SubscibersCount = 0;
		ContentQuality = 0;
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
	void CheckAnalytics() {
		if (ContentQuality < 5) 
			cout<<Name<<" Has bad Quality Content"<<endl;
		else
			cout<<Name<<" Has good Quality Content"<<endl;
	}
};

class CookingYouTubeChannel :public YouTubeChannel {
public:
	CookingYouTubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {

	}
	void Practice() {
		cout << OwnerName << " is Practicing cooking, learning new recipes..." << endl;
		ContentQuality++;
	}
};
class SingersYouTubeChannel :public YouTubeChannel {
public:
	SingersYouTubeChannel(string name, string ownerName) :YouTubeChannel(name, ownerName) {

	}
	void Practice() {
		cout << OwnerName << " is Taking Singing Lessions, learning new Songs..." << endl;
		ContentQuality++;
	}
};

void main()
{
	CookingYouTubeChannel cookingYtChannel("Penny's Kitchen", "Penny");
	SingersYouTubeChannel SingersYtChannel("BernedetteSings", "Bernedette");
	cookingYtChannel.Practice();
	SingersYtChannel.Practice();
	SingersYtChannel.Practice();
	SingersYtChannel.Practice();
	SingersYtChannel.Practice();
	SingersYtChannel.Practice();
	SingersYtChannel.Practice();
	SingersYtChannel.Practice();

	YouTubeChannel* yt1 = &cookingYtChannel;
	YouTubeChannel* yt2 = &SingersYtChannel;

	yt1->CheckAnalytics();
	yt2->CheckAnalytics();

	system("pause>0");
}