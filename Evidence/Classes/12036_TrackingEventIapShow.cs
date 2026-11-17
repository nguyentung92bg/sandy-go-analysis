// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventIapShow : TrackingEventIapBase<TrackingEventIapShow> // TypeDefIndex: 12036
{
	// Fields
	private string pack_name; // 0x30

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x2478F98 Offset: 0x2474F98 VA: 0x2478F98 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x2478FD8 Offset: 0x2474FD8 VA: 0x2478FD8 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2479058 Offset: 0x2475058 VA: 0x2479058
	public void .ctor(string placement) { }

	// RVA: 0x24790B0 Offset: 0x24750B0 VA: 0x24790B0
	public TrackingEventIapShow SetPackName(string value) { }
}

