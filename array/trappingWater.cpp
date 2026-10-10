#include <iostream>

using namespace std;

void trappingWater(int *hieght, int n){
    //Auxilary (helpimg array)
    int leftMax[20000], rightMax[20000];
    leftMax[0]=hieght[0];
    rightMax[n-1]=hieght[n-1];

    //count left maximum 
    for(int i=1;i<n;i++){
        leftMax[i]=max(leftMax[i-1], hieght[i-1]);
        // cout<<leftMax[i];
        // cout<<",";
    }
     // right max

     for(int i=n-2;i>=0;i--){
        rightMax[i]=max(rightMax[i+1],hieght[i+1]);

        //cout<<rightMax[i]<<",";


     }
     int waterTrapped = 0;

     for(int i =0;i<n;i++){
        int currWater=min(leftMax[i],rightMax[i])-hieght[i];
        if(currWater>0){
            waterTrapped+=currWater;
        }
        
     }
cout<<"my water trapped is: "<<waterTrapped<<endl;

    
    
   

}

int main(){
    int hieght[7]={4,2,0,6,3,2,5};
    int n =sizeof(hieght)/sizeof(int);

    trappingWater(hieght,n);

    return 0;
}