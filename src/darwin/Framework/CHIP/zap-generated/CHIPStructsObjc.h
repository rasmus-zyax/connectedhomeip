/*
 *
 *    Copyright (c) 2021 Project CHIP Authors
 *
 *    Licensed under the Apache License, Version 2.0 (the "License");
 *    you may not use this file except in compliance with the License.
 *    You may obtain a copy of the License at
 *
 *        http://www.apache.org/licenses/LICENSE-2.0
 *
 *    Unless required by applicable law or agreed to in writing, software
 *    distributed under the License is distributed on an "AS IS" BASIS,
 *    WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 *    See the License for the specific language governing permissions and
 *    limitations under the License.
 */

// THIS FILE IS GENERATED BY ZAP

#ifndef CHIP_STRUCTS_H
#define CHIP_STRUCTS_H

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface CHIPScenesClusterSceneExtensionFieldSet : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull clusterId;
@property (strong, nonatomic) NSNumber * _Nonnull length;
@property (strong, nonatomic) NSNumber * _Nonnull value;
- (instancetype)init;
@end

@interface CHIPPowerProfileClusterPowerProfileRecord : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull powerProfileId;
@property (strong, nonatomic) NSNumber * _Nonnull energyPhaseId;
@property (strong, nonatomic) NSNumber * _Nonnull powerProfileRemoteControl;
@property (strong, nonatomic) NSNumber * _Nonnull powerProfileState;
- (instancetype)init;
@end

@interface CHIPPowerProfileClusterScheduledPhase : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull energyPhaseId;
@property (strong, nonatomic) NSNumber * _Nonnull scheduledTime;
- (instancetype)init;
@end

@interface CHIPPowerProfileClusterTransferredPhase : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull energyPhaseId;
@property (strong, nonatomic) NSNumber * _Nonnull macroPhaseId;
@property (strong, nonatomic) NSNumber * _Nonnull expectedDuration;
@property (strong, nonatomic) NSNumber * _Nonnull peakPower;
@property (strong, nonatomic) NSNumber * _Nonnull energy;
@property (strong, nonatomic) NSNumber * _Nonnull maxActivationDelay;
- (instancetype)init;
@end

@interface CHIPDescriptorClusterDeviceType : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull type;
@property (strong, nonatomic) NSNumber * _Nonnull revision;
- (instancetype)init;
@end

@interface CHIPBridgedActionsClusterActionStruct : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull actionID;
@property (strong, nonatomic) NSString * _Nonnull name;
@property (strong, nonatomic) NSNumber * _Nonnull type;
@property (strong, nonatomic) NSNumber * _Nonnull endpointListID;
@property (strong, nonatomic) NSNumber * _Nonnull supportedCommands;
@property (strong, nonatomic) NSNumber * _Nonnull status;
- (instancetype)init;
@end

@interface CHIPBridgedActionsClusterEndpointListStruct : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull endpointListID;
@property (strong, nonatomic) NSString * _Nonnull name;
@property (strong, nonatomic) NSNumber * _Nonnull type;
@property (strong, nonatomic) NSData * _Nonnull endpoints;
- (instancetype)init;
@end

@interface CHIPGeneralCommissioningClusterBasicCommissioningInfoType : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull failSafeExpiryLengthMs;
- (instancetype)init;
@end

@interface CHIPNetworkCommissioningClusterThreadInterfaceScanResult : NSObject
@property (strong, nonatomic) NSData * _Nonnull discoveryResponse;
- (instancetype)init;
@end

@interface CHIPNetworkCommissioningClusterWiFiInterfaceScanResult : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull security;
@property (strong, nonatomic) NSData * _Nonnull ssid;
@property (strong, nonatomic) NSData * _Nonnull bssid;
@property (strong, nonatomic) NSNumber * _Nonnull channel;
@property (strong, nonatomic) NSNumber * _Nonnull frequencyBand;
- (instancetype)init;
@end

@interface CHIPGeneralDiagnosticsClusterNetworkInterfaceType : NSObject
@property (strong, nonatomic) NSString * _Nonnull name;
@property (strong, nonatomic) NSNumber * _Nonnull fabricConnected;
@property (strong, nonatomic) NSNumber * _Nonnull offPremiseServicesReachableIPv4;
@property (strong, nonatomic) NSNumber * _Nonnull offPremiseServicesReachableIPv6;
@property (strong, nonatomic) NSData * _Nonnull hardwareAddress;
@property (strong, nonatomic) NSNumber * _Nonnull type;
- (instancetype)init;
@end

@interface CHIPSoftwareDiagnosticsClusterSoftwareFault : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull id;
@property (strong, nonatomic) NSString * _Nonnull name;
@property (strong, nonatomic) NSData * _Nonnull faultRecording;
- (instancetype)init;
@end

@interface CHIPSoftwareDiagnosticsClusterThreadMetrics : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull id;
@property (strong, nonatomic) NSString * _Nonnull name;
@property (strong, nonatomic) NSNumber * _Nonnull stackFreeCurrent;
@property (strong, nonatomic) NSNumber * _Nonnull stackFreeMinimum;
@property (strong, nonatomic) NSNumber * _Nonnull stackSize;
- (instancetype)init;
@end

@interface CHIPThreadNetworkDiagnosticsClusterNeighborTable : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull extAddress;
@property (strong, nonatomic) NSNumber * _Nonnull age;
@property (strong, nonatomic) NSNumber * _Nonnull rloc16;
@property (strong, nonatomic) NSNumber * _Nonnull linkFrameCounter;
@property (strong, nonatomic) NSNumber * _Nonnull mleFrameCounter;
@property (strong, nonatomic) NSNumber * _Nonnull lqi;
@property (strong, nonatomic) NSNumber * _Nonnull averageRssi;
@property (strong, nonatomic) NSNumber * _Nonnull lastRssi;
@property (strong, nonatomic) NSNumber * _Nonnull frameErrorRate;
@property (strong, nonatomic) NSNumber * _Nonnull messageErrorRate;
@property (strong, nonatomic) NSNumber * _Nonnull rxOnWhenIdle;
@property (strong, nonatomic) NSNumber * _Nonnull fullThreadDevice;
@property (strong, nonatomic) NSNumber * _Nonnull fullNetworkData;
@property (strong, nonatomic) NSNumber * _Nonnull isChild;
- (instancetype)init;
@end

@interface CHIPThreadNetworkDiagnosticsClusterOperationalDatasetComponents : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull activeTimestampPresent;
@property (strong, nonatomic) NSNumber * _Nonnull pendingTimestampPresent;
@property (strong, nonatomic) NSNumber * _Nonnull masterKeyPresent;
@property (strong, nonatomic) NSNumber * _Nonnull networkNamePresent;
@property (strong, nonatomic) NSNumber * _Nonnull extendedPanIdPresent;
@property (strong, nonatomic) NSNumber * _Nonnull meshLocalPrefixPresent;
@property (strong, nonatomic) NSNumber * _Nonnull delayPresent;
@property (strong, nonatomic) NSNumber * _Nonnull panIdPresent;
@property (strong, nonatomic) NSNumber * _Nonnull channelPresent;
@property (strong, nonatomic) NSNumber * _Nonnull pskcPresent;
@property (strong, nonatomic) NSNumber * _Nonnull securityPolicyPresent;
@property (strong, nonatomic) NSNumber * _Nonnull channelMaskPresent;
- (instancetype)init;
@end

@interface CHIPThreadNetworkDiagnosticsClusterRouteTable : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull extAddress;
@property (strong, nonatomic) NSNumber * _Nonnull rloc16;
@property (strong, nonatomic) NSNumber * _Nonnull routerId;
@property (strong, nonatomic) NSNumber * _Nonnull nextHop;
@property (strong, nonatomic) NSNumber * _Nonnull pathCost;
@property (strong, nonatomic) NSNumber * _Nonnull lqiIn;
@property (strong, nonatomic) NSNumber * _Nonnull lqiOut;
@property (strong, nonatomic) NSNumber * _Nonnull age;
@property (strong, nonatomic) NSNumber * _Nonnull allocated;
@property (strong, nonatomic) NSNumber * _Nonnull linkEstablished;
- (instancetype)init;
@end

@interface CHIPThreadNetworkDiagnosticsClusterSecurityPolicy : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull rotationTime;
@property (strong, nonatomic) NSNumber * _Nonnull flags;
- (instancetype)init;
@end

@interface CHIPOperationalCredentialsClusterFabricDescriptor : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull fabricIndex;
@property (strong, nonatomic) NSData * _Nonnull rootPublicKey;
@property (strong, nonatomic) NSNumber * _Nonnull vendorId;
@property (strong, nonatomic) NSNumber * _Nonnull fabricId;
@property (strong, nonatomic) NSNumber * _Nonnull nodeId;
@property (strong, nonatomic) NSString * _Nonnull label;
- (instancetype)init;
@end

@interface CHIPOperationalCredentialsClusterNOCStruct : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull fabricIndex;
@property (strong, nonatomic) NSData * _Nonnull noc;
- (instancetype)init;
@end

@interface CHIPFixedLabelClusterLabelStruct : NSObject
@property (strong, nonatomic) NSString * _Nonnull label;
@property (strong, nonatomic) NSString * _Nonnull value;
- (instancetype)init;
@end

@interface CHIPModeSelectClusterModeOptionStruct : NSObject
@property (strong, nonatomic) NSString * _Nonnull label;
@property (strong, nonatomic) NSNumber * _Nonnull mode;
@property (strong, nonatomic) NSNumber * _Nonnull semanticTag;
- (instancetype)init;
@end

@interface CHIPModeSelectClusterSemanticTag : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull mfgCode;
@property (strong, nonatomic) NSNumber * _Nonnull value;
- (instancetype)init;
@end

@interface CHIPIasAceClusterIasAceZoneStatusResult : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull zoneId;
@property (strong, nonatomic) NSNumber * _Nonnull zoneStatus;
- (instancetype)init;
@end

@interface CHIPTvChannelClusterTvChannelInfo : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull majorNumber;
@property (strong, nonatomic) NSNumber * _Nonnull minorNumber;
@property (strong, nonatomic) NSString * _Nonnull name;
@property (strong, nonatomic) NSString * _Nonnull callSign;
@property (strong, nonatomic) NSString * _Nonnull affiliateCallSign;
- (instancetype)init;
@end

@interface CHIPTvChannelClusterTvChannelLineupInfo : NSObject
@property (strong, nonatomic) NSString * _Nonnull operatorName;
@property (strong, nonatomic) NSString * _Nonnull lineupName;
@property (strong, nonatomic) NSString * _Nonnull postalCode;
@property (strong, nonatomic) NSNumber * _Nonnull lineupInfoType;
- (instancetype)init;
@end

@interface CHIPTargetNavigatorClusterNavigateTargetTargetInfo : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull identifier;
@property (strong, nonatomic) NSString * _Nonnull name;
- (instancetype)init;
@end

@interface CHIPMediaPlaybackClusterMediaPlaybackPosition : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull updatedAt;
@property (strong, nonatomic) NSNumber * _Nonnull position;
- (instancetype)init;
@end

@interface CHIPMediaInputClusterMediaInputInfo : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull index;
@property (strong, nonatomic) NSNumber * _Nonnull inputType;
@property (strong, nonatomic) NSString * _Nonnull name;
@property (strong, nonatomic) NSString * _Nonnull descriptionString;
- (instancetype)init;
@end

@interface CHIPContentLauncherClusterContentLaunchAdditionalInfo : NSObject
@property (strong, nonatomic) NSString * _Nonnull name;
@property (strong, nonatomic) NSString * _Nonnull value;
- (instancetype)init;
@end

@interface CHIPContentLauncherClusterContentLaunchParamater : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull type;
@property (strong, nonatomic) NSString * _Nonnull value;
@property (strong, nonatomic) NSArray * _Nonnull externalIDList;
- (instancetype)init;
@end

@interface CHIPContentLauncherClusterContentLaunchBrandingInformation : NSObject
@property (strong, nonatomic) NSString * _Nonnull providerName;
@property (strong, nonatomic) NSNumber * _Nonnull background;
@property (strong, nonatomic) NSNumber * _Nonnull logo;
@property (strong, nonatomic) NSNumber * _Nonnull progressBar;
@property (strong, nonatomic) NSNumber * _Nonnull splash;
@property (strong, nonatomic) NSNumber * _Nonnull waterMark;
- (instancetype)init;
@end

@interface CHIPContentLauncherClusterContentLaunchDimension : NSObject
@property (strong, nonatomic) NSString * _Nonnull width;
@property (strong, nonatomic) NSString * _Nonnull height;
@property (strong, nonatomic) NSNumber * _Nonnull metric;
- (instancetype)init;
@end

@interface CHIPContentLauncherClusterContentLaunchStyleInformation : NSObject
@property (strong, nonatomic) NSString * _Nonnull imageUrl;
@property (strong, nonatomic) NSString * _Nonnull color;
@property (strong, nonatomic) NSNumber * _Nonnull size;
- (instancetype)init;
@end

@interface CHIPAudioOutputClusterAudioOutputInfo : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull index;
@property (strong, nonatomic) NSNumber * _Nonnull outputType;
@property (strong, nonatomic) NSString * _Nonnull name;
- (instancetype)init;
@end

@interface CHIPApplicationLauncherClusterApplicationLauncherApp : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull catalogVendorId;
@property (strong, nonatomic) NSString * _Nonnull applicationId;
- (instancetype)init;
@end

@interface CHIPTestClusterClusterSimpleStruct : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull a;
@property (strong, nonatomic) NSNumber * _Nonnull b;
@property (strong, nonatomic) NSNumber * _Nonnull c;
@property (strong, nonatomic) NSData * _Nonnull d;
@property (strong, nonatomic) NSString * _Nonnull e;
@property (strong, nonatomic) NSNumber * _Nonnull f;
- (instancetype)init;
@end

@interface CHIPTestClusterClusterNullablesAndOptionalsStruct : NSObject
@property (strong, nonatomic) NSNumber * _Nullable nullableInt;
@property (strong, nonatomic) NSNumber * _Nullable optionalInt;
@property (strong, nonatomic) NSNumber * _Nullable nullableOptionalInt;
@property (strong, nonatomic) NSString * _Nullable nullableString;
@property (strong, nonatomic) NSString * _Nullable optionalString;
@property (strong, nonatomic) NSString * _Nullable nullableOptionalString;
@property (strong, nonatomic) CHIPTestClusterClusterSimpleStruct * _Nullable nullableStruct;
@property (strong, nonatomic) CHIPTestClusterClusterSimpleStruct * _Nullable optionalStruct;
@property (strong, nonatomic) CHIPTestClusterClusterSimpleStruct * _Nullable nullableOptionalStruct;
@property (strong, nonatomic) NSArray * _Nullable nullableList;
@property (strong, nonatomic) NSArray * _Nullable optionalList;
@property (strong, nonatomic) NSArray * _Nullable nullableOptionalList;
- (instancetype)init;
@end

@interface CHIPTestClusterClusterNestedStruct : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull a;
@property (strong, nonatomic) NSNumber * _Nonnull b;
@property (strong, nonatomic) CHIPTestClusterClusterSimpleStruct * _Nonnull c;
- (instancetype)init;
@end

@interface CHIPTestClusterClusterNestedStructList : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull a;
@property (strong, nonatomic) NSNumber * _Nonnull b;
@property (strong, nonatomic) CHIPTestClusterClusterSimpleStruct * _Nonnull c;
@property (strong, nonatomic) NSArray * _Nonnull d;
@property (strong, nonatomic) NSArray * _Nonnull e;
@property (strong, nonatomic) NSArray * _Nonnull f;
@property (strong, nonatomic) NSArray * _Nonnull g;
- (instancetype)init;
@end

@interface CHIPTestClusterClusterDoubleNestedStructList : NSObject
@property (strong, nonatomic) NSArray * _Nonnull a;
- (instancetype)init;
@end

@interface CHIPTestClusterClusterTestListStructOctet : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull fabricIndex;
@property (strong, nonatomic) NSData * _Nonnull operationalCert;
- (instancetype)init;
@end

@interface CHIPGroupKeyManagementClusterGroupKey : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull vendorId;
@property (strong, nonatomic) NSNumber * _Nonnull groupKeyIndex;
@property (strong, nonatomic) NSData * _Nonnull groupKeyRoot;
@property (strong, nonatomic) NSNumber * _Nonnull groupKeyEpochStartTime;
@property (strong, nonatomic) NSNumber * _Nonnull groupKeySecurityPolicy;
- (instancetype)init;
@end

@interface CHIPGroupKeyManagementClusterGroupState : NSObject
@property (strong, nonatomic) NSNumber * _Nonnull vendorId;
@property (strong, nonatomic) NSNumber * _Nonnull vendorGroupId;
@property (strong, nonatomic) NSNumber * _Nonnull groupKeySetIndex;
- (instancetype)init;
@end

NS_ASSUME_NONNULL_END

#endif /* CHIP_STRUCTS_H */
