import serial
import datetime;

ComPort="/dev/cu.usbserial-14120"

ser = serial.Serial(ComPort,9600,timeout=0.1)

while True:
    ser.flush
    Read=ser.readline().decode('ascii')
    if Read!="":
        print(str(datetime.datetime.now())+" "+Read)