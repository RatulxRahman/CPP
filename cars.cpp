#include <iostream>
using namespace std;
const int sizeM=2;
class Car{
public:
    string customerName,nidNumber,purchaseDate,engineNumber,registrationNumber;
    Car()
    {
        cout<< "\n Enter Customer Name: "; cin>>customerName;
        cout<< " Enter Nid Number: "; cin>>nidNumber;
        cout<< " Enter Purchase Date: "; cin>>purchaseDate;
        cout<< " Enter Engine Number: "; cin>>engineNumber;
        cout<< " Enter Registration Number: "; cin>>registrationNumber;
    }
    friend void CarDekhaw(Car &cars);
};
    Car cars[sizeM];
void CarDekhaw(Car &cars){

        cout << "Customer Name: " << cars.customerName << endl;
        cout << "NID Number: " << cars.nidNumber << endl;
        cout << "Purchase Date: " << cars.purchaseDate << endl;
        cout << "Engine Number: " << cars.engineNumber << endl;
        cout << "Registration Number: " << cars.registrationNumber << endl;
}
void SearchName(string s){
     for(int i=0;i<sizeM;i++){
        if (s==cars[i].customerName){
            cout<< "\n Enter New Name: "; cin>>cars[i].customerName;
            cout<< "\n Updated Details: \n";
            CarDekhaw(cars[i]);
            break;
        }
     }
}

int main()
{
    cout<< "\n --------------------------------------------------- \n\n";
    cout<< " Do you want to transfer your car ownership? \n 1)Yes! \t 2)No! \n ";
    int a; cin>>a;
    if(a==1){
        cout<< "\n Enter The Name Of The Car Owner You want to change: ";
        string s; cin>>s;
        SearchName(s);
    }
        cout<< "\n --------------------------------------------------- \n\n";

    cout<< "\n Showing Sold cars:\n \n";
    for (int i = 0; i < sizeM; i++)
    {
    cout<< "\n \t CAR NO: "<<i+1<<endl;
    CarDekhaw(cars[i]);
    }
    return 0;
}
