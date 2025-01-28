#include <iostream>
#include <cmath>

using namespace std;
class kompleksi
{
    private:
    float x,y;

    public:
    kompleksi operator+(kompleksi a)
    {
        kompleksi z=*this;
        z.x+=a.x;
        z.y+=a.y;
        return z;
    }
    kompleksi operator*(kompleksi a)
    {
        kompleksi z;
        z.x=this->x*a.x+this->y*a.y;
        z.y=this->x*a.y+this->y*a.x;
        return z;
    }
    kompleksi(const kompleksi& orig)
    {
        this->x=orig.x;
        this->y=orig.y;
    }
    void print()
    {
        cout<<this->x;
        if(y>=0)
        cout<<"+i"<<this->y;
        else
        cout<<"-i"<<-this->y;

        cout << "\n";
    }
    kompleksi operator=(kompleksi z)
    {
        this->x=z.x;
        this->y=z.y;
        return *this;
    }
    bool operator==(kompleksi z)
    {
        if(this->x==z.x && this->y==z.y)return 1;
        else return 0;
    }
    float operator!()
    {
        return sqrt(this->x*this->x+this->y*this->y);
    }
    bool operator!=(kompleksi z)
    {
        if(this->x==z.x && this->y==z.y)return 0;
        else return 1;
    }
    kompleksi(float a=1,float b=0)
    {
        this->x=a;
        this->y=b;
    }   
    kompleksi operator-(){
        kompleksi a(-this->x,-this->y);
        return a;
    } 
    /*
    kompleksi operator-(kompleksi a)
    {
        kompleksi z=*this;
        z.x-=a.x;
        z.y-=a.y;
        return z;
    }
    */
    kompleksi operator~()
    {
        kompleksi z(this->x,-this->y);
        return z;
        
    }
    kompleksi operator/(kompleksi a)
    {
        kompleksi z=*this;
        z.x/=a.x;
        z.y/=a.y;
        return z;
    }
};
int main()
{
    kompleksi kompleksnost(7,6), b, c(128,256);
    
    b = -c;

    b.print();

    b = kompleksnost+c;

    b.print();
}