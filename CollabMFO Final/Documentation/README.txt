General Instructions :
           1. Initially, the START, AUTOMATE(prev.), INSIGHT, STOP buttons work.
           2. The START button starts a new process by clearing the previous
           log.csv proceeding to start the live data capture and prediction while
           uploading the predicted data to the online database system in the
           interval of 1 second.
           3. The AUTOMATE(prev.) button loops through the data that is present
           in the log.csv that is generated before, meanwhile uploading the data
           to the online database system in intervals of 1 second.
           4. The INSIGHT button generates a HEATMAP with annotations from the
           log.csv.
           5. The STOP button stops any process that is happening and closes
           the window.

Constraints and Specifics :
           1. The AUTOMATE button works only after the START button is pressed,
           and the AUTOMATE button loops through the data that is already predicted
           meanwhile uploading it to the online database system in intervals of 1
           second, It also generates a new log.csv file that contains the data that is
           predicted.
           2. Initially the INSIGHT button works, when the START button is pressed
           INSIGHT works only after AUTOMATE button is also pressed.
           3. The AUTOMATE(prev.) button works only when the START button is
           not pressed and vice versa.
           4. The STOP button generates a log.csv file only when the START
           button is pressed and AUTOMATE button is not pressed.
           5. The LIVE CAPTURE OFF text changes to LIVE CAPTURE ON only when
           the START button is pressed and the PROCESS NOT STARTED text
           changes to the predicted output(ie. Hand Closed, Hand Open, etc.) when
           the START/AUTOMATE(prev.) button is pressed, also it denotes whether
           the data being uploaded is LIVE or AUTOMATED.
           6. If there is no log.csv and INSIGHT or AUTOMATE(prev.) is pressed
           initially, then the INSIGHT and AUTOMATE(prev.) shows a descriptive warning.
