//
//  FaceDetect.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/29.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceDetect_hpp
#define FaceDetect_hpp

class FaceDetectApi {
public:
    void detect(const char *api_key,const char *api_secret,const char * filePath);
};


#endif /* FaceDetect_hpp */
