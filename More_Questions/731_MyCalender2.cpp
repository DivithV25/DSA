class MyCalendarTwo {
public:
    vector<pair<int, int>> bookings;
    vector<pair<int,int>> overlaps;
    MyCalendarTwo() {}

    bool book(int start, int end) {
        for(auto overlap : overlaps){
            if(!(end<=overlap.first || start>=overlap.second)){
              return  false;  
            }
        }
        for(auto books : bookings){
            if(!(end<=books.first || start>=books.second)){
                int minstart=max(books.first,start);
                int maxend=min(books.second,end);
                overlaps.push_back({minstart,maxend});
               
            }
        }
        bookings.push_back({start,end});
        return true;
    }
};

/**
 * Your MyCalendarTwo object will be instantiated and called as such:
 * MyCalendarTwo* obj = new MyCalendarTwo();
 * bool param_1 = obj->book(start,end);
 */