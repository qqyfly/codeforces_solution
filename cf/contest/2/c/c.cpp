/* Generated by powerful Codeforces Tool
 * Author: PierreQi
 * Time: 2022-08-31 22:29:29
**/

#include <bits/stdc++.h>

//#include <iostream>
//#include <utility>
// #include <vector>
// #include <map>
// #include <set>
// #include <stack>
// #include <queue>
// #include <unordered_map>
// #include <unordered_set>
// #include <algorithm>

//TIPS
//From 1 point X to stadium A,B,C 
//X to  A(with radius of r) have 2 tangent lines,and the tangent line length is R
//then the angle between 2 tangent lines is 2 * asin(r/R)
//the problem requires all the 3 angles are equal
//which means r1/R1 = r2/R2 = r3/R3



using namespace std;
#define fio ios_base::sync_with_stdio(false); cin.tie(NULL);

#define F(x) ((x)*(x))

double x[3],y[3],r[3],g[3];
const int dx[]= {-1,0,1,0};
const int dy[]= {0,1,0,-1};
const double eps=1e-6;

double f(double w,double q) {
	for(int i=0;i<3;i++)
		g[i]=sqrt(F(x[i]-w)+F(y[i]-q))/r[i];
	double tmp=0;
	for(int i=0;i<3;i++)
		tmp+=F(g[i]-g[(i+1)%3]);
	return tmp;
}

int main(){
    fio;
    
    double dt=1,w=0,q=0;
	for(int i=0;i<3;i++){
		scanf("%lf%lf%lf",&x[i],&y[i],&r[i]),
		w+=x[i],q+=y[i];
    }

	w/=3,q/=3;

	while(dt>eps)
	{
		int fg=-1;double o=f(w,q);
		for(int i=0;i<4;i++)
		{
			double u=f(w+dx[i]*dt,q+dy[i]*dt);
			if(u<o)o=u,fg=i;
		}
		if(fg<0)dt/=2;
		else w+=dx[fg]*dt,q+=dy[fg]*dt;
	}

	if(f(w,q)<eps) printf("%.5lf %.5lf\n",w,q);

	return 0;
}

