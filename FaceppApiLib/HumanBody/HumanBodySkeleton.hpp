//
//  HumanBodySkeleton.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef HumanBodySkeleton_hpp
#define HumanBodySkeleton_hpp

#include <stdio.h>

class HumanBodySkeleton {
public:
    void detectSkeleton(const char *api_key ,const char *api_secret,const char *filePath);
};

#endif /* HumanBodySkeleton_hpp */
