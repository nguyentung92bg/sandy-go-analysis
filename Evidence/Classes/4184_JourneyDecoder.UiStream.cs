// Namespace: 
public sealed class JourneyDecoder.UiStream // TypeDefIndex: 4184
{
	// Fields
	public int Kind; // 0x10
	public int Flags; // 0x14
	public long StartUnixSeconds; // 0x18
	public int Aseq; // 0x20
	public readonly List<JourneyDecoder.UiStep> Steps; // 0x28
	public string Error; // 0x30

	// Properties
	public int EndBy { get; }
	public bool StartedInLevel { get; }

	// Methods

	// RVA: 0x2297F48 Offset: 0x2293F48 VA: 0x2297F48
	public int get_EndBy() { }

	// RVA: 0x2297F54 Offset: 0x2293F54 VA: 0x2297F54
	public bool get_StartedInLevel() { }

	// RVA: 0x22974FC Offset: 0x22934FC VA: 0x22974FC
	public void .ctor() { }
}

