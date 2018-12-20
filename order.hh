#include <vector>
#include <iostream>
#include <cstdlib>
#include <cassert>
#include <cmath>
#include <fstream>
#include <sstream>

using namespace std;

class Order
{
public:
  Order(vector<double> &var);
  void findmin(vector<double> &var);

private:
  vector<double> min;
  unsigned index;
  double minx;
  
};

Order::Order(vector<double> &var){

  unsigned varsize = var.size();
  
  for (unsigned i=0;i<varsize;i++){
    findmin(var);
    min.push_back(minx);
    var.erase(var.begin()+index);
  }
  
  for (unsigned i=0;i<min.size();i++)
    cout << i+1 <<". -- "<< min[i] << endl;

}

void Order::findmin(vector<double> &var){

  minx = 1.0e30;

  unsigned varsize = var.size();
  
  for (unsigned i=0;i<varsize;i++){
    if (var[i]<minx){
      minx = var[i];
      index = i;
    }
  }

}
