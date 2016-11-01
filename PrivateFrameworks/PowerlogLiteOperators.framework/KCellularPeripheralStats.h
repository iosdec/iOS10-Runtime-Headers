/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PowerlogLiteOperators.framework/PowerlogLiteOperators
 */

@interface KCellularPeripheralStats : PBCodable <NSCopying> {
    unsigned int  _durationMs;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int durationMs : 1; 
    }  _has;
    NSMutableArray * _peripherals;
    unsigned long long  _timestamp;
}

@property (nonatomic) unsigned int durationMs;
@property (nonatomic) bool hasDurationMs;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic, retain) NSMutableArray *peripherals;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addPeripherals:(id)arg1;
- (void)clearPeripherals;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)durationMs;
- (bool)hasDurationMs;
- (bool)hasTimestamp;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)peripherals;
- (id)peripheralsAtIndex:(unsigned long long)arg1;
- (unsigned long long)peripheralsCount;
- (bool)readFrom:(id)arg1;
- (void)setDurationMs:(unsigned int)arg1;
- (void)setHasDurationMs:(bool)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setPeripherals:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end