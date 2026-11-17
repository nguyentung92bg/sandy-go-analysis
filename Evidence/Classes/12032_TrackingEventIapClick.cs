// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventIapClick : TrackingEventIapBase<TrackingEventIapClick> // TypeDefIndex: 12032
{
	// Fields
	private readonly string pack_name; // 0x30

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x24784C0 Offset: 0x24744C0 VA: 0x24784C0 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x2478500 Offset: 0x2474500 VA: 0x2478500 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2478638 Offset: 0x2474638 VA: 0x2478638
	public void .ctor(string placement, string packName) { }
}

