Send email with esp8266/Arduino, smtp auth and ssl support.

Examples:

ssl:
  SendEmail e("mail.example.com", 465, "login", "password", 5000, true);
  e.send("test@example.com", "me@example.com", "subject", "message");
  
plain no auth:
  SendEmail e("mail.example.com", 25, "", "", 5000, false);
  e.send("test@example.com", "me@example.com", "subject", "message");

