#   ************** START OF PROGRAM *****************    #
#   ************** TEST PROGRAM *****************    #
#   **************** PROGRAM TO CREATE THE DATASET *****************    #
import cv2
import numpy as np
import os

# *************** Using OpenCV VideoCapture for capturing live video and setting window parameters *************** #
kernel = np.array([[-1, -1, -1], [-1, 9, -1], [-1, -1, -1]])
path = "D:/Applied Hands-on/7th sem - Minor project/Data/Test_Data"
cap = cv2.VideoCapture(0, cv2.CAP_DSHOW)
cap.set(3, 1000)
cap.set(4, 1000)
img_counter = 1
while True:
    # *************** Code for reading each frame, and preprocessing the data *************** #
    success, img = cap.read()
    imgGrey = cv2.cvtColor(img, cv2.COLOR_BGR2GRAY)
    imgblur = cv2.GaussianBlur(imgGrey, (3, 3), sigmaX=0, sigmaY=0)
    imgOut = cv2.flip(imgblur, 1)
    imgOut = imgOut[300:850, 850:2700]
    imgOut = cv2.filter2D(imgOut, -1, kernel)
    imgOut = cv2.resize(imgOut, (224, 224))
    cv2.imshow("Data", imgOut)
    k = cv2.waitKey(1)
    if k % 256 == 27:
        print("Escape hit")
        break
    # *************** Code for saving the image on every SPACE key press *************** #
    elif k % 256 == 32:
        cv2.imwrite(os.path.join(path, f"ImTest ({img_counter}).png"), imgOut)
        print(f"ImThumb_Little_{img_counter}.png written")
        img_counter += 1
#   ************** END OF PROGRAM *****************    #
