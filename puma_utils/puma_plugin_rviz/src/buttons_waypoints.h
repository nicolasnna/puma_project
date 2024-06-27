#ifndef BUTTONS_WAYPOINTS_H
#define BUTTONS_WAYPOINTS_H

#include <ros/ros.h>
#include <rviz/tool.h>

namespace buttons_waypoints {

  class ReadyPath : public rviz::Tool {
    Q_OBJECT
    public:
      ros::Publisher publisher_;

      ReadyPath();
      ~ReadyPath();

      virtual void onInitialize();

      virtual void activate();
      virtual void deactivate();

      void Publish(); 
  };

  class ResetPath : public rviz::Tool {
    Q_OBJECT
    public:
      ros::Publisher publisher_;

      ResetPath();
      ~ResetPath();

      virtual void onInitialize();

      virtual void activate();
      virtual void deactivate();

      void Publish(); 
  };

  class StopPlan : public rviz::Tool {
    Q_OBJECT
    public:
      ros::Publisher publisher_;

      StopPlan();
      ~StopPlan();

      virtual void onInitialize();

      virtual void activate();
      virtual void deactivate();

      void Publish(); 
  };

}

#endif // BUTTON_READY_WAYPOINTS_H