//
//  FaceSetDetail.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceSetDetail_hpp
#define FaceSetDetail_hpp

#include <stdio.h>

class FaceSetDetailApi{
public:
    void getDetail(const char *api_key ,const char *api_secret,const char *faceset_token);
};

#endif /* FaceSetDetail_hpp */
