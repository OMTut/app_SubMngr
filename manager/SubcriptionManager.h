#include "../Subscription/Subscription.h"
#include <vector>
using namespace std;

class SubscriptionManager {
    private:
        vector<Subscription> subscriptions;

    public:
        void addSubscription(const Subscription& sub);
        //void editSubscription(const std::string& name, const Subscription& newSub);
        //void deleteSubscription(const std::string& name);
        void displaySubscriptions() const;
};