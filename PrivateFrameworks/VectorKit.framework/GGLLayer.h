/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class <GGLLayerDisruptor>, NSObject<GGLRenderQueueSource>;

@interface GGLLayer : CAEAGLLayer {
    struct unique_ptr<ggl::RenderTarget, std::__1::default_delete<ggl::RenderTarget> > { 
        struct __compressed_pair<ggl::RenderTarget *, std::__1::default_delete<ggl::RenderTarget> > { 
            struct RenderTarget {} *__first_; 
        } __ptr_; 
    struct shared_ptr<ggl::GLRenderer> { 
        struct GLRenderer {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    struct CGSize { 
        double width; 
        double height; 
    } _backingSize;
    unsigned int _depthBuffer;
    unsigned int _frameBuffer;
    unsigned int _renderBuffer;
    <GGLLayerDisruptor> *_renderDisruptor;
    NSObject<GGLRenderQueueSource> *_renderSource;
    } _renderTarget;
    } _renderer;
    bool_readPixels;
}

@property(readonly) struct GLRenderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; boolx5; float x6; boolx7; id x8; struct RenderState {} *x9; /* Warning: unhandled struct encoding: '{unique_ptr<ggl::OESContext' */ struct x10; void*x11; void*x12; void*x13; void*x14; void*x15; void*x16; void*x17; void*x18; void*x19; }* renderer; /* unknown property attribute:  std::__1::default_delete<ggl::CommandBuffer> >=^{CommandBuffer}}}} */
@property(readonly) struct CGSize { double x1; double x2; } backingSize;
@property <GGLLayerDisruptor> * renderDisruptor;
@property NSObject<GGLRenderQueueSource> * renderSource;

- (struct GLRenderer { int (**x1)(); struct Device {} *x2; unsigned long long x3; unsigned long long x4; boolx5; float x6; boolx7; id x8; struct RenderState {} *x9; struct unique_ptr<ggl::OESContext, std::__1::default_delete<ggl::OESContext> > { struct __compressed_pair<ggl::OESContext *, std::__1::default_delete<ggl::OESContext> > { struct OESContext {} *x_1_2_1; } x_10_1_1; } x10; struct RenderTarget {} *x11; struct TransactionBuffer { struct deque<std::__1::shared_ptr<ggl::RenderTransaction>, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { struct __split_buffer<std::__1::shared_ptr<ggl::RenderTransaction> *, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_1; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_2; struct shared_ptr<ggl::RenderTransaction> {} **x_1_3_3; struct __compressed_pair<std::__1::shared_ptr<ggl::RenderTransaction> **, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> *> > { struct shared_ptr<ggl::RenderTransaction> {} **x_4_4_1; } x_1_3_4; } x_1_2_1; unsigned long long x_1_2_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::shared_ptr<ggl::RenderTransaction> > > { unsigned long long x_3_3_1; } x_1_2_3; } x_12_1_1; } x12; struct unique_ptr<ggl::PerformanceHUD, std::__1::default_delete<ggl::PerformanceHUD> > { struct __compressed_pair<ggl::PerformanceHUD *, std::__1::default_delete<ggl::PerformanceHUD> > { struct PerformanceHUD {} *x_1_2_1; } x_13_1_1; } x13; struct vector<std::__1::shared_ptr<ggl::DebugRenderer>, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_14_1_1; struct shared_ptr<ggl::DebugRenderer> {} *x_14_1_2; struct __compressed_pair<std::__1::shared_ptr<ggl::DebugRenderer> *, std::__1::allocator<std::__1::shared_ptr<ggl::DebugRenderer> > > { struct shared_ptr<ggl::DebugRenderer> {} *x_3_2_1; } x_14_1_3; } x14; struct deque<std::__1::pair<unsigned long, void *>, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { struct __split_buffer<std::__1::pair<unsigned long, void *> *, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_1_2_1; struct pair<unsigned long, void *> {} **x_1_2_2; struct pair<unsigned long, void *> {} **x_1_2_3; struct __compressed_pair<std::__1::pair<unsigned long, void *> **, std::__1::allocator<std::__1::pair<unsigned long, void *> *> > { struct pair<unsigned long, void *> {} **x_4_3_1; } x_1_2_4; } x_15_1_1; unsigned long long x_15_1_2; struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::pair<unsigned long, void *> > > { unsigned long long x_3_2_1; } x_15_1_3; } x15; struct unique_ptr<ggl::RenderQueue, std::__1::default_delete<ggl::RenderQueue> > { struct __compressed_pair<ggl::RenderQueue *, std::__1::default_delete<ggl::RenderQueue> > { struct RenderQueue {} *x_1_2_1; } x_16_1_1; } x16; struct vector<ggl::BufferLoadItem, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_17_1_1; struct BufferLoadItem {} *x_17_1_2; struct __compressed_pair<ggl::BufferLoadItem *, std::__1::allocator<ggl::BufferLoadItem> > { struct BufferLoadItem {} *x_3_2_1; } x_17_1_3; } x17; struct vector<ggl::Texture2DLoadItem, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_18_1_1; struct Texture2DLoadItem {} *x_18_1_2; struct __compressed_pair<ggl::Texture2DLoadItem *, std::__1::allocator<ggl::Texture2DLoadItem> > { struct Texture2DLoadItem {} *x_3_2_1; } x_18_1_3; } x18; unsigned int x19; struct unique_ptr<ggl::CommandBuffer, std::__1::default_delete<ggl::CommandBuffer> > { struct __compressed_pair<ggl::CommandBuffer *, std::__1::default_delete<ggl::CommandBuffer> > { struct CommandBuffer {} *x_1_2_1; } x_20_1_1; } x20; }*)renderer;
- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)_createRenderTarget;
- (void)_deleteBuffers;
- (struct CGSize { double x1; double x2; })backingSize;
- (void)dealloc;
- (void)didEnterBackground;
- (void)drawWithTimestamp:(double)arg1;
- (id)initWithRenderer:(struct shared_ptr<ggl::GLRenderer> { struct GLRenderer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (void)layoutSublayers;
- (id)renderDisruptor;
- (id)renderSource;
- (void)setContentsScale:(double)arg1;
- (void)setReadPixels;
- (void)setRenderDisruptor:(id)arg1;
- (void)setRenderSource:(id)arg1;

@end