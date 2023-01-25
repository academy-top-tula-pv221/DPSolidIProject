#include <iostream>

using namespace std;

class IMessage
{
    string text;
    string toAddress;
    string fromAddress;
    string subject;

public:
    virtual string& Text() = 0;
    string& ToAddress(){ return toAddress; };
    string& FromAddress() { return fromAddress; };
    string& Subject() { return subject; };

    virtual void Send() = 0;
};

class EmailMessage : public IMessage
{
public:
    void Send() override
    {
        cout << "From " << FromAddress <<
            "To " << ToAddress <<
            "Subject: " << Subject <<
            "Message: " << Text << "\n";
    }
};

class SmsMessage : public IMessage
{
    void Send() override
    {
        cout << "From " << FromAddress <<
            "To " << ToAddress <<
            "Message: " << Text << "\n";
    }
};

int main()
{
    
}
