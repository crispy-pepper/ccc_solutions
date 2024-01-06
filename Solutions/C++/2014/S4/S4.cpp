#include <bits/stdc++.h>
using namespace std;

void addd(double r1, double c1,double r2, double c2,double t,vector<vector<double>> &glass){
    for (double r = r1;r<r2;r++){
        for (double c = c1;c<c2;c++){
            glass[r][c] += t;
        }
    }
}

int main(){
    double g,minT; cin >>  g >> minT;
    vector<vector<double>> rca,cra,rci,cri,recs;
    vector<vector<double>> glass;
    for (double i =0; i<g;i++){
        double x1,y1, t,x2,y2; cin >> x1 >> y1 >>x2>>y2 >> t;
        rca.push_back({y2,x2,t});
        cra.push_back({x2,y2,t});
        rci.push_back({y1,x1,t});
        cri.push_back({x1,y1,t});
        recs.push_back({y1,x1,y2,x2,t});
    }
    vector<double> maxc = *max_element(cra.begin(),cra.end()),maxr = *max_element(rca.begin(),rca.end());
    vector<double> rrr(maxc[0]+1,0);
    glass.resize(maxr[0]+1,rrr);
    
    for (vector<double>v:recs){
        addd(v[0],v[1],v[2],v[3],v[4],glass);
        double c = 0;
    }

    double count = 0;
    vector<double> minc = *min_element(cri.begin(),cri.end()),minr = *min_element(rci.begin(),rci.end());
    for (double r = minr[0]; r <=maxr[0];r++){
        for (double c = minc[0];c<=maxc[0];c++){
            count += (glass[r][c]>=minT);
        }
    }
    cout << count << endl;
    
}