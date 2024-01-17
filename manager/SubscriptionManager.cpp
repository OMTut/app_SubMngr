#include "SubscriptionManager.h"
#include <iostream>
using namespace std;

/***********************************
 * Name: addSubscription
 * Description: adds a subscription to the vector
************************************/
void SubscriptionManager::addSubscription(const Subscription& sub) {
    subscriptions.push_back(sub);
}

/***********************************
 * Name: displaySubscriptions
 * Description: displays all subscriptions in the vector
************************************/
void SubscriptionManager::displaySubscriptions() const {
    cout << "Subscriptions: " << endl;
}

