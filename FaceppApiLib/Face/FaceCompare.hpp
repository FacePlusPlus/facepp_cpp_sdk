//
//  FaceCompare.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceCompare_hpp
#define FaceCompare_hpp

#include <stdio.h>

class FaceCompareApi {
public:
    void compare(const char *api_key,const char *api_secret, const char * filePath_1,const char * filePath_2);
};

#endif /* FaceCompare_hpp */
