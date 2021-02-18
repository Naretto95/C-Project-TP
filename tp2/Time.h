#pragma once
class Time {
    private :
        unsigned short hour;
        unsigned short minute;
        unsigned short second;
    public :
        Time(unsigned short hour, unsigned short minute, unsigned short second);
        bool operator<(const Time & other) const;
        bool operator==(const Time & other) const;
        bool operator!=(const Time & other) const;
        bool operator>(const Time & other) const;
        bool operator<=(const Time & other) const;
        bool operator>=(const Time & other) const;
        Time& operator ++();
        Time& operator --();
};
