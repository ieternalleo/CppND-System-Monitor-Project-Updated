#ifndef PROCESSOR_H
#define PROCESSOR_H

class Processor {
 public:
  float Utilization();  // TODO: See src/processor.cpp

  // TODO: Declare any necessary private members
 private:
 // UserTime = user_time - guest_time;
 float user_time;
 float guest_time;
 //NiceTime = nice_time - guest_nice;
 float nice_time;
 float guest_nice;
//VirtualTime = guest_time + guest_nice;
 //Involuntary wait
 float steal;
//TotalIdle = idle_time + iowait_time
 float idle_time;
 float iowait_time;
//TotalSystemTime = system_time + irq + sirq;
 float system_time;
 float irq; //Servicing interrupts
 float sirq; //Servicing soft IRQs

 float total_system_time; 

};

#endif