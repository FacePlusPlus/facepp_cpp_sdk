//
//  FaeBeautify.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaeBeautify_hpp
#define FaeBeautify_hpp

#include <stdio.h>

class FaceBeautyfiApi {
public:
    void beautify(const char *api_key,const char *api_secret,const char *file);
};

#endif /* FaeBeautify_hpp */
