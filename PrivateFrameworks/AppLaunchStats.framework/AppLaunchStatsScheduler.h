/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppLaunchStats.framework/AppLaunchStats
 */

@interface AppLaunchStatsScheduler : NSObject <DuetLoggerProtocol, DuetSaveAndRestore> {
    NSRunLoop *aplsRunloop;
    AppLaunchStatsState *aplsState;
    NSDate *fireWakeupDate;
    PCPersistentTimer *pcpTimer;
    NSDate *startDate;
    id /* block */ theCallback;
    int timeZoneSecondsFromGMT;
    bool usefulDate;
}

- (void).cxx_destruct;
- (void)checkTimeZone;
- (void)generateFireDates;
- (id)init:(id)arg1 withRunLoop:(id)arg2 withCallback:(id /* block */)arg3;
- (void)logAll:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)logLight:(struct __asl_object_s { }*)arg1 withMsg:(struct __asl_object_s { }*)arg2 withLevel:(int)arg3;
- (void)programTimer;
- (void)restore:(id)arg1;
- (void)save:(id)arg1;
- (void)timerFired:(id)arg1;

@end