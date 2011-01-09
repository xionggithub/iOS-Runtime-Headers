/* Generated by RuntimeBrowser on iPhone OS 2.2.1
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSMutableArray;



@interface GMMStreetViewReportRequest : GMMRequest <GMMReadWriteStream>
{
    NSMutableArray *_panoramaVisiteds;
}

@property(readonly) NSInteger panoramaVisitedsCount;
@property(retain) NSMutableArray *panoramaVisiteds; /* unknown property attribute: V_panoramaVisiteds */


- (id)init;
- (void)dealloc;
- (NSInteger)panoramaVisitedsCount;
- (void)setPanoramaVisited:(id)arg1 atIndex:(NSUInteger)arg2;
- (id)panoramaVisitedAtIndex:(NSUInteger)arg1;
- (void)addPanoramaVisited:(id)arg1;
- (BOOL)readFromStream:(struct InputDataStream { char *x1; NSUInteger x2; NSUInteger x3; /* Warning: Unrecognized filer type: 'B' using 'void*' */ void*x4; void*x5; }*)arg1;
     /* Encoded args for previous method: c12@0:4^{InputDataStream=*IIBB}8 */

- (void)_writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;
- (void)writeToStream:(struct OutputDataStream { char *x1; NSUInteger x2; NSUInteger x3; }*)arg1;
- (Class)responseClass;
- (id)panoramaVisiteds;
- (void)setPanoramaVisiteds:(id)arg1;

@end