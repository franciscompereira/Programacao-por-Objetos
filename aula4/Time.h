#ifndef AULA4_TIME_H
#define AULA4_TIME_H

class Time{
    unsigned int hour;
    unsigned int minutes;
    unsigned int seconds;

public:
    Time();
    Time(int hour, int minutes, int second);
    int gethour();
    int getminutes();
    int getseconds();
    void update(int hour, int minutes, int second);
    void showtime(int hour, int minutes, int seconds);
    Time operator+(Time& outro){
        Time temp;
        temp.hour = this->hour + outro.gethour();
        temp.minutes = this->minutes + outro.getminutes();
        temp.seconds = this->seconds + outro.getseconds();
        return temp;
    }
    Time operator-(Time& outro){
        Time temp;
        temp.hour = this->hour - outro.gethour();
        temp.minutes = this->minutes - outro.getminutes();
        temp.seconds = this->seconds - outro.getseconds();
        return temp;
    }
    Time operator*(Time& outro){
        Time temp;
        temp.hour = this->hour * outro.gethour();
        temp.minutes = this->minutes * outro.getminutes();
        temp.seconds = this->seconds * outro.getseconds();
        return temp;
    }
    Time& operator++(int ){
        hour++;
        minutes++;
        seconds++;
        return *this;
    }
    Time& operator--(int ){
        hour--;
        minutes--;
        seconds--;
        return *this;
    }
    bool operator==(Time& outro){
        if(this->hour==outro.gethour()&& this->minutes==outro.getminutes() && this->seconds==outro.getseconds())
            return true;
        else
            return false;
    }
};
#endif //AULA4_TIME_H
