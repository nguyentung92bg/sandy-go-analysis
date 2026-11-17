// Namespace: Dino.BusSand.App.UI
public class UiSkin : ScriptableObject // TypeDefIndex: 3417
{
	// Fields
	public TMP_FontAsset Font; // 0x18
	public List<UiSkin.SpriteEntry> Sprites; // 0x20
	public List<UiSkin.MatEntry> Materials; // 0x28
	public List<UiSkin.AliasEntry> Aliases; // 0x30
	private static UiSkin s_i; // 0x0
	private static UiSkin s_boot; // 0x8
	private static bool s_bootTried; // 0x10
	private static ResourceRequest s_load; // 0x18
	private Dictionary<string, Sprite> _sprites; // 0x38
	private Dictionary<string, string> _aliases; // 0x40
	private HashSet<string> _warned; // 0x48
	private Dictionary<string, Material> _mats; // 0x50

	// Properties
	public static UiSkin I { get; }
	private static UiSkin BootOnly { get; }
	public static bool Ready { get; }
	public static TMP_FontAsset MainFont { get; }

	// Methods

	// RVA: 0x22A1E1C Offset: 0x229DE1C VA: 0x22A1E1C
	public static UiSkin get_I() { }

	// RVA: 0x22A207C Offset: 0x229E07C VA: 0x22A207C
	private static UiSkin get_BootOnly() { }

	// RVA: 0x22A2268 Offset: 0x229E268 VA: 0x22A2268
	public static void BeginLoad() { }

	// RVA: 0x22A234C Offset: 0x229E34C VA: 0x22A234C
	public static bool get_Ready() { }

	// RVA: 0x22A23F4 Offset: 0x229E3F4 VA: 0x22A23F4
	public static Sprite Sprite(string key) { }

	// RVA: 0x22A24EC Offset: 0x229E4EC VA: 0x22A24EC
	private Sprite Find(string key, bool report) { }

	// RVA: 0x22A2B68 Offset: 0x229EB68 VA: 0x22A2B68
	public static Material Mat(string key) { }

	// RVA: 0x22A2C60 Offset: 0x229EC60 VA: 0x22A2C60
	private Material FindMat(string key, bool orPlain) { }

	// RVA: 0x22A2F08 Offset: 0x229EF08 VA: 0x22A2F08
	public static TMP_FontAsset get_MainFont() { }

	// RVA: 0x22A2FEC Offset: 0x229EFEC VA: 0x22A2FEC
	public void .ctor() { }
}

