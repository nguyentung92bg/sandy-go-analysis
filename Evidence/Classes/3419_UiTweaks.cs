// Namespace: Dino.BusSand.App.UI
[CreateAssetMenu(menuName = "BusSand/UI Tweaks", fileName = "UiTweaks")]
public class UiTweaks : ScriptableObject // TypeDefIndex: 3419
{
	// Fields
	public List<UiTweaks.Entry> Entries; // 0x18
	private static UiTweaks s_i; // 0x0
	private static bool s_loaded; // 0x8
	[CompilerGenerated]
	private static int <Version>k__BackingField; // 0xC

	// Properties
	public static int Version { get; set; }
	public static UiTweaks I { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x22A311C Offset: 0x229F11C VA: 0x22A311C
	public static int get_Version() { }

	[CompilerGenerated]
	// RVA: 0x22A3164 Offset: 0x229F164 VA: 0x22A3164
	private static void set_Version(int value) { }

	// RVA: 0x22A31B0 Offset: 0x229F1B0 VA: 0x22A31B0
	public static UiTweaks get_I() { }

	// RVA: 0x22A3260 Offset: 0x229F260 VA: 0x22A3260
	public static void Touch() { }

	// RVA: 0x22A32D4 Offset: 0x229F2D4 VA: 0x22A32D4
	private void OnValidate() { }

	// RVA: 0x22A3348 Offset: 0x229F348 VA: 0x22A3348
	public UiTweaks.Entry Find(string panel, string path) { }

	// RVA: 0x22A34B4 Offset: 0x229F4B4 VA: 0x22A34B4
	public bool HasPanel(string panel) { }

	// RVA: 0x22A3600 Offset: 0x229F600 VA: 0x22A3600
	public static void Attach(UIPanel panel) { }

	// RVA: 0x22A3A90 Offset: 0x229FA90 VA: 0x22A3A90
	public static string PathOf(Transform root, Transform node) { }

	// RVA: 0x22A3C88 Offset: 0x229FC88 VA: 0x22A3C88
	public void .ctor() { }
}

