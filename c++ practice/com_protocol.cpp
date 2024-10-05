#include <iostream>

class IProtocol
{
public:
  virtual void InitProtocol() = 0;
  virtual void Authenticate() = 0;
  virtual void SendRequest(std::string data) = 0;
};

class HTTP : public IProtocol
{
public:
  void InitProtocol() override
  {
  }
  void Authenticate() override
  {
  }
  void SendRequest(std::string data) override
  {
  }
};

class Transmitter
{
public:
  Transmitter(IProtocol *p) : protocol { p }
  void Send()
  {
    protocol->SendRequest("any data");
  }

private:
  IProtocol *protocol;
};


class FTP : public IProtocol
{
public:
  void InitProtocol() override
  {
  }
  void Authenticate() override
  {
  }
  void SendRequest(std::string data) override
  {
  }
};

class Transmitter
{
public:
  Transmitter(IProtocol *p) : protocol { p }
  void Send()
  {
    protocol->SendRequest("any data");
  }

private:
  IProtocol *protocol;
};

int main()
{

  Transmitter transmitter(new FTP);
  Transmitter transmitter_http(new HTTP);
}