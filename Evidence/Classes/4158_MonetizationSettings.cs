// Namespace: Dino.BusSand.App.Meta
public static class MonetizationSettings // TypeDefIndex: 4158
{
	// Fields
	public const string RemoteRule = "ads_monetization";
	public static readonly string[] RemoteSections; // 0x0
	private static MonetizationConfig s_asset; // 0x8
	private static InterstitialSettings s_inter; // 0x10
	private static RewardedSettings s_rewarded; // 0x18
	private static string s_remoteJson; // 0x20
	[CompilerGenerated]
	private static string <ConfigId>k__BackingField; // 0x28
	[CompilerGenerated]
	private static string <Source>k__BackingField; // 0x30
	[CompilerGenerated]
	private static string <Summary>k__BackingField; // 0x38
	[CompilerGenerated]
	private static Action Changed; // 0x40
	private static bool s_journeyOn; // 0x48
	private static bool s_uiJourneyOn; // 0x49
	public static Action RefreshRemote; // 0x50

	// Properties
	public static string ConfigId { get; set; }
	public static string Source { get; set; }
	public static string Summary { get; set; }
	public static bool JourneyOn { get; }
	public static bool UiJourneyOn { get; }
	public static MonetizationConfig Asset { get; }
	public static InterstitialSettings Interstitial { get; }
	public static RewardedSettings Rewarded { get; }
	public static RemoveAdsSettings RemoveAds { get; }
	public static StarterSettings Starter { get; }
	public static PlayOnSettings PlayOn { get; }
	public static OfferPacingSettings Offers { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2268C34 Offset: 0x2264C34 VA: 0x2268C34
	public static string get_ConfigId() { }

	[CompilerGenerated]
	// RVA: 0x2268C8C Offset: 0x2264C8C VA: 0x2268C8C
	private static void set_ConfigId(string value) { }

	[CompilerGenerated]
	// RVA: 0x2268CEC Offset: 0x2264CEC VA: 0x2268CEC
	public static string get_Source() { }

	[CompilerGenerated]
	// RVA: 0x2268D44 Offset: 0x2264D44 VA: 0x2268D44
	private static void set_Source(string value) { }

	[CompilerGenerated]
	// RVA: 0x2268DA4 Offset: 0x2264DA4 VA: 0x2268DA4
	public static string get_Summary() { }

	[CompilerGenerated]
	// RVA: 0x2268DFC Offset: 0x2264DFC VA: 0x2268DFC
	private static void set_Summary(string value) { }

	[CompilerGenerated]
	// RVA: 0x2268E5C Offset: 0x2264E5C VA: 0x2268E5C
	public static void add_Changed(Action value) { }

	[CompilerGenerated]
	// RVA: 0x2268F38 Offset: 0x2264F38 VA: 0x2268F38
	public static void remove_Changed(Action value) { }

	// RVA: 0x2269014 Offset: 0x2265014 VA: 0x2269014
	public static bool get_JourneyOn() { }

	// RVA: 0x2269240 Offset: 0x2265240 VA: 0x2269240
	public static bool get_UiJourneyOn() { }

	// RVA: 0x226929C Offset: 0x226529C VA: 0x226929C
	public static MonetizationConfig get_Asset() { }

	// RVA: 0x2267474 Offset: 0x2263474 VA: 0x2267474
	public static InterstitialSettings get_Interstitial() { }

	// RVA: 0x2266B34 Offset: 0x2262B34 VA: 0x2266B34
	public static RewardedSettings get_Rewarded() { }

	// RVA: 0x2267064 Offset: 0x2263064 VA: 0x2267064
	public static RemoveAdsSettings get_RemoveAds() { }

	// RVA: 0x2267934 Offset: 0x2263934 VA: 0x2267934
	public static StarterSettings get_Starter() { }

	// RVA: 0x22671D4 Offset: 0x22631D4 VA: 0x22671D4
	public static PlayOnSettings get_PlayOn() { }

	// RVA: 0x2267B00 Offset: 0x2263B00 VA: 0x2267B00
	public static OfferPacingSettings get_Offers() { }

	// RVA: 0x2269070 Offset: 0x2265070 VA: 0x2269070
	private static void Ensure() { }

	// RVA: 0x2269D64 Offset: 0x2265D64 VA: 0x2269D64
	private static void CrashKey() { }

	// RVA: 0x2269ED8 Offset: 0x2265ED8 VA: 0x2269ED8
	public static string ApplyRemote(string json) { }

	// RVA: 0x226A214 Offset: 0x2266214 VA: 0x226A214
	public static void ResetForTests() { }

	// RVA: 0x22692F8 Offset: 0x22652F8 VA: 0x22692F8
	private static void Rebuild() { }

	// RVA: -1 Offset: -1
	private static T Clone<T>(T o) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x27FBAA4 Offset: 0x27F7AA4 VA: 0x27FBAA4
	|-MonetizationSettings.Clone<object>
	*/

	// RVA: 0x226AAFC Offset: 0x2266AFC VA: 0x226AAFC
	private static void TrackingSection(object value, List<string> notes, List<string> problems) { }

	// RVA: 0x226A3A0 Offset: 0x22663A0 VA: 0x226A3A0
	private static void Overlay(string section, object value, object target, List<string> changed, List<string> problems) { }

	// RVA: 0x226B12C Offset: 0x226712C VA: 0x226B12C
	private static FieldInfo FindField(Type t, string key) { }

	// RVA: 0x226B24C Offset: 0x226724C VA: 0x226B24C
	private static bool TryConvert(FieldInfo f, object raw, out object value) { }

	// RVA: 0x226B6CC Offset: 0x22676CC VA: 0x226B6CC
	private static bool Bound(FieldInfo f, ref object v) { }

	// RVA: 0x226B96C Offset: 0x226796C VA: 0x226B96C
	private static bool SameValue(object a, object b) { }

	// RVA: 0x226B808 Offset: 0x2267808 VA: 0x226B808
	private static string Show(object v) { }

	// RVA: 0x226BA48 Offset: 0x2267A48 VA: 0x226BA48
	private static void .cctor() { }
}

