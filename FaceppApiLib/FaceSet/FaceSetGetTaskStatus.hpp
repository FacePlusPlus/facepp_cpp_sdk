//
//  FaceSetGetTaskStatus.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceSetGetTaskStatus_hpp
#define FaceSetGetTaskStatus_hpp

#include <stdio.h>

class FaceSetGetTaskStatus {
public:
    void getTaskStatus(const char *api_key, const char *api_secret, const char *task_id);
};

#endif /* FaceSetGetTaskStatus_hpp */
