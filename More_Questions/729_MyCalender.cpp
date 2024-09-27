class MyCalendar
{
public:
    vector<pair<int, int>> slot;
    MyCalendar()
    {
    }

    bool book(int start, int end)
    {
        for (auto &i : slot)
        {
               // Check for overlap: there is no overlap if the current event ends before
            // the existing event starts, or if it starts after the existing event ends.
            if (!(end <= i.first || start >= i.second))
            {
                return false;
            }
        }

        slot.push_back({start, end});
        return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */