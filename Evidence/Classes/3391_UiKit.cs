// Namespace: Dino.BusSand.App.UI
public static class UiKit // TypeDefIndex: 3391
{
	// Fields
	public static readonly Color Brown; // 0x0
	public static readonly Color Cream; // 0x10
	public static readonly Color Yellow; // 0x20
	private const float HolderW = 101;
	private const float HolderH = 236;
	private const float FaceInsetX = 21;
	private const float FaceInsetTop = 12;
	private const float FaceInsetBottom = 23;
	private static readonly Vector3 MenuInset; // 0x30
	public const float CloseFrame = 123;
	private const string BreathNode = "Breath";
	public static bool ButtonsBreathe; // 0x3C

	// Properties
	private static bool English { get; }
	public static bool IsEnglish { get; }
	public static KitTier CurrentTier { get; }

	// Methods

	// RVA: 0x22818C4 Offset: 0x227D8C4 VA: 0x22818C4
	public static RectTransform Node(Transform parent, string name, Vector2 size, Vector2 pos, Nullable<Vector2> anchor) { }

	// RVA: 0x22817D8 Offset: 0x227D7D8 VA: 0x22817D8
	public static RectTransform Fill(Transform parent, string name, float l = 0, float b = 0, float r = 0, float t = 0) { }

	// RVA: 0x2281F58 Offset: 0x227DF58 VA: 0x2281F58
	public static RectTransform Stretch(RectTransform rt, float l = 0, float b = 0, float r = 0, float t = 0) { }

	// RVA: 0x228203C Offset: 0x227E03C VA: 0x228203C
	public static Image Img(Transform parent, string name, string key, Vector2 size, Vector2 pos, float scale = 1, bool sliced = False) { }

	// RVA: 0x2281C4C Offset: 0x227DC4C VA: 0x2281C4C
	public static RectTransform Mirror(Transform parent, string name, string key, Vector2 size, Vector2 pos, float scale = 1, Nullable<Color> tint) { }

	// RVA: 0x228B484 Offset: 0x2287484 VA: 0x228B484
	public static void MirrorSprite(RectTransform mirror, string key) { }

	// RVA: 0x228277C Offset: 0x227E77C VA: 0x228277C
	public static Image HitArea(RectTransform rt) { }

	// RVA: 0x2282314 Offset: 0x227E314 VA: 0x2282314
	public static TextMeshProUGUI Text(Transform parent, string name, string text, float size, string preset = "Plain", Nullable<Color> color, Vector2 box, Vector2 pos, TextAlignmentOptions align = 514) { }

	// RVA: 0x228B5CC Offset: 0x22875CC VA: 0x228B5CC
	public static void SameSize(TMP_Text[] texts) { }

	// RVA: 0x228B744 Offset: 0x2287744 VA: 0x228B744
	public static void BalanceLines(TMP_Text t, float minShare = 0.45) { }

	// RVA: 0x228BAA0 Offset: 0x2287AA0 VA: 0x228BAA0
	public static void GoldGradient(TMP_Text t, string preset = "Gold") { }

	// RVA: 0x2287E10 Offset: 0x2283E10 VA: 0x2287E10
	public static void Style(TMP_Text t, string preset) { }

	// RVA: 0x228BC44 Offset: 0x2287C44 VA: 0x228BC44
	public static float WordGap(Material m) { }

	// RVA: 0x2285E1C Offset: 0x2281E1C VA: 0x2285E1C
	public static string T(string key, string fallback, object[] args) { }

	// RVA: 0x228BE14 Offset: 0x2287E14 VA: 0x228BE14
	private static bool get_English() { }

	// RVA: 0x228BE60 Offset: 0x2287E60 VA: 0x228BE60
	public static bool get_IsEnglish() { }

	// RVA: 0x2282D78 Offset: 0x227ED78 VA: 0x2282D78
	public static string LevelText(int level) { }

	// RVA: 0x228BF14 Offset: 0x2287F14 VA: 0x228BF14
	public static string TierText(KitTier t) { }

	// RVA: 0x228C108 Offset: 0x2288108 VA: 0x228C108
	public static string FaceKey(KitColor c) { }

	// RVA: 0x228C198 Offset: 0x2288198 VA: 0x228C198
	public static string Preset(KitColor c) { }

	// RVA: 0x228C1FC Offset: 0x22881FC VA: 0x228C1FC
	public static float HolderFor(float faceH) { }

	// RVA: 0x228C218 Offset: 0x2288218 VA: 0x228C218
	public static RectTransform Button(Transform parent, string name, KitColor color, Vector2 size, Vector2 pos, string faceKey) { }

	// RVA: 0x228C450 Offset: 0x2288450 VA: 0x228C450
	public static RectTransform MenuButton(Transform parent, string name, Vector2 size, string faceKey, Vector2 pos, float rim = 1) { }

	// RVA: 0x228C630 Offset: 0x2288630 VA: 0x228C630
	public static Vector2 MenuButtonSize(Vector2 face, float rim) { }

	// RVA: 0x228C6C0 Offset: 0x22886C0 VA: 0x228C6C0
	public static TextMeshProUGUI LabelButton(Transform parent, string name, KitColor color, Vector2 size, Vector2 pos, string label, string icon, float fontSize = 0) { }

	// RVA: 0x228CAB4 Offset: 0x2288AB4 VA: 0x228CAB4
	public static RectTransform ButtonRoot(TMP_Text label) { }

	// RVA: 0x228CB44 Offset: 0x2288B44 VA: 0x228CB44
	public static void SetLabel(TMP_Text t, string label) { }

	// RVA: 0x228260C Offset: 0x227E60C VA: 0x228260C
	public static RectTransform CloseButton(Transform parent, Vector2 pos, float size = 108, KitTheme theme = 0) { }

	// RVA: 0x22888CC Offset: 0x22848CC VA: 0x22888CC
	public static TextMeshProUGUI Badge(Transform parent, string name, bool plus, Vector2 pos, float size = 76) { }

	// RVA: 0x228CC80 Offset: 0x2288C80 VA: 0x228CC80
	public static KitTier Tier(LevelType t) { }

	// RVA: 0x228CC94 Offset: 0x2288C94 VA: 0x228CC94
	public static KitTier get_CurrentTier() { }

	// RVA: 0x228CD64 Offset: 0x2288D64 VA: 0x228CD64
	public static string TierSuffix(KitTier t) { }

	// RVA: 0x228CDE8 Offset: 0x2288DE8 VA: 0x228CDE8
	public static KitColor TierColor(KitTier t) { }

	// RVA: 0x228CE00 Offset: 0x2288E00 VA: 0x228CE00
	public static RectTransform Rays(Transform parent, float size, Vector2 pos, float alpha = 0.85, float speed = 22, Nullable<Color> tint) { }

	// RVA: 0x2285A84 Offset: 0x2281A84 VA: 0x2285A84
	public static Color Hex(string h) { }

	// RVA: 0x2284B34 Offset: 0x2280B34 VA: 0x2284B34
	public static Image SettingsButton(Transform parent, string name) { }

	// RVA: 0x2289058 Offset: 0x2285058 VA: 0x2289058
	public static KitPulse Breathe(Transform button, float amount = 0.045, float period = 1.1) { }

	// RVA: 0x228972C Offset: 0x228572C VA: 0x228972C
	public static void StopBreathing(Transform button) { }

	// RVA: 0x2288F68 Offset: 0x2284F68 VA: 0x2288F68
	public static bool IsBreathing(Transform button) { }

	// RVA: 0x228D094 Offset: 0x2289094 VA: 0x228D094
	public static Transform Part(Transform button, string path) { }

	// RVA: 0x228348C Offset: 0x227F48C VA: 0x228348C
	public static string Num(long n) { }

	// RVA: 0x228D11C Offset: 0x228911C VA: 0x228D11C
	private static void .cctor() { }
}

