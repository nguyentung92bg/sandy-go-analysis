// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventEventStart : TrackingEventEventBase<TrackingEventEventStart> // TypeDefIndex: 12049
{
	// Fields
	private Nullable<int> event_start_index; // 0x40

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x247995C Offset: 0x247595C VA: 0x247995C Slot: 6
	public override string get_EventName() { }

	// RVA: 0x247999C Offset: 0x247599C VA: 0x247999C Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2479A1C Offset: 0x2475A1C VA: 0x2479A1C
	public void .ctor(string eventNameIngame) { }

	// RVA: 0x2479A74 Offset: 0x2475A74 VA: 0x2479A74
	public TrackingEventEventStart SetEventStartIndex(Nullable<int> value) { }
}

