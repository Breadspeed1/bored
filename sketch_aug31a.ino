#include <SSD1306.h>
#include <wire.h>

#define SDA 22
#define SCL 23
SSD1306 display(0x3c, 5, 4);

void setup() {
  display.init();
}

void loop() {
myProjects();
delay(5000);
Counter();
delay(5000);
homework();
delay(5000);
}
void myProjects(){
  display.init();
  display.setFont(ArialMT_Plain_16);
  display.drawString(0, 0, "My Projects");
  display.setFont(ArialMT_Plain_10);
  display.drawString(0, 18, "Counter!");
  display.drawString(0, 30, "Homework!");
  display.display();  
}

void Counter() {
  int i = 1;
  while (i <= 60) {
    display.clear();
    display.init();
    display.setFont(ArialMT_Plain_24);
    display.drawString(0, 16, "Counter: " + String(i));
    display.display();
    delay(1000);
    i ++;
  }
  display.clear();
}
void homework(){
display.init();
display.setFont(ArialMT_Plain_10);
display.drawString(0, 0, "I didn't quite finish my");
display.drawString(0, 10, "homework");
display.display();
delay(500);
display.drawString(0, 20, ".");
display.display();
delay(700);
display.drawString(5, 20, ".");
display.display();
delay(700);
display.drawString(10, 20, ".");
display.display();
delay(700);
display.setFont(ArialMT_Plain_16);
display.drawString(0, 30, "gotchya!");
display.setFont(ArialMT_Plain_10);
display.drawString(0, 46, "I did!");
display.display();
delay(1500);
display.clear();  
return;  
}
