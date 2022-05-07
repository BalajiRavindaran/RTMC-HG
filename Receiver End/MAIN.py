#   ************** START OF PROGRAM *****************    #
#   ************** ACTUAL PROGRAM *****************    #

import time
from data_preprocessing import cleaning_data, action_performed
from firebase import firebase

firebase = firebase.FirebaseApplication("https://rtmc-hg-default-rtdb.firebaseio.com/", None)


while True:
    array = firebase.get("/Data/Preds", "")
    clean_data = cleaning_data(array)
    print(f"The received data is {clean_data}")
    time.sleep(5)
    result = action_performed(clean_data)
    print(result)

#   ************** END OF PROGRAM *****************    #
