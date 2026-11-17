// Namespace: Dino.BusSand.App
public static class LanguageFonts // TypeDefIndex: 3261
{
	// Fields
	private static readonly Dictionary<string, string> Map; // 0x0
	private static readonly HashSet<string> FullFace; // 0x8
	private static readonly Dictionary<Material, Material> s_styled; // 0x10
	private static readonly Dictionary<Material, Material> s_desktop; // 0x18
	private static readonly Dictionary<string, TMP_FontAsset> s_cache; // 0x20
	private static readonly HashSet<TMP_FontAsset> s_dynamic; // 0x28
	private static string s_applied; // 0x30
	private static TMP_FontAsset s_default; // 0x38
	private const int DefaultPointSize = 72;
	private const int DefaultPadding = 10;
	private const int FacePointSize = 90;
	private const int FacePadding = 9;
	private static readonly HashSet<string> DefaultWrites; // 0x40
	public static bool SmallAtlases; // 0x48
	private static readonly Action s_updateFeatures; // 0x50
	private static readonly Dictionary<string, TMP_FontAsset> s_listFaces; // 0x58
	public static bool TrimAfterList; // 0x60
	private static readonly Dictionary<TMP_FontAsset, List<Material>> s_faceMaterials; // 0x68
	private static readonly HashSet<TMP_FontAsset> s_chained; // 0x70

	// Methods

	// RVA: 0x2151BC0 Offset: 0x214DBC0 VA: 0x2151BC0
	public static bool HasOwnFace(string lang) { }

	// RVA: 0x2151C54 Offset: 0x214DC54 VA: 0x2151C54
	public static bool KitFaceFits(string lang) { }

	// RVA: 0x2151CF8 Offset: 0x214DCF8 VA: 0x2151CF8
	public static void Style(TMP_Text t, Material preset) { }

	// RVA: 0x21522FC Offset: 0x214E2FC VA: 0x21522FC
	private static Material DesktopShader(Material preset) { }

	// RVA: 0x2152684 Offset: 0x214E684 VA: 0x2152684
	public static void Apply(string lang) { }

	// RVA: 0x2152E00 Offset: 0x214EE00 VA: 0x2152E00
	public static void Reapply() { }

	// RVA: 0x2151FF0 Offset: 0x214DFF0 VA: 0x2151FF0
	private static TMP_FontAsset DefaultFallback() { }

	// RVA: 0x2152E98 Offset: 0x214EE98 VA: 0x2152E98
	public static bool WriteIn(TMP_Text t, string lang) { }

	// RVA: 0x21534F0 Offset: 0x214F4F0 VA: 0x21534F0
	public static bool AddCharacters(TMP_FontAsset fa, string text) { }

	// RVA: 0x2153190 Offset: 0x214F190 VA: 0x2153190
	private static TMP_FontAsset FaceForName(string lang) { }

	// RVA: 0x21535A0 Offset: 0x214F5A0 VA: 0x21535A0
	public static void TrimAfterListClosed() { }

	// RVA: 0x2152B44 Offset: 0x214EB44 VA: 0x2152B44
	private static TMP_FontAsset FallbackFor(string lang) { }

	// RVA: 0x2153F58 Offset: 0x214FF58 VA: 0x2153F58
	public static bool IsRtl(string lang) { }

	// RVA: 0x2153FDC Offset: 0x214FFDC VA: 0x2153FDC
	public static string FormatRtl(string input) { }

	// RVA: 0x2154354 Offset: 0x2150354 VA: 0x2154354
	private static void .cctor() { }
}

