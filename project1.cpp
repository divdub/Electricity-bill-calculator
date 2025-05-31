#include<iostream>
using namespace std;
class Room{
    public:
    float finalreading;
   static  float othercost;
    static float tempcost;
    float cost; 
    
    //constructor
      void getUnit(float oldunit, float newunit){
         finalreading = newunit - oldunit;
         
      }
      void totalcost(float perUnit){
            cost = finalreading * perUnit;
            tempcost = tempcost + this->cost;
      }
     static  void others(float totalBill,int n){
            othercost = (totalBill-tempcost) / (n+1);
            cout<<"Others: "<<othercost<<endl;
      }
      float finalcost(){
        this->cost = this->cost + othercost;
        return this->cost;
      }
      

};
float Room::othercost = 0;
float Room::tempcost = 0;
int main(){
    float totalBill;
    float totalUnit;
    float perUnit ;
    int room;
    cout<<"Enter Total bill cost and total Unit :"<<endl;
    cin>>totalBill>>totalUnit;
    cout<<"Enter total no. of rent rooms : "<<endl;
    cin>>room;
    perUnit = totalBill/totalUnit;
    cout<<"Per unit :"<<perUnit<<endl;

    Room r[3];
    for(int i=0;i<room;i++){
      float oldunit,newunit;
      cout<<"Enter old Unit for room "<<i+1<<"= ";
      cin>>oldunit;
      cout<<"Enter newl Unit for room "<<i+1<<"= ";
      cin>>newunit;
      r[i].getUnit(oldunit,newunit);
      r[i].totalcost(perUnit);
    }
  Room::others(totalBill,room);
    for(int i=0;i<room;i++){
      cout<<"Final cost for room "<<i+1<<"="<<r[i].finalcost()<<endl;
    }
    return 0;
}
