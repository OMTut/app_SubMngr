#include <string>
using namespace std;

class Subscription {
    private:
        string subName;
        string subCategory;
        double price;
        string subscriberName;
    
    public: 

        //constructor
        Subscription(string subName, string subCategory, double price, string subscriberName);

        // Getters for private fields
        string getSubName();
        string getSubCategory();
        double getPrice();
        string getSubscriberName();

        // Setters for private fields
        void setSubName(string newSubName);
        void setSubCategory(string newSubCategory);
        void setPrice(double newPrice);
        void setSubscriberName(string newSubscriberName);
};