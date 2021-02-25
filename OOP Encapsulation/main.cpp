#include <iostream>
#include <list>
#include <utility>

class YoutubeChannel {
private:
    std::string Name;
    std::string OwnerName;
    int SubscriberAmount;
    std::list<std::string> PublishedVideoTitle;
public:
    YoutubeChannel(std::string name, std::string ownerName){
        Name = std::move(name);
        OwnerName = std::move(ownerName);
        SubscriberAmount = 10;
    }
    void GetInfo(){
        std::cout << "Name: " << Name << std::endl;
        std::cout << "Owner Name: " << OwnerName << std::endl;
        std::cout << "Subscriber Amount: " << SubscriberAmount << std::endl;
        std::cout << "Videos: " << std::endl;
        for(const std::string& videoTitle : PublishedVideoTitle) {
            std::cout << videoTitle << std::endl;
        }
    }
    void Subscribe(){
        SubscriberAmount++;
    }
    void Unsubscribe(){
        if(SubscriberAmount > 0)
            SubscriberAmount--;
    }
    void PublishVideo(const std::string& title){
        PublishedVideoTitle.push_back(title);
    }
};

int main() {

    YoutubeChannel youtubeChannel("TkTech", "Tomislav Kraljic");
    youtubeChannel.PublishVideo("C++ Rocks!");

    youtubeChannel.Subscribe();
    youtubeChannel.Subscribe();
    youtubeChannel.Subscribe();

    youtubeChannel.Unsubscribe();
    youtubeChannel.Unsubscribe();

    youtubeChannel.GetInfo();

    YoutubeChannel youtubeChannel2("TheTechGeek", "Tommy Kay");
    youtubeChannel2.Subscribe();
    youtubeChannel.Subscribe();

    youtubeChannel.GetInfo();
    youtubeChannel2.GetInfo();
    return 0;
}
