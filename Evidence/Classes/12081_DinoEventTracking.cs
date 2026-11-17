// Namespace: Dino.Tracking
public static class DinoEventTracking // TypeDefIndex: 12081
{
	// Fields
	private const string RESOURCE_COIN_NAME = "coin";

	// Properties
	public static int CustomParameterCount { get; }

	// Methods

	// RVA: 0x247BA20 Offset: 0x2477A20 VA: 0x247BA20
	public static void TrackAdRequest(string adFormat, string placement, in AdRequestOptions options, CustomParams custom) { }

	// RVA: 0x247BC94 Offset: 0x2477C94 VA: 0x247BC94
	public static void TrackAdImpression(string adFormat, string placement, in AdImpressionOptions options, CustomParams custom) { }

	// RVA: 0x247BE54 Offset: 0x2477E54 VA: 0x247BE54
	public static void TrackAdClick(string adFormat, string placement, in AdClickOptions options, CustomParams custom) { }

	// RVA: 0x247BFEC Offset: 0x2477FEC VA: 0x247BFEC
	public static void TrackAdComplete(string adFormat, string placement, in AdCompleteOptions options, CustomParams custom) { }

	// RVA: 0x247C194 Offset: 0x2478194 VA: 0x247C194
	public static void TrackAdOfferShown(string adFormat, string placement, CustomParams custom) { }

	// RVA: 0x247C2B0 Offset: 0x24782B0 VA: 0x247C2B0
	public static void SetCustomParam(string key, string value) { }

	// RVA: 0x247C3B4 Offset: 0x24783B4 VA: 0x247C3B4
	public static void SetCustomParam(string key, int value) { }

	// RVA: 0x247C3FC Offset: 0x24783FC VA: 0x247C3FC
	public static void SetCustomParam(string key, float value) { }

	// RVA: 0x247C444 Offset: 0x2478444 VA: 0x247C444
	public static void SetCustomParam(string key, double value) { }

	// RVA: 0x247C48C Offset: 0x247848C VA: 0x247C48C
	public static void SetCustomParam(string key, bool value) { }

	// RVA: 0x247C4D4 Offset: 0x24784D4 VA: 0x247C4D4
	public static bool RemoveCustomParam(string key) { }

	// RVA: 0x247C528 Offset: 0x2478528 VA: 0x247C528
	public static void ClearCustomParameters() { }

	// RVA: 0x247C574 Offset: 0x2478574 VA: 0x247C574
	public static bool TryGetCustomParam(string key, out DinoTrackingParameter parameter) { }

	// RVA: 0x247C5D8 Offset: 0x24785D8 VA: 0x247C5D8
	public static int get_CustomParameterCount() { }

	// RVA: 0x247C624 Offset: 0x2478624 VA: 0x247C624
	public static void TrackEvent(ITrackingScript script) { }

	// RVA: 0x247C2F8 Offset: 0x24782F8 VA: 0x247C2F8
	private static void SetSessionParam(string key, Nullable<DinoTrackingParameter> parameter) { }

	// RVA: 0x247C700 Offset: 0x2478700 VA: 0x247C700
	public static void TrackIapShow(string placement, in IapShowOptions options, CustomParams custom) { }

	// RVA: 0x247C874 Offset: 0x2478874 VA: 0x247C874
	public static void TrackIapClick(string placement, string packName, in IapClickOptions options, CustomParams custom) { }

	// RVA: 0x247C9E8 Offset: 0x24789E8 VA: 0x247C9E8
	public static void TrackIapPurchaseSuccess(string placement, string packName, double price, string currency, in IapPurchaseSuccessOptions options, CustomParams custom) { }

	// RVA: 0x247CB7C Offset: 0x2478B7C VA: 0x247CB7C
	public static void TrackIapPurchaseFailed(string placement, string packName, double price, string currency, in IapPurchaseFailedOptions options, CustomParams custom) { }

	// RVA: 0x247CD30 Offset: 0x2478D30 VA: 0x247CD30
	public static void TrackIapClose(string placement, in IapCloseOptions options, CustomParams custom) { }

	// RVA: 0x247CEAC Offset: 0x2478EAC VA: 0x247CEAC
	public static void TrackLevelStart(int level, in LevelStartOptions options, CustomParams custom) { }

	// RVA: 0x247D0F8 Offset: 0x24790F8 VA: 0x247D0F8
	public static void TrackLevelEnd(int level, TrackingEventLevelEnd.EResult result, in LevelEndOptions options, CustomParams custom) { }

	// RVA: 0x247D37C Offset: 0x247937C VA: 0x247D37C
	public static void TrackLevelExit(int level, in LevelExitOptions options, CustomParams custom) { }

	// RVA: 0x247D59C Offset: 0x247959C VA: 0x247D59C
	public static void TrackLevelReopen(int level, in LevelReopenOptions options, CustomParams custom) { }

	// RVA: 0x247D76C Offset: 0x247976C VA: 0x247D76C
	public static void TrackFeatureFirstShow(string featureName, in FeatureFirstShowOptions options, CustomParams custom) { }

	// RVA: 0x247D93C Offset: 0x247993C VA: 0x247D93C
	public static void TrackFeatureOpen(string featureName, in FeatureOpenOptions options, CustomParams custom) { }

	// RVA: 0x247DB1C Offset: 0x2479B1C VA: 0x247DB1C
	public static void TrackFeatureClose(string featureName, in FeatureCloseOptions options, CustomParams custom) { }

	// RVA: 0x247DCFC Offset: 0x2479CFC VA: 0x247DCFC
	public static void TrackEventStart(string eventNameIngame, in EventStartOptions options, CustomParams custom) { }

	// RVA: 0x247DEB0 Offset: 0x2479EB0 VA: 0x247DEB0
	public static void TrackEventEnd(string eventNameIngame, in EventEndOptions options, CustomParams custom) { }

	// RVA: 0x247E084 Offset: 0x247A084 VA: 0x247E084
	public static void TrackNotiSend(string notiCate, string notiName, CustomParams custom) { }

	// RVA: 0x247E1A0 Offset: 0x247A1A0 VA: 0x247E1A0
	public static void TrackNotiReceive(string notiCate, string notiName, CustomParams custom) { }

	// RVA: 0x247E2BC Offset: 0x247A2BC VA: 0x247E2BC
	public static void TrackNotiOpen(string notiCate, string notiName, CustomParams custom) { }

	// RVA: 0x247E3D8 Offset: 0x247A3D8 VA: 0x247E3D8
	public static void TrackTutorialAction(string actionCate, string actionName, in TutorialActionOptions options, CustomParams custom) { }

	// RVA: 0x247E508 Offset: 0x247A508 VA: 0x247E508
	public static void TrackButtonClick(string buttonName, string screenName, CustomParams custom) { }

	// RVA: 0x247E624 Offset: 0x247A624 VA: 0x247E624
	public static void TrackScreenShow(string screenName, in ScreenShowOptions options, CustomParams custom) { }

	// RVA: 0x247E770 Offset: 0x247A770 VA: 0x247E770
	public static void TrackScreenExit(in ScreenExitOptions options, CustomParams custom) { }

	// RVA: 0x247E89C Offset: 0x247A89C VA: 0x247E89C
	public static void TrackResourceEarn(EResourceType resourceType, string resourceName, long resourceAmount, in ResourceEarnOptions options, CustomParams custom) { }

	// RVA: 0x247EA44 Offset: 0x247AA44 VA: 0x247EA44
	public static void TrackResourceSpend(EResourceType resourceType, string resourceName, long resourceAmount, in ResourceSpendOptions options, CustomParams custom) { }

	// RVA: 0x247EBFC Offset: 0x247ABFC VA: 0x247EBFC
	public static void TrackResourceCoinEarn(long resourceAmount, in ResourceEarnOptions options, CustomParams custom) { }

	// RVA: 0x247EC88 Offset: 0x247AC88 VA: 0x247EC88
	public static void TrackResourceCoinSpend(long resourceAmount, in ResourceSpendOptions options, CustomParams custom) { }

	// RVA: 0x247ED14 Offset: 0x247AD14 VA: 0x247ED14
	public static void TrackLoadingStart(string dataSource, string resourceType, string loadContext, in LoadingStartOptions options, CustomParams custom) { }

	// RVA: 0x247EEB4 Offset: 0x247AEB4 VA: 0x247EEB4
	public static void TrackLoadingFinish(string dataSource, string resourceType, string loadContext, string result, in LoadingFinishOptions options, CustomParams custom) { }

	// RVA: 0x247BBE0 Offset: 0x2477BE0 VA: 0x247BBE0
	internal static bool TryGetService(out ITrackingService service) { }
}

