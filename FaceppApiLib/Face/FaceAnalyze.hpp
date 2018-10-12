//
//  FaceAnalyze.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceAnalyze_hpp
#define FaceAnalyze_hpp

#include <stdio.h>

class FaceAnalyzeApi {
public:
    void analyze(const char *api_key ,const char *api_secret,const char *face_tokens,const char *return_attributes);
};

#endif /* FaceAnalyze_hpp */
