// Namespace: Dino.Tracking
[Serializable]
public abstract class TrackingEventBase : TrackingScriptBase // TypeDefIndex: 12075
{
	// Fields
	private List<KeyValuePair<string, DinoTrackingParameter>> custom_parameters; // 0x10

	// Methods

	// RVA: 0x247B068 Offset: 0x2477068 VA: 0x247B068 Slot: 7
	public sealed override void WriteParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: -1 Offset: -1 Slot: 8
	protected abstract void WriteEventParameters(List<DinoTrackingParameter> buffer);

	// RVA: 0x247B0E4 Offset: 0x24770E4 VA: 0x247B0E4
	public TrackingEventBase SetCustomParam(string key, string value) { }

	// RVA: 0x247B24C Offset: 0x247724C VA: 0x247B24C
	public TrackingEventBase SetCustomParam(string key, int value) { }

	// RVA: 0x247B2AC Offset: 0x24772AC VA: 0x247B2AC
	public TrackingEventBase SetCustomParam(string key, float value) { }

	// RVA: 0x247B308 Offset: 0x2477308 VA: 0x247B308
	public TrackingEventBase SetCustomParam(string key, double value) { }

	// RVA: 0x247B364 Offset: 0x2477364 VA: 0x247B364
	public TrackingEventBase SetCustomParam(string key, bool value) { }

	// RVA: 0x247B3C4 Offset: 0x24773C4 VA: 0x247B3C4
	public bool RemoveCustomParam(string key) { }

	// RVA: 0x247B3CC Offset: 0x24773CC VA: 0x247B3CC
	public void ClearCustomParams() { }

	// RVA: 0x247B438 Offset: 0x2477438 VA: 0x247B438
	internal void MergeCustomParams(CustomParams custom) { }

	// RVA: 0x247B144 Offset: 0x2477144 VA: 0x247B144
	private TrackingEventBase Store(string key, Nullable<DinoTrackingParameter> parameter) { }

	// RVA: 0x24781E8 Offset: 0x24741E8 VA: 0x24781E8
	protected void .ctor() { }
}

