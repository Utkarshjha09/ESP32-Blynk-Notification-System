
#define BLYNK_TEMPLATE_ID "YourTemplateID"
#define BLYNK_DEVICE_NAME "YourDeviceName"
#define BLYNK_AUTH_TOKEN "YourAuthToken"

#include <WiFi.h>
#include <BlynkSimpleEsp32.h>

char ssid[] = "YourWiFiSSID";
char pass[] = "YourWiFiPassword";

#define STUDENT_BUTTON_PIN 14
#define FACULTY_BUTTON_PIN 27

bool studentPressed = false;
bool facultyPressed = false;

void setup() {
  Serial.begin(115200);

  pinMode(STUDENT_BUTTON_PIN, INPUT_PULLUP);
  pinMode(FACULTY_BUTTON_PIN, INPUT_PULLUP);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop() {
  Blynk.run();

  if (digitalRead(STUDENT_BUTTON_PIN) == LOW && !studentPressed) {
    studentPressed = true;
    Blynk.logEvent("student_waiting", "Student is waiting outside");
    Serial.println("Student button pressed");
  } else if (digitalRead(STUDENT_BUTTON_PIN) == HIGH) {
    studentPressed = false;
  }

  if (digitalRead(FACULTY_BUTTON_PIN) == LOW && !facultyPressed) {
    facultyPressed = true;
    Blynk.logEvent("faculty_waiting", "Faculty is waiting outside");
    Serial.println("Faculty button pressed");
  } else if (digitalRead(FACULTY_BUTTON_PIN) == HIGH) {
    facultyPressed = false;
  }
}
