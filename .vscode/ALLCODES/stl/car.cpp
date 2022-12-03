#include<iostream>
#include<map>
using namespace std;


void findSales(map<string, int> cars, string model, int price){
    map<string,int> ::iterator it;
    for(it=cars.begin();it!=cars.end();it++){
        if(it->first==model){
            int cost=it->second*price;
            cout<<"Total sales of car: "<<cost<<endl;
            return;
        }
    }
    cout<<"Car not found in the list!!"<<endl;
   
}
int main(){
   
   map<string,int> cars_data;

   cars_data["ford"] = 90000;
     cars_data["BMW"] = 25468;
      cars_data["Creta"] = 3155278;

   findSales(cars_data, "BMW", 250000);
   findSales(cars_data, "alto", 250000);


  return 0;
}
