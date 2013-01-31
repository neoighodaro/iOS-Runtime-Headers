/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VGLTexture;

@interface VGLRouteLineMesh : VGLMesh  {
    int _z;
    VGLTexture *_texture;
    BOOL _trafficSpeed;
    float _totalArchLength;
    float _splitLocation;
}

@property int z;
@property BOOL trafficSpeed;
@property(retain) VGLTexture * texture;
@property float totalArchLength;
@property float splitLocation;


- (void)setSplitLocation:(float)arg1;
- (void)setTotalArchLength:(float)arg1;
- (id)initWithVertexCapacity:(int)arg1 indexCapacity:(int)arg2;
- (float)splitLocation;
- (float)totalArchLength;
- (void)setTrafficSpeed:(BOOL)arg1;
- (BOOL)trafficSpeed;
- (void)setTexture:(id)arg1;
- (void)drawTrianglesWithContext:(id)arg1;
- (id)texture;
- (void)drawTrianglesWithContext:(id)arg1 offset:(int)arg2 count:(int)arg3;
- (void)dealloc;
- (id)init;
- (void)setZ:(int)arg1;
- (int)z;

@end