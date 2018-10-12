//
//  HumanBodyDetect.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef HumanBodyDetect_hpp
#define HumanBodyDetect_hpp

#include <stdio.h>

class HumanBodyDetectApi {
public:
    void detectBody(const char *api_key ,const char *api_secret,const char *filePath, const char *return_attributes);
};

#endif /* HumanBodyDetect_hpp */
