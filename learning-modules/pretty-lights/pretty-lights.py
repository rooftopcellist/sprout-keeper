import serial
import time

ser = serial.Serial('/dev/ttyACM0', 9600)

lights = [b'3', b'5', b'6']
while True:
	for light in lights:
		print(light)
		ser.write(light)
		time.sleep(1)