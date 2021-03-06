/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface PLAWDWifiBT : PLAWDAuxMetrics {
    PLEntryNotificationOperatorComposition *_btEventCallback;
    PLEntryNotificationOperatorComposition *_btPowerCallback;
    PLEntryNotificationOperatorComposition *_btRailCallback;
    long _btSubmitCnt;
    BOOL _isBTRailStart;
    BOOL _isBTStart;
    BOOL _isWiFiRailStart;
    BOOL _isWiFiStart;
    PLEntryNotificationOperatorComposition *_wifiEventCallback;
    PLEntryNotificationOperatorComposition *_wifiRailCallback;
    long _wifiSubmitCnt;
}

@property (retain) PLEntryNotificationOperatorComposition *btEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *btPowerCallback;
@property (retain) PLEntryNotificationOperatorComposition *btRailCallback;
@property long btSubmitCnt;
@property BOOL isBTRailStart;
@property BOOL isBTStart;
@property BOOL isWiFiRailStart;
@property BOOL isWiFiStart;
@property PLOperator *operator;
@property (nonatomic, retain) NSMutableSet *runningMetrics;
@property (retain) PLEntryNotificationOperatorComposition *wifiEventCallback;
@property (retain) PLEntryNotificationOperatorComposition *wifiRailCallback;
@property long wifiSubmitCnt;

+ (id)entryAggregateDefinitionAwdBT;
+ (id)entryAggregateDefinitionAwdWifi;
+ (id)entryAggregateDefinitions;
+ (id)getSharedObjWithOperator:(id)arg1;

- (void).cxx_destruct;
- (void)addEntryToBTTable:(id)arg1 withValue:(double)arg2;
- (void)addEntryToWiFiTable:(id)arg1 withValue:(double)arg2 andBand:(id)arg3;
- (id)btEventCallback;
- (id)btPowerCallback;
- (id)btRailCallback;
- (long)btSubmitCnt;
- (void)handleBTCallback:(id)arg1;
- (void)handleBTPowerCallback:(id)arg1;
- (void)handleBTRailCallback:(id)arg1;
- (void)handleWifiCallback:(id)arg1;
- (void)handleWifiRailCallback:(id)arg1;
- (BOOL)isBTRailStart;
- (BOOL)isBTStart;
- (BOOL)isWiFiRailStart;
- (BOOL)isWiFiStart;
- (void)resetBTTable;
- (void)resetWifiTable;
- (void)setBtEventCallback:(id)arg1;
- (void)setBtPowerCallback:(id)arg1;
- (void)setBtRailCallback:(id)arg1;
- (void)setBtSubmitCnt:(long)arg1;
- (void)setIsBTRailStart:(BOOL)arg1;
- (void)setIsBTStart:(BOOL)arg1;
- (void)setIsWiFiRailStart:(BOOL)arg1;
- (void)setIsWiFiStart:(BOOL)arg1;
- (void)setWifiEventCallback:(id)arg1;
- (void)setWifiRailCallback:(id)arg1;
- (void)setWifiSubmitCnt:(long)arg1;
- (void)startBtMetricCollection;
- (void)startMetricCollection:(id)arg1;
- (void)startWifiMetricCollection;
- (void)stopMetricCollection:(id)arg1;
- (BOOL)submitBtDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (BOOL)submitDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (BOOL)submitWiFiDataToAWDServer:(id)arg1 withAwdConn:(id)arg2;
- (id)wifiEventCallback;
- (id)wifiRailCallback;
- (long)wifiSubmitCnt;

@end
