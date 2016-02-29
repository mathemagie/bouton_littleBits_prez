from serial import Serial
from StringIO import StringIO
from os import system

def touche_next():
	system('osascript -e \'tell application "System Events" to key code 124\'')

def touche_prev():
	system('osascript -e \'tell application "System Events" to key code 123\'')

serial_port = Serial(port='/dev/tty.usbmodem1411', baudrate=57600)

while True:
	#serial_port.write('100'.encode('ascii'))
	str = serial_port.readline()
	print str
	if 'on' in str:
		touche_next()
	if 'prev' in str:
		touche_prev()
