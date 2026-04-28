#include <bits/stdc++.h>
using namespace std;

class OrderFecade{
    public:
    int stock; bool paid; bool sent;
    OrderFecade(int s, bool p, bool sent){
        this->stock = s;
        this->paid = p;
        this->sent = sent;
    }

    bool isStockAvailable(int qty){
        return stock >= qty;
    }

    bool isOrderPaid(){
        return paid;
    }

    bool isEmailSent(){
        return sent;
    }

    void decrementStock(int qty){
        stock -= qty;
    }

    bool placeOrder(int q){
        if(!isStockAvailable(q)) return false;
        if(!isOrderPaid()) return false;
        if(!isEmailSent()) return false;
        decrementStock(q);
        return true;
    }
};


int main(){
    OrderFecade o(5, true, true);
    if(o.placeOrder(5)) cout << "Order Placed Successfully";
    else cout << "Order cannot be placed";
    return 0;
}
