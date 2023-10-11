int x = 0;
float y_sin = 0.0;
float y_cos = 1.0;
int baseline = 0;
float frequency = 1.0; // Adjust the frequency of the waves
float amplitude = 0.5; // Adjust the amplitude of the waves

void setup() {
  Serial.begin(9600);
}

void loop() {
  x = x + 1;

  // Generate a sine wave
  y_sin = amplitude * y_sin + amplitude * sin(2 * PI * frequency * x / 50.0);

  // Generate a cosine wave
  y_cos = amplitude * y_cos + amplitude * cos(2 * PI * frequency * x / 50.0);

  Serial.printf("%f %f %d\n", y_sin, y_cos, baseline);
  delay(5);
}
