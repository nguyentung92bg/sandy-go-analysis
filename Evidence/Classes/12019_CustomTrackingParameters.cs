// Namespace: Dino.Tracking
internal static class CustomTrackingParameters // TypeDefIndex: 12019
{
	// Fields
	private static readonly List<KeyValuePair<string, DinoTrackingParameter>> SessionParameters; // 0x0

	// Properties
	internal static int SessionCount { get; }

	// Methods

	// RVA: 0x2477220 Offset: 0x2473220 VA: 0x2477220
	internal static void SetSessionParam(string key, DinoTrackingParameter parameter) { }

	// RVA: 0x24772AC Offset: 0x24732AC VA: 0x24772AC
	internal static bool RemoveSessionParam(string key) { }

	// RVA: 0x247730C Offset: 0x247330C VA: 0x247730C
	internal static void ClearSessionParams() { }

	// RVA: 0x24773A4 Offset: 0x24733A4 VA: 0x24773A4
	internal static bool TryGetSessionParam(string key, out DinoTrackingParameter parameter) { }

	// RVA: 0x2477548 Offset: 0x2473548 VA: 0x2477548
	internal static int get_SessionCount() { }

	// RVA: 0x24775B8 Offset: 0x24735B8 VA: 0x24775B8
	internal static void Write(List<DinoTrackingParameter> buffer, List<KeyValuePair<string, DinoTrackingParameter>> local) { }

	// RVA: 0x247768C Offset: 0x247368C VA: 0x247768C
	private static void Append(List<DinoTrackingParameter> buffer, List<KeyValuePair<string, DinoTrackingParameter>> values) { }

	// RVA: 0x247786C Offset: 0x247386C VA: 0x247786C
	private static bool Contains(List<DinoTrackingParameter> buffer, string key) { }

	[RuntimeInitializeOnLoadMethod(4)]
	// RVA: 0x247792C Offset: 0x247392C VA: 0x247792C
	internal static void Reset() { }

	// RVA: 0x24779C4 Offset: 0x24739C4 VA: 0x24779C4
	private static void .cctor() { }
}

