#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int m, n;
    cin >> m >> n;
    int c; cin >> c;

    int g[21][21] = {0};
    vector<string> bad;
    map<pair<int,int>, pair<int,int>> rects;

    for (int cmd_i = 0; cmd_i < c; ++cmd_i) {
        string cmd;
        int x, y, w, h;
        cin >> cmd >> x >> y >> w >> h;

        ostringstream oss;
        oss << cmd << " " << x << " " << y << " " << w << " " << h;
        string line = oss.str();

        bool valid = true;

        if (cmd == "draw") {
            if (x < 0 || y < 0 || x + w - 1 > n || y + h - 1 > m) valid = false;
            else {
                for (int i = y; i <= y + h - 1 && valid; ++i)
                    for (int j = x; j <= x + w - 1 && valid; ++j)
                        if (g[i][j]) valid = false;
            }
            if (valid) {
                rects[{x,y}] = {w,h};
                for (int i = y; i <= y + h - 1; ++i)
                    for (int j = x; j <= x + w - 1; ++j)
                        g[i][j] = 1;
            } else bad.push_back(line);
        }
        else if (cmd == "remove") {
            if (rects.count({x,y}) == 0 || rects[{x,y}] != make_pair(w,h)) valid = false;
            if (valid) {
                rects.erase({x,y});
                for (int i = y; i <= y + h - 1; ++i)
                    for (int j = x; j <= x + w - 1; ++j)
                        g[i][j] = 0;
            } else bad.push_back(line);
        }
        else if (cmd == "extend") {
            if (rects.count({x,y}) == 0) valid = false;
            else {
                int ow = rects[{x,y}].first;
                int oh = rects[{x,y}].second;
                if (w < ow || h < oh) valid = false;
                else {
                    for (int i = y; i <= y + oh - 1; ++i)
                        for (int j = x; j <= x + ow - 1; ++j)
                            g[i][j] = 0;

                    if (x < 0 || y < 0 || x + w - 1 > n || y + h - 1 > m) valid = false; 
                    else {
                        for (int i = y; i <= y + h - 1 && valid; ++i)
                            for (int j = x; j <= x + w - 1 && valid; ++j)
                                if (g[i][j]) valid = false;
                    }

                    if (valid) {
                        rects[{x,y}] = {w,h};
                        for (int i = y; i <= y + h - 1; ++i)
                            for (int j = x; j <= x + w - 1; ++j)
                                g[i][j] = 1;
                    } else {
                        for (int i = y; i <= y + oh - 1; ++i)
                            for (int j = x; j <= x + ow - 1; ++j)
                                g[i][j] = 1;
                    }
                }
            }
            if (!valid) bad.push_back(line);
        }
        else if (cmd == "shrink") {
            if (rects.count({x,y}) == 0) valid = false;
            else {
                int ow = rects[{x,y}].first;
                int oh = rects[{x,y}].second;
                if (w > ow || h > oh) valid = false;
                else {
                    for (int i = y; i <= y + oh - 1; ++i)
                        for (int j = x; j <= x + ow - 1; ++j)
                            g[i][j] = 0;

                    if (x < 0 || y < 0 || x + w - 1 > n || y + h - 1 > m) valid = false; 
                    else {
                        for (int i = y; i <= y + h - 1 && valid; ++i)
                            for (int j = x; j <= x + w - 1 && valid; ++j)
                                if (g[i][j]) valid = false;
                    }

                    if (valid) {
                        rects[{x,y}] = {w,h};
                        for (int i = y; i <= y + h - 1; ++i)
                            for (int j = x; j <= x + w - 1; ++j)
                                g[i][j] = 1;
                    } else {
                        for (int i = y; i <= y + oh - 1; ++i)
                            for (int j = x; j <= x + ow - 1; ++j)
                                g[i][j] = 1;
                    }
                }
            }
            if (!valid) bad.push_back(line);
        }
        else bad.push_back(line);
    }

    for (auto &s : bad)
        cout << s << "\n\n";

    cout << rects.size() << "\n";

    return 0;
}


/*
#include <bits/stdc++.h>
using namespace std;
int main(){
    int m, n; cin >> m >> n;
    int c; cin >> c;
    int g[21][21] = {0};
    vector<string> bad;
    map<pair<int,int>, pair<int,int> > rects; 

    for(int cmd_i = 0; cmd_i < c; cmd_i++){
        string cmd;
        int x, y, w, h;
        cin >> cmd >> x >> y >> w >> h;
        string line = cmd + " " + to_string(x) + " " + to_string(y) + " " + to_string(w) + " " + to_string(h);

        bool valid = true;

        if(cmd == "draw"){
            if(x<0 || y<0 || x+w-1>n || y+h-1>m) valid = false;
            else {
                for(int i=y; i<=y+h-1 && valid; i++)
                    for(int j=x; j<=x+w-1 && valid; j++)
                        if(g[i][j]) valid = false;
            }
            if(valid){
                rects[make_pair(x,y)] = make_pair(w,h);
                for(int i=y;i<=y+h-1;i++)
                    for(int j=x;j<=x+w-1;j++)
                        g[i][j] = 1;
            } else bad.push_back(line);
        }
        else if(cmd == "remove"){
            if(rects.count(make_pair(x,y))==0 || rects[make_pair(x,y)] != make_pair(w,h)) valid=false;
            if(valid){
                rects.erase(make_pair(x,y));
                for(int i=y;i<=y+h-1;i++)
                    for(int j=x;j<=x+w-1;j++)
                        g[i][j] = 0;
            } else bad.push_back(line);
        }
        else if(cmd == "extend"){
            if(rects.count(make_pair(x,y))==0) valid=false;
            else {
                int ow = rects[make_pair(x,y)].first;
                int oh = rects[make_pair(x,y)].second;
                if(w<ow || h<oh) valid=false;
                else {
                    for(int i=y;i<=y+oh-1;i++)
                        for(int j=x;j<=x+ow-1;j++)
                            g[i][j] = 0;
                    if(x<0 || y<0 || x+w-1>n || y+h-1>m) valid=false;
                    else {
                        for(int i=y;i<=y+h-1 && valid;i++)
                            for(int j=x;j<=x+w-1 && valid;j++)
                                if(g[i][j]) valid=false;
                    }
                    if(valid){
                        rects[make_pair(x,y)] = make_pair(w,h);
                        for(int i=y;i<=y+h-1;i++)
                            for(int j=x;j<=x+w-1;j++)
                                g[i][j] = 1;
                    } else {
                        for(int i=y;i<=y+oh-1;i++)
                            for(int j=x;j<=x+ow-1;j++)
                                g[i][j] = 1;
                    }
                }
            }
            if(!valid) bad.push_back(line);
        }
        else if(cmd == "shrink"){
            if(rects.count(make_pair(x,y))==0) valid=false;
            else {
                int ow = rects[make_pair(x,y)].first;
                int oh = rects[make_pair(x,y)].second;
                if(w>ow || h>oh) valid=false;
                else {
                    for(int i=y;i<=y+oh-1;i++)
                        for(int j=x;j<=x+ow-1;j++)
                            g[i][j] = 0;
                    if(x<0 || y<0 || x+w-1>n || y+h-1>m) valid=false;
                    else {
                        for(int i=y;i<=y+h-1 && valid;i++)
                            for(int j=x;j<=x+w-1 && valid;j++)
                                if(g[i][j]) valid=false;
                    }
                    if(valid){
                        rects[make_pair(x,y)] = make_pair(w,h);
                        for(int i=y;i<=y+h-1;i++)
                            for(int j=x;j<=x+w-1;j++)
                                g[i][j] = 1;
                    } else {
                        for(int i=y;i<=y+oh-1;i++)
                            for(int j=x;j<=x+ow-1;j++)
                                g[i][j] = 1;
                    }
                }
            }
            if(!valid) bad.push_back(line);
        }
        else bad.push_back(line);
    }

    for(int i=0;i<bad.size();i++) cout << bad[i] << endl;
    cout << rects.size() << endl;
}
*/

/*
we can get 4 commands 
draw, remove , extend , shrink 
x  and y is the coordinate of the stylus
w and h are the width and height of the stylus( w x h ) matrix kinda 

the constraints are 20 
time limit is 1 second
maybe even n^2 is acceptable here 

we need to simulate things :( ahhhhhhhhhh y do they always ask a qn where am weak at 
we can first read the command part of shirnk or draw etc and make changes to the simulated matrix?

2 matric shldn over lap 
we can create a struct for the matrix simulation 
we need to check over lapping firsy 

*/