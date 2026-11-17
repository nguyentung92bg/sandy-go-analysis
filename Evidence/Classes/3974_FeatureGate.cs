// Namespace: Dino.BusSand.App.Meta
public static class FeatureGate // TypeDefIndex: 3974
{
	// Fields
	public static bool Events; // 0x0
	public static bool Shop; // 0x1
	public static bool Lives; // 0x2
	public static bool RateUs; // 0x3
	public static bool PreLevelPopup; // 0x4
	public static bool LegacyHall; // 0x5
	private static readonly Feature[] HiddenUntilArt; // 0x8
	private static readonly HashSet<Feature> s_off; // 0x10

	// Properties
	public static bool WinStreak { get; set; }

	// Methods

	// RVA: 0x220B998 Offset: 0x2207998 VA: 0x220B998
	public static bool get_WinStreak() { }

	// RVA: 0x220BAC0 Offset: 0x2207AC0 VA: 0x220BAC0
	public static void set_WinStreak(bool value) { }

	// RVA: 0x220BBEC Offset: 0x2207BEC VA: 0x220BBEC
	public static void ResetDefaults() { }

	// RVA: 0x220BC50 Offset: 0x2207C50 VA: 0x220BC50
	public static void ResetFeatureFlags() { }

	// RVA: 0x220BDF0 Offset: 0x2207DF0 VA: 0x220BDF0
	public static bool AllowsLiveFeature(string key) { }

	// RVA: 0x220C198 Offset: 0x2208198 VA: 0x220C198
	public static bool IsEvent(Feature f) { }

	// RVA: 0x220B9E8 Offset: 0x22079E8 VA: 0x220B9E8
	public static bool On(Feature f) { }

	// RVA: 0x220BB18 Offset: 0x2207B18 VA: 0x220BB18
	public static void Set(Feature f, bool on) { }

	// RVA: 0x220C1A8 Offset: 0x22081A8 VA: 0x220C1A8
	public static void AllOn() { }

	// RVA: 0x220BD64 Offset: 0x2207D64 VA: 0x220BD64
	public static void Apply() { }

	// RVA: 0x220C230 Offset: 0x2208230 VA: 0x220C230
	private static void .cctor() { }
}

