#include<iostream>
#include<cmath>
using namespace std;
class point
{
public:
	point(float x,float y):x(x),y(y)
	{}
	float getx()
	{
		return x;
	}
	float gety()
	{
		return y;
	}
private:
	float x;
	float y;
};
class line:public point
{
public:
	line(float x,float y):point(x,y)
	{}
	float length()
	{
		double x=getx();
		double y=gety();
		len=sqrt(x*x+y*y);
		return len;
	}
private:
	float len;
};
class triangle
{
public:
	triangle(line line1,line line2,line line3):line1(line1),line2(line2),line3(line3)
	{}
	void distinguish()
	{
		float len1=line1.length(),len2=line2.length(),len3=line3.length();
		if(len1+len2<=len3||len1+len3<=len2||len2+len3<=len1)
		    cout<<"不能再组成三角形\n";
		else if(len1==len2&&len2==len3)
			cout<<"三角形为等边三角形\n";
		else if(len1==len2||len1==len3||len2==len3)
			cout<<"三角形为等腰三角形\n";
		else if(len1*len1+len2*len2==len3||len1*len1+len3*len3==len2*len2||len2*len2+len3*len3==len1*len1)
			cout<<"三角形为直角三角形\n";
		else
			cout<<"三角形为普通三角形\n";
	}
	return 0;
}

