#include <iostream>

using namespace std;

int BuySellStock(int *arr, int n){
    int bestBuy[100000];
    bestBuy[0]=INT_MAX;
    
        int maxProfit=0;

    for(int i=1;i<n;i++){
        bestBuy[i]=min(bestBuy[i-1], arr[i-1]);
        
    }

    for(int i=1;i<n;i++){
        int currProfit= arr[i-1]-bestBuy[i-1];
        maxProfit= max(currProfit,maxProfit);
    }
    
    cout<< "max profit of buying stock is "<<maxProfit;
}

int main(){

    int Prices[]={7,1,5,3,6,4};
    int n = sizeof(Prices)/sizeof(int);

    BuySellStock(Prices,n);



    return 0;
}