// Namespace: Dino.BusSand.App.Meta
public static class PlayerIdentity // TypeDefIndex: 4160
{
	// Fields
	public const int DefaultHead = 200001;
	public const int DefaultFrame = 300001;
	public const int DefaultNamePlate = 400001;
	public const int MaxNameLength = 12;
	public const string TypeFrame = "Frame";
	public const string TypeName = "Name";
	[CompilerGenerated]
	private static Action<PlayerIdentity.Appearance> Changed; // 0x0
	public static Random Rng; // 0x8
	private static readonly Random s_rng; // 0x10
	private static Dictionary<string, List<string>> s_names; // 0x18

	// Properties
	private static Random R { get; }
	private static PlayerData D { get; }
	public static int HeadIcon { get; }
	public static string HeadIconString { get; }
	public static int HeadFrame { get; }
	public static int NamePlate { get; }
	public static bool HasName { get; }
	public static string PlayerName { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x226BBD4 Offset: 0x2267BD4 VA: 0x226BBD4
	public static void add_Changed(Action<PlayerIdentity.Appearance> value) { }

	[CompilerGenerated]
	// RVA: 0x226BCC4 Offset: 0x2267CC4 VA: 0x226BCC4
	public static void remove_Changed(Action<PlayerIdentity.Appearance> value) { }

	// RVA: 0x226BDB4 Offset: 0x2267DB4 VA: 0x226BDB4
	private static Random get_R() { }

	// RVA: 0x226BE2C Offset: 0x2267E2C VA: 0x226BE2C
	private static PlayerData get_D() { }

	// RVA: 0x226BEB4 Offset: 0x2267EB4 VA: 0x226BEB4
	public static int get_HeadIcon() { }

	// RVA: 0x226BF20 Offset: 0x2267F20 VA: 0x226BF20
	public static List<int> HeadIds() { }

	// RVA: 0x226C308 Offset: 0x2268308 VA: 0x226C308
	public static string HeadIconName(int headId) { }

	// RVA: 0x226C3D4 Offset: 0x22683D4 VA: 0x226C3D4
	public static string get_HeadIconString() { }

	// RVA: 0x226C424 Offset: 0x2268424 VA: 0x226C424
	public static bool SetHeadIcon(int headId) { }

	// RVA: 0x226CC9C Offset: 0x2268C9C VA: 0x226CC9C
	private static Dictionary<string, object> Decorate(int id) { }

	// RVA: 0x226CD0C Offset: 0x2268D0C VA: 0x226CD0C
	public static bool IsDecorate(int id, string type) { }

	// RVA: 0x226CDCC Offset: 0x2268DCC VA: 0x226CDCC
	public static bool Owns(int id) { }

	// RVA: 0x226D038 Offset: 0x2269038 VA: 0x226D038
	public static bool IsHeadFrameValid(int id) { }

	// RVA: 0x226D0E8 Offset: 0x22690E8 VA: 0x226D0E8
	public static bool IsNamePlateValid(int id) { }

	// RVA: 0x226D198 Offset: 0x2269198 VA: 0x226D198
	public static int get_HeadFrame() { }

	// RVA: 0x226D250 Offset: 0x2269250 VA: 0x226D250
	public static int get_NamePlate() { }

	// RVA: 0x226D308 Offset: 0x2269308 VA: 0x226D308
	public static bool SetHeadFrame(int id) { }

	// RVA: 0x226D3E0 Offset: 0x22693E0 VA: 0x226D3E0
	public static bool SetNamePlate(int id) { }

	// RVA: 0x226D4B4 Offset: 0x22694B4 VA: 0x226D4B4
	public static bool IsSourceValid(string source) { }

	// RVA: 0x226D580 Offset: 0x2269580 VA: 0x226D580
	public static List<int> ShowableDecorates(string type) { }

	// RVA: 0x226DB24 Offset: 0x2269B24 VA: 0x226DB24
	public static string DecoratePath(int id) { }

	// RVA: 0x226DBC8 Offset: 0x2269BC8 VA: 0x226DBC8
	public static string DecorateLockTips(int id) { }

	// RVA: 0x226DC6C Offset: 0x2269C6C VA: 0x226DC6C
	public static bool OwnsAnyDecorate() { }

	// RVA: 0x226DFF8 Offset: 0x2269FF8 VA: 0x226DFF8
	public static bool get_HasName() { }

	// RVA: 0x225B990 Offset: 0x2257990 VA: 0x225B990
	public static string get_PlayerName() { }

	// RVA: 0x226E40C Offset: 0x226A40C VA: 0x226E40C
	public static bool SetPlayerName(string name) { }

	// RVA: 0x226E300 Offset: 0x226A300 VA: 0x226E300
	private static void SetPlayerNameRaw(string name) { }

	// RVA: 0x226E4EC Offset: 0x226A4EC VA: 0x226E4EC
	public static bool TryValidateName(string raw, out string clean) { }

	// RVA: 0x226E578 Offset: 0x226A578 VA: 0x226E578
	public static string SanitizeName(string raw) { }

	// RVA: 0x226E794 Offset: 0x226A794 VA: 0x226E794
	private static Dictionary<string, List<string>> Names() { }

	// RVA: 0x226E084 Offset: 0x226A084 VA: 0x226E084
	public static string RandomName() { }

	// RVA: 0x226ED30 Offset: 0x226AD30 VA: 0x226ED30
	public static string Randomize() { }

	// RVA: 0x226EE34 Offset: 0x226AE34 VA: 0x226EE34
	public static void TrackProfile() { }

	// RVA: 0x226CA14 Offset: 0x2268A14 VA: 0x226CA14
	private static void TrackProfileSave() { }

	// RVA: 0x226C900 Offset: 0x2268900 VA: 0x226C900
	private static void Raise(PlayerIdentity.Appearance a) { }

	// RVA: 0x226EFE8 Offset: 0x226AFE8 VA: 0x226EFE8
	private static void .cctor() { }
}

