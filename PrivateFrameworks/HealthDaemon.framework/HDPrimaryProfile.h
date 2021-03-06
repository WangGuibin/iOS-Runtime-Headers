/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDPrimaryProfile : HDProfile {
    HDDataCollectionManager * _dataCollectionManager;
    HDWorkoutManager * _workoutManager;
}

- (void).cxx_destruct;
- (id)createActiveWorkoutServerWithClientServer:(id)arg1 serverConfiguration:(id)arg2 server:(id)arg3 client:(id)arg4 delegate:(id)arg5;
- (id)dataCollectionManager;
- (id)healthDataCollectionManager;
- (id)initWithHomeDirectory:(id)arg1 daemon:(id)arg2;
- (void)terminationCleanup;
- (id)workoutManager;

@end
