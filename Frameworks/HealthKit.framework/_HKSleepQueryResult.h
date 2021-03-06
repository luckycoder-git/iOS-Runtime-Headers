/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface _HKSleepQueryResult : NSObject <NSSecureCoding, _HKDateBounded> {
    NSDateInterval * _dateInterval;
    NSDateInterval * _resultInterval;
    NSDictionary * _resultsByCategoryValue;
    NSDictionary * _samplesBySource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDateInterval *resultInterval;
@property (readonly) Class superclass;

+ (id)_preferredSourceFromSources:(id)arg1 sourceOrder:(id)arg2;
+ (id)dateIntervalForSamples:(id)arg1;
+ (id)samplesForSamplesBySource:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_calculatePreferredDuration:(double*)arg1 categoryValue:(long long*)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dateInterval;
- (id)dateIntervalsForCategoryValue:(long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)endDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultInterval:(id)arg1 dateIntervalsByCategoryValue:(id)arg2 samplesBySource:(id)arg3;
- (id)preferredDateIntervals;
- (id)resultInterval;
- (id)startDate;

@end
