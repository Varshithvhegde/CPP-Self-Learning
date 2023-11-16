#include<iostream>
#include<map>
#include<thread>
#include<string>
#include<chrono>
using namespace std::chrono_literals;
void refreshForecast(std::map<std::string , int> forecastMap){
    while(true){
    for(auto& item : forecastMap){
        item.second++;
        std::cout<<item.first<<"--"<<item.second<<std::endl;
    }
    std::this_thread::sleep_for(2000ms);
    }
}
int main(){
    std::map<std::string , int> forecastMap = {
        {"New york",15},
        {"Bangalore",25},
        {"Mangalore",30}
    };
    std::thread bg_worker(refreshForecast,forecastMap);
    bg_worker.join();

}