#include <iostream>
#include <list>

class YoutubeChannel {
public:
    std::string Name;
    std::string OwnerName;
    int SubscriberAmount;
    std::list<std::string> PublishedVideoTitle;

    YoutubeChannel(std::string name, std::string ownerName){
        Name = name;
        OwnerName = ownerName;
        SubscriberAmount = 0;
    }

    void GetInfo(){
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Owner Name: " << OwnerName << std::endl;
        std::cout << "Subscriber Amount: " << SubscriberAmount << std::endl;
        std::cout << "Videos: " << std::endl;
        for(std::string videoTitle : PublishedVideoTitle) {
            std::cout << videoTitle << std::endl;
        }
    }
};

int main() {

    YoutubeChannel youtubeChannel("TkTech", "Tomislav Kraljic");
    youtubeChannel.PublishedVideoTitle.push_back("New Video on C++");
    youtubeChannel.PublishedVideoTitle.push_back("HTML For Beginners");
    youtubeChannel.PublishedVideoTitle.push_front("CSS For Beginners");

    YoutubeChannel youtubeChannel2("TheTechGeek", "Tommy Kay");
    youtubeChannel2.PublishedVideoTitle.push_back("New Video on C++");
    youtubeChannel2.PublishedVideoTitle.push_back("HTML For Beginners");
    youtubeChannel2.PublishedVideoTitle.push_front("CSS For Beginners");

    youtubeChannel.GetInfo();
    youtubeChannel2.GetInfo();
    return 0;
}
