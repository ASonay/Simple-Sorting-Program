#include "order.hh"

vector<double> FiletoVector(const string FileName){
  
  fstream source(FileName,ios_base::in);
  vector<double> arra;
  double el;

  while(source >> el)
    arra.push_back(el);

  return arra;
  
}

int main(int argc,  char **argv)
{
  string FileName(argv[1]);
  vector<double> num = FiletoVector(FileName);
  
  Order PutOrder(num);
}
