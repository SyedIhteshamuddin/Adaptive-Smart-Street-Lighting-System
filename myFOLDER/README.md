# Adaptive Smart Street Lighting System
This is one of my early Arduino + Tinkercad projects while learning embedded systems and automation basics.
The idea of this project is to simulate a smart street lighting system that automatically changes brightness depending on surrounding light conditions using an LDR sensor.

# Features :

- Automatic street light activation
- Adaptive brightness control
- Energy-saving behavior
- Serial monitor output for sensor values

# Components Used

- Arduino Uno
- LDR (photoresistor)
- LEDs
- Resistors
- Tinkercad Circuits
                                              CIRCUIT DIAGRAM      
<img width="1174" height="779" alt="screenshot ASSLS" src="https://github.com/user-attachments/assets/de1012e7-545c-4b30-bc94-a17e007bd97d" />


# How It Works

The LDR sensor continuously reads ambient light levels.

Depending on the sensor value:
- very dark conditions → maximum brightness
- moderate darkness → medium brightness
- slight darkness → dim lighting
- bright environment → lights turn off

PWM was used to create adaptive brightness levels instead of simple ON/OFF behavior.

<img width="1918" height="910" alt="PROJECT ASSLS TOTAL" src="https://github.com/user-attachments/assets/75e62d9f-a657-4914-90b2-ec4d98f090b9" />

# What I Learned

While building this project, I learned:
- how LDR sensors work
- basics of analog input
- PWM brightness control
- conditional logic in Arduino
- how embedded systems react to sensor data

I also understood how small improvements can make a simple automation system feel more realistic.

# Future Improvements

Some ideas I want to explore later:
- motion sensor integration
- multiple lighting zones
- emergency mode
- smart traffic system integration


