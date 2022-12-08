
class DetectSquares {
public:
    map<vector<int>,int> points;
    DetectSquares() {
        points.clear();
    }
    
    void add(vector<int> point) {
        points[point]++;
    }
    
    int count(vector<int> point) {
        int ans=0;
        for(auto it : points){
            if(it.first[0]==point[0]){
                int x=point[0];
                int y1=point[1];
                int y2=it.first[1];
                
                int A=0,B=0,C=0;
                A = points[it.first];

                if(y2 > y1){
                    B=points[{x+y2-y1,y1}];
                    C=points[{x+y2-y1,y2}];
                    ans += A*B*C;

                    B=0; C=0;             
                    B=points[{x-y2+y1,y1}];
                    C=points[{x-y2+y1,y2}];
                    ans += A*B*C;
                }
                
                else if(y1 > y2){
                    B=0; C=0;          
                    B=points[{x-y2+y1,y1}];
                    C=points[{x-y2+y1,y2}];
                    ans += A*B*C;

                    B=0; C=0; 
                    B=points[{x-y1+y2,y2}];
                    C=points[{x-y1+y2,y1}];
                    ans += A*B*C;
                } 
            }
        }
        return ans;
    }
};

/**
 * Your DetectSquares object will be instantiated and called as such:
 * DetectSquares* obj = new DetectSquares();
 * obj->add(point);
 * int param_2 = obj->count(point);
 */