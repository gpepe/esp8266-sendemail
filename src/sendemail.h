#ifndef __SENDEMAIL_H
#define __SENDEMAIL_H

//#define DEBUG_EMAIL_PORT

#include <WiFiClient.h>
#include "WiFiClientSecure.h"
#include <base64.h>

class SendEmail
{
  private:
    const String host;
    const int port;
    const String user;
    const String passwd;
    const int timeout;
    const bool ssl;
    String readClient(WiFiClient* client);
  public:
   SendEmail(const String& _host, const int _port, const String& _user, const String& _passwd, const int timeout, const bool ssl);
   bool send(const String& from, const String& to, const String& subject, const String& msg);
};

#endif
