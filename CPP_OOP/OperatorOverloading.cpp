#include <iostream>
#include <string>
#include <list>
using namespace std;

//In C++ We can create special type of functions called operator functions.
// We can define in the operator function - How a certain operator will behave in specific data type


//User defined data type
struct YoutubeChannel {
	string Name;
	int SubscribersCount;

	YoutubeChannel(string name, int subscriberscount) {
		Name = name;
		SubscribersCount = subscriberscount;
	}
	bool operator==(const YoutubeChannel& channel) const{
		return this->Name == channel.Name;
	}

};

//Operator overloaded , syntax  operator operator to overload ( pass objects as arguments).
ostream& operator<<(ostream& COUT, YoutubeChannel& ytChannel) { // We are using by using reference , we are passing original objects.
	COUT << "Name: " << ytChannel.Name << endl;
	COUT << "Subscribers: " << ytChannel.SubscribersCount << endl;
	return COUT;
} //Created as a global functions.

struct MyCollection {
	list<YoutubeChannel>myChannels;

	void operator+=(YoutubeChannel& channel) {
		this->myChannels.push_back(channel);
		//This is member function of the structure , receives only one parameter.
	}
	void operator-=(YoutubeChannel& channel) {
		this->myChannels.remove(channel);
		//This is member function of the structure , receives only one parameter.
	}
};

ostream& operator<<(ostream& COUT, MyCollection& mycollection) {
	for (YoutubeChannel ytchannel : mycollection.myChannels)
		COUT << ytchannel << endl;
	return COUT;
}

//Members of class are private by default , Members of structure are public by default
int main()
{
	YoutubeChannel yt1 = YoutubeChannel("Shiva", 75000);
	YoutubeChannel yt2 = YoutubeChannel("ShivaRam", 35000);
	//cout << yt1<<yt2; //Overload insertion operator - using operator functions.More common way to use.
	//operator<<(cout, yt1); //Invoking as a function.

	MyCollection mycollection;
	mycollection += yt1;
	mycollection += yt2;
	//mycollection -= yt2;
	cout << mycollection;
	cin.get();
}