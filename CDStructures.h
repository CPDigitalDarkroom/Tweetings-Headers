//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct ACAttitude {
    double pitch;
    double roll;
    double yaw;
};

struct AQPlayer {
    struct OpaqueAudioQueue *_field1;
    struct AudioQueueBuffer *_field2[3];
    struct OpaqueAudioFileID *_field3;
    struct __CFString *_field4;
    struct CAStreamBasicDescription _field5;
    unsigned char _field6;
    unsigned int _field7;
    long long _field8;
    unsigned int _field9;
    unsigned char _field10;
    unsigned char _field11;
};

struct AQRecorder {
    unsigned long long _field1;
    struct __CFString *_field2;
    struct OpaqueAudioQueue *_field3;
    struct AudioQueueBuffer *_field4[3];
    struct OpaqueAudioFileID *_field5;
    long long _field6;
    struct CAStreamBasicDescription _field7;
    unsigned char _field8;
};

struct AudioQueueBuffer;

struct AudioQueueLevelMeterState {
    float _field1;
    float _field2;
};

struct CAStreamBasicDescription {
    double _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
};

struct CATransform3D {
    float _field1;
    float _field2;
    float _field3;
    float _field4;
    float _field5;
    float _field6;
    float _field7;
    float _field8;
    float _field9;
    float _field10;
    float _field11;
    float _field12;
    float _field13;
    float _field14;
    float _field15;
    float _field16;
};

struct CGAffineTransform {
    float a;
    float b;
    float c;
    float d;
    float tx;
    float ty;
};

struct CGContext;

struct CGPoint {
    float x;
    float y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    float width;
    float height;
};

struct FLExternalEditorState {
    struct FLUnicodeString _field1;
    int _field2;
    int _field3;
};

struct FLUnicodeString {
    struct __compressed_pair<std::__1::basic_string<unsigned short, std::__1::char_traits<unsigned short>, std::__1::allocator<unsigned short>>::__rep, std::__1::allocator<unsigned short>> {
        struct __rep {
            union {
                struct __long {
                    unsigned int __cap_;
                    unsigned int __size_;
                    unsigned short *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        unsigned short __lx;
                    } ;
                    unsigned short __data_[5];
                } __s;
                struct __raw __r;
            } ;
        } __first_;
    } __r_;
    struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> _utf8String;
};

struct FleksyAPI {
    struct FleksyAPIpImpl *_field1;
};

struct FleksyAPIpImpl;

struct FleksyListenerImplC {
    CDUnknownFunctionPointerType *_field1;
    void *_field2;
};

struct LevelMeterColorThreshold {
    float _field1;
    id _field2;
};

struct MeterTable {
    float _field1;
    float _field2;
    float _field3;
    float *_field4;
};

struct MoaBitmap {
    struct MoaColor_rgba *_field1;
    unsigned int _field2;
    unsigned int _field3;
    struct MoaGLData *_field4;
};

struct MoaColor_rgba {
    unsigned char _field1;
    unsigned char _field2;
    unsigned char _field3;
    unsigned char _field4;
};

struct MoaEffectParams {
    unsigned int seed;
    double intensity;
    _Bool border;
    double scale;
};

struct MoaGLAutoEnhanceProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    struct MoaGLSharedUniformsAndAttribs _field12;
};

struct MoaGLBasicDotsProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct MoaGLSharedUniformsAndAttribs _field5;
};

struct MoaGLBitmapBlendOverlayProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct MoaGLSharedUniformsAndAttribs _field5;
};

struct MoaGLBitmapBlendProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct MoaGLSharedUniformsAndAttribs _field6;
};

struct MoaGLBitmapDrawWithMaskProgram {
    unsigned int _field1;
    unsigned int _field2;
    struct MoaGLSharedUniformsAndAttribs _field3;
};

struct MoaGLBitmapIdentityProgram {
    unsigned int _field1;
    struct MoaGLSharedUniformsAndAttribs _field2;
};

struct MoaGLBorderSideProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct MoaGLSharedUniformsAndAttribs _field5;
};

struct MoaGLBorderThetaProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    struct MoaGLSharedUniformsAndAttribs _field16;
};

struct MoaGLBorderVignetteProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    struct MoaGLSharedUniformsAndAttribs _field11;
};

struct MoaGLBoxBlurProgram {
    unsigned int _field1;
    unsigned int _field2;
    struct MoaGLSharedUniformsAndAttribs _field3;
};

struct MoaGLBuffers {
    unsigned int _field1;
    unsigned int _field2;
};

struct MoaGLColorBlendColorProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct MoaGLSharedUniformsAndAttribs _field5;
};

struct MoaGLColorMapProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct MoaGLSharedUniformsAndAttribs _field4;
};

struct MoaGLColorSplashAutoProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    struct MoaGLSharedUniformsAndAttribs _field13;
};

struct MoaGLColorTransformAndOverlayWithOriginalProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct MoaGLSharedUniformsAndAttribs _field6;
};

struct MoaGLColorTransformProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct MoaGLSharedUniformsAndAttribs _field5;
};

struct MoaGLData {
    struct MoaGLBuffers _field1;
    struct MoaGLPrograms _field2;
    struct MoaGLRenderingObjects _field3;
    struct MoaGLImageData _field4;
    int _field5;
    int _field6;
    int _field7[8];
    struct {
        float _field1[3];
        float _field2[2];
    } _field8[4];
    int _field9;
    int _field10;
    _Bool _field11;
    _Bool _field12;
    _Bool _field13;
};

struct MoaGLDotMatrixProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct MoaGLSharedUniformsAndAttribs _field5;
};

struct MoaGLDrawingProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct MoaGLSharedUniformsAndAttribs _field4;
};

struct MoaGLFlareProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    struct MoaGLSharedUniformsAndAttribs _field12;
};

struct MoaGLGaussianBlurProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    struct MoaGLSharedUniformsAndAttribs _field8;
};

struct MoaGLGradientProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    struct MoaGLSharedUniformsAndAttribs _field16;
};

struct MoaGLGrittyDotsProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct MoaGLSharedUniformsAndAttribs _field5;
};

struct MoaGLHardRandBorderProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    struct MoaGLSharedUniformsAndAttribs _field16;
};

struct MoaGLHistogramProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
};

struct MoaGLImageData {
    unsigned int texID;
    unsigned int width;
    unsigned int height;
    int orientation;
    int pixelFormat;
};

struct MoaGLIntensityMapProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    struct MoaGLSharedUniformsAndAttribs _field5;
};

struct MoaGLLABToRGBProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct MoaGLSharedUniformsAndAttribs _field4;
};

struct MoaGLLineProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    unsigned int _field12;
    unsigned int _field13;
    unsigned int _field14;
    unsigned int _field15;
    unsigned int _field16;
    struct MoaGLSharedUniformsAndAttribs _field17;
};

struct MoaGLMaskDotsProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    struct MoaGLSharedUniformsAndAttribs _field9;
};

struct MoaGLMaskLinearProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    struct MoaGLSharedUniformsAndAttribs _field8;
};

struct MoaGLMaskRadialProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct MoaGLSharedUniformsAndAttribs _field6;
};

struct MoaGLNoiseProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct MoaGLSharedUniformsAndAttribs _field4;
};

struct MoaGLPhotoshopSatBWProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    struct MoaGLSharedUniformsAndAttribs _field7;
};

struct MoaGLPrograms {
    unsigned int _field1;
    struct MoaGLBitmapIdentityProgram _field2;
    struct MoaGLColorTransformProgram _field3;
    struct MoaGLColorMapProgram _field4;
    struct MoaGLFlareProgram _field5;
    struct MoaGLFlareProgram _field6;
    struct MoaGLFlareProgram _field7;
    struct MoaGLFlareProgram _field8;
    struct MoaGLBitmapBlendProgram _field9;
    struct MoaGLHistogramProgram _field10;
    struct MoaGLBorderVignetteProgram _field11;
    struct MoaGLBorderThetaProgram _field12;
    struct MoaGLBorderSideProgram _field13;
    struct MoaGLDotMatrixProgram _field14;
    struct MoaGLRingFlareProgram _field15;
    struct MoaGLLineProgram _field16;
    struct MoaGLNoiseProgram _field17;
    struct MoaGLBasicDotsProgram _field18;
    struct MoaGLHardRandBorderProgram _field19;
    struct MoaGLAutoEnhanceProgram _field20;
    struct MoaGLRGBToLABProgram _field21;
    struct MoaGLLABToRGBProgram _field22;
    struct MoaGLBitmapDrawWithMaskProgram _field23;
    struct MoaGLWhitenProgram _field24;
    struct MoaGLRedeyeProgram _field25;
    struct MoaGLDrawingProgram _field26;
    struct MoaGLBorderVignetteProgram _field27;
    struct MoaGLFlareProgram _field28;
    struct MoaGLBitmapBlendOverlayProgram _field29;
    struct MoaGLColorTransformAndOverlayWithOriginalProgram _field30;
    struct MoaGLGrittyDotsProgram _field31;
    struct MoaGLPhotoshopSatBWProgram _field32;
    struct MoaGLTwitterClarityProgram _field33;
    struct MoaGLFlareProgram _field34;
    struct MoaGLFlareProgram _field35;
    struct MoaGLFlareProgram _field36;
    struct MoaGLFlareProgram _field37;
    struct MoaGLFlareProgram _field38;
    struct MoaGLIntensityMapProgram _field39;
    struct MoaGLIntensityMapProgram _field40;
    struct MoaGLBorderVignetteProgram _field41;
    struct MoaGLColorBlendColorProgram _field42;
    struct MoaGLPhotoshopSatBWProgram _field43;
    struct MoaGLBitmapBlendOverlayProgram _field44;
    struct MoaGLGradientProgram _field45;
    struct MoaGLGradientProgram _field46;
    struct MoaGLGradientProgram _field47;
    struct MoaGLFlareProgram _field48;
    struct MoaGLIntensityMapProgram _field49;
    struct MoaGLMaskLinearProgram _field50;
    struct MoaGLMaskRadialProgram _field51;
    struct MoaGLRedrawWithMaskProgram _field52;
    struct MoaGLMaskDotsProgram _field53;
    struct MoaGLColorSplashAutoProgram _field54;
    struct MoaGLBoxBlurProgram _field55;
    struct MoaGLBoxBlurProgram _field56;
    struct MoaGLBoxBlurProgram _field57;
    struct MoaGLBoxBlurProgram _field58;
    struct MoaGLBoxBlurProgram _field59;
    struct MoaGLBoxBlurProgram _field60;
    struct MoaGLGaussianBlurProgram _field61;
    struct MoaGLGaussianBlurProgram _field62;
};

struct MoaGLRGBToLABProgram {
    unsigned int _field1;
    struct MoaGLSharedUniformsAndAttribs _field2;
};

struct MoaGLRedeyeProgram {
    unsigned int _field1;
    struct MoaGLSharedUniformsAndAttribs _field2;
};

struct MoaGLRedrawWithMaskProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    struct MoaGLSharedUniformsAndAttribs _field4;
};

struct MoaGLRenderingObjects {
    unsigned int offscreenFramebuffer;
    unsigned int processedTexture1;
    unsigned int processedTexture2;
    unsigned int readTexture;
    unsigned int writeTexture;
    unsigned int renderbuffer;
    float renderbufferWidth;
    float renderbufferHeight;
};

struct MoaGLRingFlareProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    unsigned int _field6;
    unsigned int _field7;
    unsigned int _field8;
    unsigned int _field9;
    unsigned int _field10;
    unsigned int _field11;
    struct MoaGLSharedUniformsAndAttribs _field12;
};

struct MoaGLSharedUniformsAndAttribs {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
};

struct MoaGLTwitterClarityProgram {
    unsigned int _field1;
    unsigned int _field2;
    unsigned int _field3;
    unsigned int _field4;
    unsigned int _field5;
    struct MoaGLSharedUniformsAndAttribs _field6;
};

struct MoaGLWhitenProgram {
    unsigned int _field1;
    unsigned int _field2;
    struct MoaGLSharedUniformsAndAttribs _field3;
};

struct MoaToolDrawParams {
    int _field1;
    double _field2;
    double _field3;
    double _field4;
    struct MoaColor_rgba _field5;
    _Bool _field6;
    int _field7;
    int _field8;
    double _field9;
    double _field10;
    _Bool _field11;
    double _field12;
    double _field13;
};

struct OpaqueAudioFileID;

struct OpaqueAudioQueue;

struct UIEdgeInsets {
    float top;
    float left;
    float bottom;
    float right;
};

struct _NSRange {
    unsigned int location;
    unsigned int length;
};

struct __CFString;

struct __raw {
    unsigned long __words[3];
};

struct basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>> {
    struct __compressed_pair<std::__1::basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char>>::__rep, std::__1::allocator<char>> {
        struct __rep {
            union {
                struct __long {
                    unsigned int __cap_;
                    unsigned int __size_;
                    char *__data_;
                } __l;
                struct __short {
                    union {
                        unsigned char __size_;
                        char __lx;
                    } ;
                    char __data_[11];
                } __s;
                struct __raw __r;
            } ;
        } __first_;
    } __r_;
};

struct in_addr {
    unsigned int _field1;
};

struct map<FLUnicodeString, CGPoint, std::__1::less<FLUnicodeString>, std::__1::allocator<std::__1::pair<const FLUnicodeString, CGPoint>>> {
    struct __tree<std::__1::__value_type<FLUnicodeString, CGPoint>, std::__1::__map_value_compare<FLUnicodeString, std::__1::__value_type<FLUnicodeString, CGPoint>, std::__1::less<FLUnicodeString>, true>, std::__1::allocator<std::__1::__value_type<FLUnicodeString, CGPoint>>> {
        struct __tree_node<std::__1::__value_type<FLUnicodeString, CGPoint>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<FLUnicodeString, CGPoint>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
                struct __tree_node_base<void *> *__left_;
            } __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<FLUnicodeString, std::__1::__value_type<FLUnicodeString, CGPoint>, std::__1::less<FLUnicodeString>, true>> {
            unsigned long __first_;
        } __pair3_;
    } __tree_;
};

struct re_guts;

struct sockaddr_in {
    unsigned char _field1;
    unsigned char _field2;
    unsigned short _field3;
    struct in_addr _field4;
    char _field5[8];
};

struct vector<FLUnicodeString, std::__1::allocator<FLUnicodeString>> {
    struct FLUnicodeString *_field1;
    struct FLUnicodeString *_field2;
    struct __compressed_pair<FLUnicodeString *, std::__1::allocator<FLUnicodeString>> {
        struct FLUnicodeString *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    id _field1;
    unsigned short _field2;
} CDStruct_6a59ab51;

typedef struct {
    unsigned long _field1;
    id *_field2;
    unsigned long *_field3;
    unsigned long _field4[5];
} CDStruct_11f37819;

typedef struct {
    double latitude;
    double longitude;
} CDStruct_2c43369c;

typedef struct {
    long long _field1;
    long long _field2;
} CDStruct_912cb5d2;

typedef struct {
    struct CGContext *context;
    struct CGPoint old;
    struct CGPoint oldMid;
} CDStruct_35ba47b1;

// Template types
typedef struct map<FLUnicodeString, CGPoint, std::__1::less<FLUnicodeString>, std::__1::allocator<std::__1::pair<const FLUnicodeString, CGPoint>>> {
    struct __tree<std::__1::__value_type<FLUnicodeString, CGPoint>, std::__1::__map_value_compare<FLUnicodeString, std::__1::__value_type<FLUnicodeString, CGPoint>, std::__1::less<FLUnicodeString>, true>, std::__1::allocator<std::__1::__value_type<FLUnicodeString, CGPoint>>> {
        struct __tree_node<std::__1::__value_type<FLUnicodeString, CGPoint>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<FLUnicodeString, CGPoint>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
                struct __tree_node_base<void *> *__left_;
            } __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<FLUnicodeString, std::__1::__value_type<FLUnicodeString, CGPoint>, std::__1::less<FLUnicodeString>, true>> {
            unsigned long __first_;
        } __pair3_;
    } __tree_;
} map_b5835894;

typedef struct vector<FLUnicodeString, std::__1::allocator<FLUnicodeString>> {
    struct FLUnicodeString *_field1;
    struct FLUnicodeString *_field2;
    struct __compressed_pair<FLUnicodeString *, std::__1::allocator<FLUnicodeString>> {
        struct FLUnicodeString *_field1;
    } _field3;
} vector_f6141375;

