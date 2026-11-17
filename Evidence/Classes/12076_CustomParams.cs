// Namespace: Dino.Tracking
public sealed class CustomParams // TypeDefIndex: 12076
{
	// Fields
	private List<KeyValuePair<string, DinoTrackingParameter>> parameters; // 0x10

	// Properties
	public int Count { get; }

	// Methods

	// RVA: 0x247B504 Offset: 0x2477504 VA: 0x247B504
	public int get_Count() { }

	// RVA: 0x247B560 Offset: 0x2477560 VA: 0x247B560
	public CustomParams Set(string key, string value) { }

	// RVA: 0x247B6C8 Offset: 0x24776C8 VA: 0x247B6C8
	public CustomParams Set(string key, int value) { }

	// RVA: 0x247B728 Offset: 0x2477728 VA: 0x247B728
	public CustomParams Set(string key, float value) { }

	// RVA: 0x247B784 Offset: 0x2477784 VA: 0x247B784
	public CustomParams Set(string key, double value) { }

	// RVA: 0x247B7E0 Offset: 0x24777E0 VA: 0x247B7E0
	public CustomParams Set(string key, bool value) { }

	// RVA: 0x247B840 Offset: 0x2477840 VA: 0x247B840
	public bool Remove(string key) { }

	// RVA: 0x247B848 Offset: 0x2477848 VA: 0x247B848
	public void Clear() { }

	// RVA: 0x247B550 Offset: 0x2477550 VA: 0x247B550
	internal void MergeInto(List<KeyValuePair<string, DinoTrackingParameter>> target) { }

	// RVA: 0x247B5C0 Offset: 0x24775C0 VA: 0x247B5C0
	private CustomParams Store(string key, Nullable<DinoTrackingParameter> parameter) { }

	// RVA: 0x247B8B4 Offset: 0x24778B4 VA: 0x247B8B4
	public void .ctor() { }
}

