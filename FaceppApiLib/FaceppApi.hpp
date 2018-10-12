//
//  FaceppApi.hpp
//  FaceppApiLib
//
//  Created by Li Cheng on 2018/9/30.
//  Copyright © 2018年 Li Cheng. All rights reserved.
//

#ifndef FaceppApi_hpp
#define FaceppApi_hpp

#include <stdio.h>

class FaceppApi {

    protected:
        const char * key; // Api_key
        const char * secret; // Api_secret
    public:
        FaceppApi(const char * key, const char * secret);
    
        // Face Api 组
        void detect(const char * filePath);
        void compare(const char * file_1,const char * file_2);
        void beautify(const char *file);
        void analyze(const char *face_tokens,const char *return_attributes);
        void getDetail(const char *face_token);
        void setUserId(const char *face_token, const char *user_id);
    
        // FaceSet Api 组
        void createFaceset(const char *name);
        void addFace(const char *faceset_token, const char* face_tokens);
        void addFaceAsync(const char *faceset_token, const char* face_tokens);
        void removeFace(const char *api_key, const char *api_secret, const char *faceset_token, const char *face_tokens);
        void removeFaceAsync(const char *faceset_token, const char* face_tokens);
        void search(const char *filePath, const char *faceset_token);
        void getFaceSetDetail(const char *faceset_token);
        void updateFaceSet(const char *faceset_token, const char* new_name);
        void detelteFaceSet(const char *faceset_token, int check_empty) ;
        void getFaceSetList(const char *api_key ,const char *api_secret);
        void getTaskStatus(const char *api_key, const char *api_secret, const char *task_id);
    
        // 人体检测 Api 组
        void detectBody(const char *filePath, const char *return_attributes);
        void detectSkeleton(const char *filePath);
        void humanbodySegment(const char *filePath);
        void detectGuesture(const char *filePath);
    
        // 证件识别 Api 组
        void detectIdCard(const char *filePath, const int legality);
        void detectDriverLicense(const char *filePath, const int return_score);
        void detectVehicle(const char *filePath);
        void detectBankCard(const char *filePath);
    
        // 图像识别 Api 组
        void detectLicensePlate(const char *filePath);
        void mergeFace(const char *template_file, const char *merge_file, const int merge_rate);
        void recognizetext(const char *filePath);
        void detectSceneAndObject(const char *filePath);
};

#endif /* FaceppApi_hpp */
