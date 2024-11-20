int led_blue = 0;
int led_red = 1;
int button = 2;
boolean redBright = 1;
int b = 0;
boolean active1 = 1;

void setup() {
  pinMode(led_blue, OUTPUT);
  pinMode(led_red, OUTPUT);
  pinMode(button, INPUT);
 
}

void loop() {
  int button_press = digitalRead(button);
  if (button_press){
    b = b+1;
  }
  if (b == 2){
    digitalWrite(led_blue, LOW);
    digitalWrite(led_red, LOW);
    b == 0;
  }
  if (b == 1){
  	if (redBright){
      digitalWrite(led_blue, LOW); 
      digitalWrite(led_red, HIGH);
    }
    else{
      digitalWrite(led_blue, HIGH);
      digitalWrite(led_red, LOW);
  	}     
    delay(500);
  	redBright = !redBright;
  }
}
