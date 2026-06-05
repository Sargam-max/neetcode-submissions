class MinStack {
    vector<int> v;

public:
    MinStack() {
    }

    void push(int val){
        v.push_back(val);
    }

    void pop(){
        if(!v.empty()){
            v.pop_back();
        }
    }

    int top(){
        return v[v.size()-1];
    }

    int getMin(){
        vector<int>temp=v;  
        sort(temp.begin(),temp.end());
        return temp[0];
    }

    
};