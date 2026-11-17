// Namespace: Dino.Tracking
public static class TrackingSinkRouter // TypeDefIndex: 12106
{
	// Fields
	[CompilerGenerated]
	private static Func<ITrackingProvider> <ProviderFactory>k__BackingField; // 0x0
	private static readonly List<ITrackingProvider> ExtraSinks; // 0x8

	// Properties
	public static Func<ITrackingProvider> ProviderFactory { get; set; }
	internal static IReadOnlyList<ITrackingProvider> Sinks { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x248097C Offset: 0x247C97C VA: 0x248097C
	public static Func<ITrackingProvider> get_ProviderFactory() { }

	[CompilerGenerated]
	// RVA: 0x24809D4 Offset: 0x247C9D4 VA: 0x24809D4
	public static void set_ProviderFactory(Func<ITrackingProvider> value) { }

	// RVA: 0x2480A3C Offset: 0x247CA3C VA: 0x2480A3C
	public static void AddSink(ITrackingProvider sink) { }

	// RVA: 0x2480BB0 Offset: 0x247CBB0 VA: 0x2480BB0
	internal static IReadOnlyList<ITrackingProvider> get_Sinks() { }

	[RuntimeInitializeOnLoadMethod(4)]
	// RVA: 0x2480C08 Offset: 0x247CC08 VA: 0x2480C08
	internal static void ResetSinks() { }

	// RVA: 0x2480CA0 Offset: 0x247CCA0 VA: 0x2480CA0
	private static void .cctor() { }
}

