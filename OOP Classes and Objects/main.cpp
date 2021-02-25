#include <iostream>
#include <list>

class YoutubeChannel {
public:
    std::string Name;
    std::string OwnerName;
    int SubscriberAmount;
    std::list<std::string> PublishedVideoTitle;
};

int main() {
    YoutubeChannel youtubeChannel;
    youtubeChannel.Name = "TKTech";
    youtubeChannel.OwnerName = "Tomislav Kraljic";
    youtubeChannel.PublishedVideoTitle = {"Hello World!"};
    youtubeChannel.SubscriberAmount = 100;

    std::cout << "Name: " << youtubeChannel.Name << std::endl;
    std::cout << "Owner Name: " << youtubeChannel.OwnerName << std::endl;
    std::cout << "Subscriber Amount: " << youtubeChannel.SubscriberAmount << std::endl;
    std::cout << "Videos: " << std::endl;
    for(std::string videoTitle : youtubeChannel.PublishedVideoTitle) {
        std::cout << videoTitle << std::endl;
    }
    return 0;
}
