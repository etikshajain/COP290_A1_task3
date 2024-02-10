#include "main.h"

int main(int argc,char* argv[]){
  #ifdef DEBUG
  freopen("logs/debug.log","w",stderr);
  #endif
  if(argc<=1){
    cout<<"Insufficient arguments, exiting ...."<<endl;
    return 1;
  }

  string strategy = argv[1];
  if(strategy=="BASIC"){
    Basic* basic_strategy = new Basic(argv[2],stoi(argv[3]),stoi(argv[4]),argv[5],argv[6]);
    basic_strategy->run_strategy();
  }
  else if(strategy=="DMA"){
    DMA* dma_strategy = new DMA(argv[2],stoi(argv[3]),stoi(argv[4]),stoi(argv[5]),argv[6],argv[7]);
    dma_strategy->run_strategy();
  }
  else if(strategy=="DMA++"){
    DMApp* dmapp_strategy = new DMApp(argv[2],stoi(argv[3]),stoi(argv[4]),stoi(argv[5]),stoi(argv[6]),stod(argv[7]),stod(argv[8]),argv[9],argv[10]);
    dmapp_strategy->run_strategy();
  }
  if(strategy=="MACD"){
    MACD* macd_strategy = new MACD(argv[2],stoi(argv[3]),argv[4],argv[5]);
    macd_strategy->run_strategy();
  }
  else if(strategy=="LINEAR_REGRESSION"){
    LinearRegression* linreg_strategy = new LinearRegression(argv[2],stoi(argv[3]),stoi(argv[4]),argv[5],argv[6]);
    linreg_strategy->run_strategy();
  }

  return 0;
}