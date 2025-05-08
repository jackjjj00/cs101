#include <iostream>
#include <string>
using namespace std;
class Car {
    protected:
    string m_drivemode;
    

    private:
    int m_Maxseating;
    int m_price;
    void m_UpdatePrice(int base =500000){
        m_price= m_Maxseating*base;
    }
    public:
    string m_brand;
    string m_model;
    int m_year;
    
    Car(string x,string y, int z, int s){
        m_brand=x;
        m_model=y;
        m_year=z;
        m_Maxseating=s;
        m_UpdatePrice();
        m_drivemode="No-wheel";
    }
};
class AUDI_Car: public Car{
    /*private:
    string m_drivemode;*/
    
    public:
    AUDI_Car(string y, int z, int s): Car("AUDI", y, z ,s) {
        cout<<"Constructing AUDI_Car\n";
        m_drivemode="Front-wheel";
    }
    string get_drivemode(){
        return m_drivemode;
    }
};
class BMW_Car: public Car{
    /*private:
    string m_drivemode;*/
    
    public:
    BMW_Car(string y, int z, int s): Car("BMW", y, z ,s) {
        cout<<"Constructing BMW_Car\n";
        m_drivemode="Rear-wheel";
    }
    string get_drivemode(){
        return m_drivemode;
    }
};
class BENZ_Car: public Car{
    /*private:
    string m_drivemode;*/
    
    public:
    BENZ_Car(string y, int z, int s): Car("BENZ", y, z ,s) {
        cout<<"Constructing BENZ_Car\n";
        m_drivemode="Front-wheel";
    }
    string get_drivemode(){
        return m_drivemode;
    }
};

int main()
{
    BMW_Car car_1("X5",2023,6);
    cout<<car_1.m_brand<<": Drive Mode = "<<car_1.get_drivemode()<<endl;
    
    AUDI_Car car_2("A1",2023,5);
    cout<<car_2.m_brand<<": Drive Mode = "<<car_2.get_drivemode()<<endl;
    
    BENZ_Car car_3("Q4",2022,4);
    cout<<car_3.m_brand<<": Drive Mode = "<<car_3.get_drivemode()<<endl;

    return 0;
}
