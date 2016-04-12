Send email with esp8266/Arduino, smtp auth and ssl support.

Examples:

ssl:<br>
  SendEmail e("mail.example.com", 465, "login", "password", 5000, true); <br>
  e.send("test@example.com", "me@example.com", "subject", "message"); <br>
  <br>
  
plain no auth:<br>
  SendEmail e("mail.example.com", 25, "", "", 5000, false);<br>
  e.send("test@example.com", "me@example.com", "subject", "message");<br>

