// Namespace: Dino.BusSand.App
public static class Ads // TypeDefIndex: 3330
{
	// Fields
	public static IAdProvider Provider; // 0x0
	public static bool ForceInterstitials; // 0x8
	private static float s_sessionStart; // 0xC
	private static bool s_sessionStarted; // 0x10
	private static int s_sessionLevels; // 0x14
	private static float s_lastInterClose; // 0x18
	private static float s_lastRewardedClose; // 0x1C
	private static int s_intersThisSession; // 0x20
	public static float DebugSessionShift; // 0x24
	[CompilerGenerated]
	private static string <LastRewardedStatus>k__BackingField; // 0x28
	private static bool s_rewardedBusy; // 0x30
	private static float s_rewardedBusyAt; // 0x34
	private static int s_rewardedGen; // 0x38
	private static GameApp s_rewardedApp; // 0x40
	private const float RewardedStaleSeconds = 180;
	[CompilerGenerated]
	private static string <LastInterGate>k__BackingField; // 0x48

	// Properties
	private static float SessionNow { get; }
	public static int SessionSeconds { get; }
	public static int ActivateDay { get; }
	public static int InstallDay { get; }
	public static string LastRewardedStatus { get; set; }
	public static string LastInterGate { get; set; }

	// Methods

	// RVA: 0x216A6D8 Offset: 0x21666D8 VA: 0x216A6D8
	public static void OnColdStart() { }

	// RVA: 0x216FECC Offset: 0x216BECC VA: 0x216FECC
	public static void OnLevelEnter() { }

	// RVA: 0x216E2BC Offset: 0x216A2BC VA: 0x216E2BC
	public static void OnLevelResult() { }

	// RVA: 0x2175FD8 Offset: 0x2171FD8 VA: 0x2175FD8
	private static float get_SessionNow() { }

	// RVA: 0x2176048 Offset: 0x2172048 VA: 0x2176048
	public static int get_SessionSeconds() { }

	// RVA: 0x21760C0 Offset: 0x21720C0 VA: 0x21760C0
	private static int DaysSinceInstall() { }

	// RVA: 0x21762E0 Offset: 0x21722E0 VA: 0x21762E0
	public static int get_ActivateDay() { }

	// RVA: 0x2176334 Offset: 0x2172334 VA: 0x2176334
	public static int get_InstallDay() { }

	// RVA: 0x2176388 Offset: 0x2172388 VA: 0x2176388
	public static float CommercialCd() { }

	// RVA: 0x21763A0 Offset: 0x21723A0 VA: 0x21763A0
	public static bool CanShowInterstitial(string slot, out string reason) { }

	// RVA: 0x2176940 Offset: 0x2172940 VA: 0x2176940
	private static string InterScene(string slot) { }

	// RVA: 0x2176A04 Offset: 0x2172A04 VA: 0x2176A04
	public static string RewardScene(string slot) { }

	// RVA: 0x2176AF8 Offset: 0x2172AF8 VA: 0x2176AF8
	public static bool RewardedAvailable(string slot) { }

	[CompilerGenerated]
	// RVA: 0x2176BC8 Offset: 0x2172BC8 VA: 0x2176BC8
	public static string get_LastRewardedStatus() { }

	[CompilerGenerated]
	// RVA: 0x2176C20 Offset: 0x2172C20 VA: 0x2176C20
	private static void set_LastRewardedStatus(string value) { }

	// RVA: 0x2176C80 Offset: 0x2172C80 VA: 0x2176C80
	public static void ShowRewarded(string slot, Action<bool> done) { }

	[IteratorStateMachine(typeof(Ads.<WaitForRewarded>d__36))]
	// RVA: 0x217777C Offset: 0x217377C VA: 0x217777C
	private static IEnumerator WaitForRewarded(string slot, Action<string> then) { }

	// RVA: 0x216AB48 Offset: 0x2166B48 VA: 0x216AB48
	public static void ToastRewardedFail() { }

	// RVA: 0x217782C Offset: 0x217382C VA: 0x217782C
	private static void OpenFullscreenAd(string what, Action show) { }

	[CompilerGenerated]
	// RVA: 0x2177A04 Offset: 0x2173A04 VA: 0x2177A04
	public static string get_LastInterGate() { }

	[CompilerGenerated]
	// RVA: 0x2177A5C Offset: 0x2173A5C VA: 0x2177A5C
	private static void set_LastInterGate(string value) { }

	// RVA: 0x216E370 Offset: 0x216A370 VA: 0x216E370
	public static void ShowInterstitialIfAllowed(string slot, Action then) { }

	// RVA: 0x2177AC4 Offset: 0x2173AC4 VA: 0x2177AC4
	private static void .cctor() { }
}

