class MyQueue {
public:
stack<int> s1;
stack<int> s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);    
    }
    
    int pop() {
        int val=0;
        if(!s2.empty()){
           val=s2.top();
            s2.pop();
            return val;
        }else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
          val=s2.top();
            s2.pop();
            return val;
        }
        
    }
    
    int peek() {
         int val=0;
        if(!s2.empty()){
            val=s2.top();
            return val;
        }else{
            while(!s1.empty()){
                s2.push(s1.top());
                s1.pop();
            }
            val=s2.top();
            return val;
        }
        
    }
    
    bool empty() {
        return s1.empty()&&s2.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */