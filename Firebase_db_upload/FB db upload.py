#   ************** START OF PROGRAM *****************    #
#   ************** TEST PROGRAM *****************    #
#   **************** PROGRAM TO TEST UPLOADING PROCESS IN FIREBASE *****************    #
from firebase import firebase
from random import randint
import time
firebase = firebase.FirebaseApplication("https://rtmc-hg-default-rtdb.firebaseio.com/", None)

# ******************* DATA CREATED IN FIREBASE DB ************************* #
# test_data = [0, 0, 0, 0, 0]
# firebase.post("/Data", {"test_data": str(test_data)})

# ******************* Initially setting the post to [0,0,0,0,0] ************************* #
firebase.put("/Data", "test_data", str([0, 0, 0, 0, 0]))
time.sleep(5)

# ************************* Randomizing the upload data in continuous loop ************************* #
while True:
    for i in range(10):
        firebase.put("/Data", "test_data", str([randint(0, 1), randint(0, 1),
                                                randint(0, 1), randint(0, 1),
                                                randint(0, 1)]))
        print(firebase.get("/Data/test_data", ""))
    break
#   ************** END OF PROGRAM *****************    #
