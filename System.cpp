#include <iostream>
using namespace std;
int main(){
   float x1; 
   float y1;
   float invx;
   float logx;
   float logy; 
   float invasw;
   float yt;
   float realy;
   float realx; 
   float x2;
   float y2;
   float i1;
   float midy;
   float midnum; 
   float i2;
   float asw1;
   float asw2;
   float opnum;
   float opy; 
   cout << " |answer = ?x + ?y + ?" << endl << " |answer = ?x + ?y + ?" <<endl;
    cout << "ответ 1 строки системы" <<endl;
    cin >> asw1;
    cout << "ответ 2 строки системы" <<endl;
    cin >> asw2;
    cout << "колличество х в первой строке" <<endl;
    cin >> x1;
    cout << "колличество х во второй строке" <<endl;
    cin >> x2;
    cout << "колличество y в первой строке" <<endl;
    cin >> y1;
    cout << "колличество y во второй строке" <<endl;
    cin >> y2;
    cout << "если есть число в первой строке" <<endl;
    cin >> i1; 
    cout << "если есть число во второй строке" <<endl;
    cin >> i2;
    
    invx= x2*-1; 
    invasw = asw2*-1;
    logx= (invasw + i2)/invx;
    logy= y2/invx;
  
    float invx1;
    float invasw1;
    float logx1;
    float logy1;
    invx1= x1*-1; 
    invasw1 = asw1*-1;
    logx1= (invasw1 + i1)/invx1;
    logy1= y1/invx1; 
    cout << "x="<<logx;
    cout <<logy<<"y"<<endl;
    cout << "x=" <<logx1;
    cout <<logy1<< "y" <<endl; 
    if(logx==logx1 and logy==logy1){
        cout << "Невозможная система"<<endl;
    }else{
    opnum = x1*logx;
    opy = x1*logy;
    midy = y1+opy; 
    midnum = i1 + opnum; 
    midnum=midnum*-1;
    realy = midnum + asw1;
    realy = realy/midy; 
    yt = logy*realy;
    realx = logx+yt;
    cout << "y=" << realy<<        endl<<"x="<<realx<<endl;
    }
    
    return 0;
}
