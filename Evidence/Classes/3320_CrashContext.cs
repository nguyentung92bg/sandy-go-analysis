// Namespace: Dino.BusSand.App
public static class CrashContext // TypeDefIndex: 3320
{
	// Fields
	public const int MaxPendingLog = 64;
	public const string BootOpenKey = "crash_boot_open";
	private static CrashContext.ISink s_sink; // 0x0
	private static readonly Dictionary<string, string> Keys; // 0x8
	private static readonly Queue<string> PendingLog; // 0x10
	private static readonly List<string> OpenUi; // 0x18
	private static readonly List<string> PendingNonFatal; // 0x20
	[CompilerGenerated]
	private static string <PreviousBootStopped>k__BackingField; // 0x28
	public const int MaxValueLength = 120;

	// Properties
	public static string PreviousBootStopped { get; set; }
	public static int PendingLogCount { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2172820 Offset: 0x216E820 VA: 0x2172820
	public static string get_PreviousBootStopped() { }

	[CompilerGenerated]
	// RVA: 0x2172878 Offset: 0x216E878 VA: 0x2172878
	private static void set_PreviousBootStopped(string value) { }

	[RuntimeInitializeOnLoadMethod(4)]
	// RVA: 0x21728D8 Offset: 0x216E8D8 VA: 0x21728D8
	private static void ResetStatics() { }

	// RVA: 0x2172AE4 Offset: 0x216EAE4 VA: 0x2172AE4
	public static void Install() { }

	// RVA: 0x2172D7C Offset: 0x216ED7C VA: 0x2172D7C
	public static void Attach(CrashContext.ISink sink) { }

	// RVA: 0x216D948 Offset: 0x2169948 VA: 0x216D948
	public static void NonFatal(string message) { }

	// RVA: 0x216F9DC Offset: 0x216B9DC VA: 0x216F9DC
	public static void Key(string key, string value) { }

	// RVA: 0x2173458 Offset: 0x216F458 VA: 0x2173458
	public static void Key(string key, int value) { }

	// RVA: 0x2172060 Offset: 0x216E060 VA: 0x2172060
	public static void Memory(string moment, DeviceMemory.Snapshot m) { }

	// RVA: 0x21734D4 Offset: 0x216F4D4 VA: 0x21734D4
	public static void AdCreative(string network, string creativeId) { }

	// RVA: 0x2173700 Offset: 0x216F700 VA: 0x2173700
	public static void Graphics(string gpu, string webView) { }

	// RVA: 0x2173674 Offset: 0x216F674 VA: 0x2173674
	private static string Clip(string s) { }

	// RVA: 0x216FBD8 Offset: 0x216BBD8 VA: 0x216FBD8
	public static void Log(string line) { }

	// RVA: 0x216DB44 Offset: 0x2169B44 VA: 0x216DB44
	public static void Step(string key, string value) { }

	// RVA: 0x21737B8 Offset: 0x216F7B8 VA: 0x21737B8
	private static void KeepBootOpen(string step) { }

	// RVA: 0x2173A7C Offset: 0x216FA7C VA: 0x2173A7C
	public static string Value(string key) { }

	// RVA: 0x2173B1C Offset: 0x216FB1C VA: 0x2173B1C
	public static int get_PendingLogCount() { }

	// RVA: 0x2173B8C Offset: 0x216FB8C VA: 0x2173B8C
	private static void OnUiOpened(UIPanel p) { }

	// RVA: 0x2173DF4 Offset: 0x216FDF4 VA: 0x2173DF4
	private static void OnUiClosed(UIPanel p) { }

	// RVA: 0x2173CF0 Offset: 0x216FCF0 VA: 0x2173CF0
	private static string UiTrail() { }

	// RVA: 0x2173340 Offset: 0x216F340 VA: 0x2173340
	private static void Send(Action call) { }

	// RVA: 0x2173F70 Offset: 0x216FF70 VA: 0x2173F70
	private static void .cctor() { }
}

