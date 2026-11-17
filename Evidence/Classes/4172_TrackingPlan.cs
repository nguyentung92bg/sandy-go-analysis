// Namespace: Dino.BusSand.App.Meta
public static class TrackingPlan // TypeDefIndex: 4172
{
	// Fields
	public static Action<string, Dictionary<string, object>> EventSink; // 0x0
	public static Action<Dictionary<string, object>> PropertySink; // 0x8
	public static readonly List<KeyValuePair<string, Dictionary<string, object>>> Recent; // 0x10
	public static readonly Dictionary<string, object> Properties; // 0x18
	public static bool Verbose; // 0x20
	public const string Null = "null";
	private static readonly string[] AdFormats; // 0x28
	private static readonly string[] IapPlacements; // 0x30
	private static readonly string[] EarnResources; // 0x38
	private static readonly string[] SpendResources; // 0x40
	private static readonly TrackingPlan.Field[] Attempt; // 0x48
	private static readonly TrackingPlan.Field[] Iap; // 0x50
	private static readonly TrackingPlan.Field[] Price; // 0x58
	private static readonly TrackingPlan.Field[] AdShared; // 0x60
	private static readonly Dictionary<string, TrackingPlan.Field[]> Events; // 0x68
	private static readonly Dictionary<string, TrackingPlan.Field[]> SdkEvents; // 0x70
	private static readonly Dictionary<string, TrackingPlan.T> PropertyTypes; // 0x78
	private static readonly HashSet<string> Reserved; // 0x80
	private static readonly Dictionary<string, object> Sent; // 0x88

	// Properties
	public static IEnumerable<string> EventNames { get; }
	public static IEnumerable<string> AllEventNames { get; }

	// Methods

	// RVA: 0x2274D98 Offset: 0x2270D98 VA: 0x2274D98
	private static TrackingPlan.Field R(string k, TrackingPlan.T t, string[] allowed) { }

	// RVA: 0x2274DD4 Offset: 0x2270DD4 VA: 0x2274DD4
	private static TrackingPlan.Field O(string k, TrackingPlan.T t, string[] allowed) { }

	// RVA: 0x2274E10 Offset: 0x2270E10 VA: 0x2274E10
	private static TrackingPlan.Field[] Join(TrackingPlan.Field[][] parts) { }

	// RVA: 0x2274F04 Offset: 0x2270F04 VA: 0x2274F04
	private static string[] Concat(string[] a, string[] b) { }

	// RVA: 0x2274F98 Offset: 0x2270F98 VA: 0x2274F98
	public static IEnumerable<string> get_EventNames() { }

	[IteratorStateMachine(typeof(TrackingPlan.<get_AllEventNames>d__27))]
	// RVA: 0x2275010 Offset: 0x2271010 VA: 0x2275010
	public static IEnumerable<string> get_AllEventNames() { }

	// RVA: 0x2275068 Offset: 0x2271068 VA: 0x2275068
	public static TrackingPlan.Params P() { }

	// RVA: 0x22750BC Offset: 0x22710BC VA: 0x22750BC
	public static void Record(string name, Dictionary<string, object> p) { }

	// RVA: 0x2275DBC Offset: 0x2271DBC VA: 0x2275DBC
	public static string PatchSdkEvent(string name, Dictionary<string, object> d) { }

	// RVA: 0x2275FA8 Offset: 0x2271FA8 VA: 0x2275FA8
	public static void SetProperties(Dictionary<string, object> props) { }

	// RVA: 0x2276770 Offset: 0x2272770 VA: 0x2276770
	public static void ClearSentProperties() { }

	// RVA: 0x22767E8 Offset: 0x22727E8 VA: 0x22767E8
	public static string Validate(string name, Dictionary<string, object> p) { }

	// RVA: 0x227557C Offset: 0x227157C VA: 0x227557C
	public static string Validate(string name, Dictionary<string, object> p, out string valueNote) { }

	// RVA: 0x22766E0 Offset: 0x22726E0 VA: 0x22766E0
	private static bool TypeOk(object v, TrackingPlan.T t) { }

	// RVA: 0x2275D64 Offset: 0x2271D64 VA: 0x2275D64
	private static void Report(string msg) { }

	// RVA: 0x2276858 Offset: 0x2272858 VA: 0x2276858
	private static void .cctor() { }
}

