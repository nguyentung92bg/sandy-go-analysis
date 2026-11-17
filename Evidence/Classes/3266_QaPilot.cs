// Namespace: Dino.BusSand.App
public static class QaPilot // TypeDefIndex: 3266
{
	// Fields
	private const string TokenSha256 = "ce42093786bfd338714f19af61fa633f0bc794d3676ddd546656adb82d27b283";
	private const string Extra = "sbqa";
	public const int Version = 1;
	[CompilerGenerated]
	private static bool <Active>k__BackingField; // 0x0
	private static bool s_ignoreNoAds; // 0x1

	// Properties
	public static bool Active { get; set; }
	public static bool IgnoresNoAds { get; }
	public static string Dir { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2156624 Offset: 0x2152624 VA: 0x2156624
	public static bool get_Active() { }

	[CompilerGenerated]
	// RVA: 0x215666C Offset: 0x215266C VA: 0x215666C
	private static void set_Active(bool value) { }

	// RVA: 0x21566BC Offset: 0x21526BC VA: 0x21566BC
	public static bool get_IgnoresNoAds() { }

	// RVA: 0x215673C Offset: 0x215273C VA: 0x215673C
	public static string get_Dir() { }

	[RuntimeInitializeOnLoadMethod(0)]
	// RVA: 0x21567DC Offset: 0x21527DC VA: 0x21567DC
	private static void Hook() { }

	// RVA: 0x2156F14 Offset: 0x2152F14 VA: 0x2156F14
	public static bool Activate(string token) { }

	// RVA: 0x21572F8 Offset: 0x21532F8 VA: 0x21572F8
	private static void Start() { }

	// RVA: 0x2156F80 Offset: 0x2152F80 VA: 0x2156F80
	private static bool Valid(string token) { }

	// RVA: 0x2156808 Offset: 0x2152808 VA: 0x2156808
	private static string LaunchToken() { }

	// RVA: 0x21574A8 Offset: 0x21534A8 VA: 0x21574A8
	public static int WorstTap(StageEngine e) { }
}

