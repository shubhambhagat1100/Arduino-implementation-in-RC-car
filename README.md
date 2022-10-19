# Arduino-implementation-in-RC-car
Built a bluetooth remote controlled car using Arduino along with bluetooth module. Can be controlled through a Mobile application using virtual buttons or smartphone’s accelerometer.

Created functions to operate the motion of a RC car, motions include :
(1) Forward,
(2) Backward,
(3) Right sharp,
(4) Left sharp,
(5) Forward right,
(6) Forward left,
(7) Backward right, and
(8) Backward left.

Input :
Obtained from clicks performed on smartphone / accelerometer of the smartphone.

Output :
Given by the arduino at the specified ports, this output is then given to the 4 motors in the form of LOW/HIGH signal.

Diagrammatic representation :
                                              ------------------------------
                                              ------------------------------
                                              || [down]M2A         M1A[up] ||
                                              ||                           ||
                                              ||                           ||
                                              ||                           ||
                                              || [up]M2B         M1B[down] ||
                                              ||                           ||
                                              -------------------------------
                                              -------------------------------
