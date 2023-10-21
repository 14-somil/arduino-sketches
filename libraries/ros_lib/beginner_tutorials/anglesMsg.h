#ifndef _ROS_beginner_tutorials_anglesMsg_h
#define _ROS_beginner_tutorials_anglesMsg_h

#include <stdint.h>
#include <string.h>
#include <stdlib.h>
#include "ros/msg.h"

namespace beginner_tutorials
{

  class anglesMsg : public ros::Msg
  {
    public:
      typedef int64_t _first_type;
      _first_type first;
      typedef int64_t _second_type;
      _second_type second;
      typedef int64_t _base_type;
      _base_type base;

    anglesMsg():
      first(0),
      second(0),
      base(0)
    {
    }

    virtual int serialize(unsigned char *outbuffer) const override
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_first;
      u_first.real = this->first;
      *(outbuffer + offset + 0) = (u_first.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_first.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_first.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_first.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_first.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_first.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_first.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_first.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->first);
      union {
        int64_t real;
        uint64_t base;
      } u_second;
      u_second.real = this->second;
      *(outbuffer + offset + 0) = (u_second.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_second.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_second.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_second.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_second.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_second.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_second.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_second.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->second);
      union {
        int64_t real;
        uint64_t base;
      } u_base;
      u_base.real = this->base;
      *(outbuffer + offset + 0) = (u_base.base >> (8 * 0)) & 0xFF;
      *(outbuffer + offset + 1) = (u_base.base >> (8 * 1)) & 0xFF;
      *(outbuffer + offset + 2) = (u_base.base >> (8 * 2)) & 0xFF;
      *(outbuffer + offset + 3) = (u_base.base >> (8 * 3)) & 0xFF;
      *(outbuffer + offset + 4) = (u_base.base >> (8 * 4)) & 0xFF;
      *(outbuffer + offset + 5) = (u_base.base >> (8 * 5)) & 0xFF;
      *(outbuffer + offset + 6) = (u_base.base >> (8 * 6)) & 0xFF;
      *(outbuffer + offset + 7) = (u_base.base >> (8 * 7)) & 0xFF;
      offset += sizeof(this->base);
      return offset;
    }

    virtual int deserialize(unsigned char *inbuffer) override
    {
      int offset = 0;
      union {
        int64_t real;
        uint64_t base;
      } u_first;
      u_first.base = 0;
      u_first.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_first.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_first.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_first.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_first.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_first.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_first.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_first.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->first = u_first.real;
      offset += sizeof(this->first);
      union {
        int64_t real;
        uint64_t base;
      } u_second;
      u_second.base = 0;
      u_second.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_second.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_second.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_second.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_second.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_second.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_second.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_second.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->second = u_second.real;
      offset += sizeof(this->second);
      union {
        int64_t real;
        uint64_t base;
      } u_base;
      u_base.base = 0;
      u_base.base |= ((uint64_t) (*(inbuffer + offset + 0))) << (8 * 0);
      u_base.base |= ((uint64_t) (*(inbuffer + offset + 1))) << (8 * 1);
      u_base.base |= ((uint64_t) (*(inbuffer + offset + 2))) << (8 * 2);
      u_base.base |= ((uint64_t) (*(inbuffer + offset + 3))) << (8 * 3);
      u_base.base |= ((uint64_t) (*(inbuffer + offset + 4))) << (8 * 4);
      u_base.base |= ((uint64_t) (*(inbuffer + offset + 5))) << (8 * 5);
      u_base.base |= ((uint64_t) (*(inbuffer + offset + 6))) << (8 * 6);
      u_base.base |= ((uint64_t) (*(inbuffer + offset + 7))) << (8 * 7);
      this->base = u_base.real;
      offset += sizeof(this->base);
     return offset;
    }

    virtual const char * getType() override { return "beginner_tutorials/anglesMsg"; };
    virtual const char * getMD5() override { return "0496e8c0c35c632938a659f27c1ce0a3"; };

  };

}
#endif
