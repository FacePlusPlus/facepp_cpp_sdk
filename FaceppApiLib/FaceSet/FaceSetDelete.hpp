//
//  FaceSetDelete.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceSetDelete_hpp
#define FaceSetDelete_hpp

#include <stdio.h>

class FaceSetDeleteApi {
public:
    void detelte(const char *api_key ,const char *api_secret,const char *faceset_token, int check_empty) ;
};

#endif /* FaceSetDelete_hpp */
