#   ************** START OF PROGRAM *****************    #
#   ************** ACTUAL PROGRAM *****************    #

import serial

ser = serial.Serial('COM5', baudrate=9600, timeout=0.5)


def cleaning_data(array):
    array_list = []
    for data in array:
        array_list += data
    new_array = []
    for data in array_list:
        if data == '0' or data == '1':
            new_array += data

    return new_array


def action_performed(action):
    try:
        if action[0] == '1':
            ser.write(b'a')
            return "Hand_Closed"
        elif action[1] == '1':
            ser.write(b'b')
            return "Index"
        elif action[2] == '1':
            ser.write(b'c')
            return "Middle"
        elif action[3] == '1':
            ser.write(b'd')
            return "Ring"
        elif action[4] == '1':
            ser.write(b'e')
            return "Little"
        elif action[5] == '1':
            ser.write(b'f')
            return "Thumb"
        elif action[6] == '1':
            ser.write(b'g')
            return "Index_Little"
        elif action[7] == '1':
            ser.write(b'h')
            return "Index_Middle"
        elif action[8] == '1':
            ser.write(b'i')
            return "Middle_Ring"
        elif action[9] == '1':
            ser.write(b'j')
            return "Ring_Little"
        elif action[10] == '1':
            ser.write(b'k')
            return "Thumb_Index"
        elif action[11] == '1':
            ser.write(b'l')
            return "Thumb_Little"
        elif action[12] == '1':
            ser.write(b'm')
            return "Index_Middle_Ring"
        elif action[13] == '1':
            ser.write(b'n')
            return "Middle_Ring_Little"
        elif action[14] == '1':
            ser.write(b'o')
            return "Thumb_Index_Little"
        elif action[15] == '1':
            ser.write(b'p')
            return "Thumb_Index_Middle"
        elif action[16] == '1':
            ser.write(b'q')
            return "Index_Middle_Ring_Little"
        elif action[17] == '1':
            ser.write(b'r')
            return "Thumb_Index_Middle_Ring"
        elif action[18] == '1':
            ser.write(b's')
            return "Hand_Open"
        elif action[19] == '1':
            ser.write(b't')
            return "Partial"
    except:
        print("None Detected")

#   ************** END OF PROGRAM *****************    #
