// Namespace: Dino.BusSand.App.UI
public static class KitAdopt // TypeDefIndex: 3365
{
	// Fields
	public const string PoolName = "~KitPool";
	private const float Eps = 0.01;
	private static readonly List<KitAdopt.Scope> s_stack; // 0x0

	// Properties
	public static bool Active { get; }

	// Methods

	// RVA: 0x227CF54 Offset: 0x2278F54 VA: 0x227CF54
	public static bool get_Active() { }

	// RVA: 0x227CFCC Offset: 0x2278FCC VA: 0x227CFCC
	public static bool Near(float a, float b) { }

	// RVA: 0x227CFE4 Offset: 0x2278FE4 VA: 0x227CFE4
	public static bool Near(Vector2 a, Vector2 b) { }

	// RVA: 0x227D088 Offset: 0x2279088 VA: 0x227D088
	public static bool Near(Vector3 a, Vector3 b) { }

	// RVA: 0x227D158 Offset: 0x2279158 VA: 0x227D158
	public static bool NearAngle(float a, float b) { }

	// RVA: 0x227D2A0 Offset: 0x22792A0 VA: 0x227D2A0
	public static KitAdopt.Scope Begin(Transform root, string key) { }

	// RVA: 0x227D710 Offset: 0x2279710 VA: 0x227D710
	private static bool Find(Transform t, out KitAdopt.Scope scope, out int index) { }

	// RVA: 0x227D878 Offset: 0x2279878 VA: 0x227D878
	public static RectTransform Claim(Transform parent, string name) { }

	// RVA: 0x227DD34 Offset: 0x2279D34 VA: 0x227DD34
	public static bool Edited(Transform t) { }

	// RVA: 0x227DE60 Offset: 0x2279E60 VA: 0x227DE60
	public static void RestScale(Transform t, Func<Vector3> get, Action<Vector3> set) { }

	// RVA: 0x227E014 Offset: 0x227A014 VA: 0x227E014
	public static void RestPos(RectTransform t, Func<Vector2> get, Action<Vector2> set) { }

	// RVA: 0x227E1C0 Offset: 0x227A1C0 VA: 0x227E1C0
	public static Nullable<Vector3> OwnerScale(Transform t) { }

	// RVA: 0x227E2BC Offset: 0x227A2BC VA: 0x227E2BC
	public static Material Preset(TMP_Text t, Material preset) { }

	// RVA: 0x227E4F0 Offset: 0x227A4F0 VA: 0x227E4F0
	public static void End(KitAdopt.Scope s) { }

	// RVA: 0x2280080 Offset: 0x227C080 VA: 0x2280080
	private static float Rule(float c, float b, float p) { }

	// RVA: 0x2280104 Offset: 0x227C104 VA: 0x2280104
	private static Vector2 Rule(Vector2 c, Vector2 b, Vector2 p) { }

	// RVA: 0x22801AC Offset: 0x227C1AC VA: 0x22801AC
	private static Vector3 Rule(Vector3 c, Vector3 b, Vector3 p) { }

	// RVA: 0x228027C Offset: 0x227C27C VA: 0x228027C
	private static Color RuleColor(Color c, Color b, Color p) { }

	// RVA: 0x227F07C Offset: 0x227B07C VA: 0x227F07C
	private static void Apply(KitAdopt.Scope s, RectTransform rt, KitValues B, KitValues P) { }

	// RVA: 0x227D254 Offset: 0x2279254 VA: 0x227D254
	private static float Wrap(float deg) { }

	// RVA: 0x2280404 Offset: 0x227C404 VA: 0x2280404
	private static string PathOf(Transform t) { }

	// RVA: 0x2280590 Offset: 0x227C590 VA: 0x2280590
	private static void .cctor() { }
}

