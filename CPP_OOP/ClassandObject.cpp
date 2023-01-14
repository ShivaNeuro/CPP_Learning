#include <iostream>
#include<list>
using namespace std;

class YoutubeChannel {
	/* Class */
public:
	string Name;
	string OwnerName;
	int subscribers;
	list<string> PublishedVideos;
};

int main() 
{
	YoutubeChannel channel; /* Object of type class*/
	channel.Name = "ShivaYT"; /* Attribute , available only if public, by default attributes are private */
	channel.OwnerName = "Shiva";
	channel.subscribers = 100;
	channel.PublishedVideos = { "Hello Video 1" , "Explanation of C++ Video 2" };

	cout << "Channel Name" << channel.Name << endl;
	cout << "Owner Name" << channel.OwnerName << endl;
	cout << "Subscribers" << channel.subscribers << endl;
	cout << "Videos" << endl;
	for (string video : channel.PublishedVideos) {
		cout << video << endl;
	}
	system("pause>0");
}