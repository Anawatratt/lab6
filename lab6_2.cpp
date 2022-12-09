#include <iostream>
#include <cmath>
using namespace std;

double deg2rad(double degr){
    return degr *(M_PI/180);
}
double rad2deg(double radi){
   return radi*(180/M_PI);
}

double findXComponent(double L1,double L2,double radi1,double radi2){
    return (L1*cos(radi1)) + (L2 * cos(radi2));
}

double findYComponent(double L1,double L2,double radi1,double radi2){
    return (L1*sin(radi1)) + (L2 * sin(radi2));
}

double pythagoras(double x,double y){
    return sqrt(pow(x,2)+pow(y,2));
}

void ShowResult(double ResultVecLength,double ResultVecDirection){
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%\n";
    cout<<"Length of the resultant vector = "<<ResultVecLength<<"\n";
    cout<<"Direction of the resultant vector (deg) = "<<ResultVecDirection<<"\n";
    cout<<"%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%";
}



int main(){
    double l1,l2,a1,a2,xcomp,ycomp,result_vec_length,result_vec_direction;
    cout << "Enter length of the first vector: ";
    cin >> l1;
    cout << "Enter direction of the first vector (deg): ";
    cin >> a1;
    cout << "Enter length of the second vector: ";
    cin >> l2;
    cout << "Enter direction of the second vector (deg): ";
    cin >> a2;

    
    
    a1 = deg2rad(a1);
    a2 = deg2rad(a2);
    xcomp = findXComponent(l1,l2,a1,a2);
    ycomp = findYComponent(l1,l2,a1,a2);
    result_vec_length = pythagoras(xcomp,ycomp);
    result_vec_direction = rad2deg(atan2(ycomp,xcomp)); 

    ShowResult(result_vec_length,result_vec_direction);

}
 