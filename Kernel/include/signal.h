#ifndef SIGNAL_H
  #define SIGNAL_H

  //List of Signals
  #define SIG_NULL  0
  #define SIG_PRINT 1
  #define SIG_INPUT 2
  #define SIG_EXIT  3
  #define SIG_DONE  4

  void SendSignal(int SignalNum);
  int WaitForSignal(int SignalNum);
  static int Current_Signal_Num=0;
  static int SignalCollected=0;
  static int Collected=0;
  static char *Current_Char;
#endif
