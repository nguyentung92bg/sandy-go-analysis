// Namespace: Dino.Tracking
internal static class ServerTrackingAutoRouter // TypeDefIndex: 13222
{
	// Fields
	private const string PrefKey = "dino_tracking_use_server";

	// Properties
	public static bool ShouldUseServerSink { get; }
	public static bool UseServerPreference { get; set; }

	// Methods

	// RVA: 0x246046C Offset: 0x245C46C VA: 0x246046C
	public static bool get_ShouldUseServerSink() { }

	// RVA: 0x2460504 Offset: 0x245C504 VA: 0x2460504
	public static bool get_UseServerPreference() { }

	// RVA: 0x2460560 Offset: 0x245C560 VA: 0x2460560
	public static void set_UseServerPreference(bool value) { }

	[RuntimeInitializeOnLoadMethod(1)]
	// RVA: 0x24605D4 Offset: 0x245C5D4 VA: 0x24605D4
	private static void RegisterSinkFactory() { }

	// RVA: 0x24606B4 Offset: 0x245C6B4 VA: 0x24606B4
	public static ITrackingProvider CreateServerProvider() { }
}

