#include <iostream>
using namespace std;

struct Point {
	int x, y;
};


void swap(struct Point *p3){
    int temp=p3->x;
    p3->x=p3->y;
    p3->y=temp;
}



int main()
{
	struct Point p1 ;
	p1.x=10;
	p1.y=20;
	struct Point* p2 = &p1;
	cout << p2->x << " " << p2->y;
	cout<<"After swapping"<<endl;
	swap(&p1);
	cout << p2->x << " " << p2->y;
	return 0;
}
