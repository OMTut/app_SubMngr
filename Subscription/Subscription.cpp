#include "Subscription.h"
using namespace std;

Subscription::Subscription(string subName, string subCategory, double price, string subscriberName) :
    subName(subName), 
    subCategory(subCategory),
    price(price),
    subscriberName(subscriberName) 
{}

/***********************************
 * Name: getSubName
 * Description: returns the name of the subscription
************************************/
string Subscription::getSubName() { return subName;}

/***********************************
 * Name: getSubCategory
 * Description: returns the category of the subscription
************************************/
string Subscription::getSubCategory() { return subCategory;}

/***********************************
 * Name: getPrice
 * Description: returns the price of the subscription
************************************/
double Subscription::getPrice() { return price; }

/***********************************
 * Name: getSubscriberName
 * Description: returns the name of the subscriber
************************************/
string Subscription::getSubscriberName() { return subscriberName; }

/***********************************
 * Name: setSubName
 * Description: sets the name of the subscription
************************************/
void Subscription::setSubName(string newSubName) { subName = newSubName; }

/***********************************
 * Name: setSubCategory
 * Description: sets the category of the subscription
************************************/
void Subscription::setSubCategory(string newSubCategory) { subCategory = newSubCategory; }

/***********************************
 * Name: setPrice
 * Description: sets the price of the subscription
************************************/
void Subscription::setPrice(double newPrice) { price = newPrice; }

/***********************************
 * Name: setSubscriberName
 * Description: sets the name of the subscriber
************************************/
void Subscription::setSubscriberName(string newSubscriberName) { 
    subscriberName = newSubscriberName;
}