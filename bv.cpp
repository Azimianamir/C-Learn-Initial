#include<iostream>
using namespace std;
class triple{

public:
	double x,y,z;
	triple(){
        x = 0;
        y = 0;
        z = 0;
    }
	//set data:
	void set_x(){cout<<"enter x:";cin>>x;}
	void set_y(){cout<<"enter y:";cin>>y;}
	void set_z(){cout<<"enter z:";cin>>z;}
	//move data:
	void move(){
		double temp=x;
		x=y;y=z;z=temp;
	}
	//get data:
	double get_x(){return x;}
	double get_y(){return y;}
	double get_z(){return z;}
	//pow data:
	void powe(int i){
		double x_=x,y_=y,z_=z;
		for(;i>1;i--)
		{
			x_*=x;
			y_*=y;
			z_*=z;
		}
		x=x_;y=y_;z=z_;
	}
};
	triple powe1(int i, triple nu){
		double x_=nu.x,y_=nu.y,z_=nu.z;
		for(;i>1;i--)
		{
			x_*=nu.x;
			y_*=nu.y;
			z_*=nu.z;
		}
		nu.x=x_;nu.y=y_;nu.z=z_;
        return nu;
	}

    void powe2(int i, triple *nu){
		double x_=nu->x,y_=nu->y,z_=nu->z;
		for(;i>1;i--)
		{
			x_*=nu->x;
			y_*=nu->y;
			z_*=nu->z;
		}
		nu->x=x_;nu->y=y_;nu->z=z_;
	}
int main(int argc, char *argv[])
{
    triple nu = triple();
	system("cls");
	while(true)
	{
		system("cls");
		int n;
		cout<<"1.set x\n2.set y\n3.set z\n4.move data\n5.to the power of two data\n6.show\n7.exet\n\nwitch one?";
		cin>>n;
		switch(n){
			case 1:nu.set_x();break;
			case 2:nu.set_y();break;
			case 3:nu.set_z();break;
			case 4:nu.move();break;
			case 5: powe2(2, &nu);break;
			case 6:{
				_d:system("cls");
				cout<<"witch one?\n1.x\n2.y\n3.z\n4.all";
				cin>>n;
				switch(n)
				{
					case 1:cout<<nu.get_x()<<endl;break;
					case 2:cout<<nu.get_y()<<endl;break;
					case 3:cout<<nu.get_z()<<endl;break;
					case 4: cout<<nu.get_x()<<endl;cout<<nu.get_y()<<endl;cout<<nu.get_z()<<endl;system("pause");break;
					default:cout<<"error...";system("pause");goto _d;
				}
			}
			case 7:return 0;
		}
	}

}