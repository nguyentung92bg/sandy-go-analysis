// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventIapPurchaseSuccess : TrackingEventIapBase<TrackingEventIapPurchaseSuccess> // TypeDefIndex: 12035
{
	// Fields
	private readonly string pack_name; // 0x30
	private readonly double price; // 0x38
	private readonly string currency; // 0x40

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x2478C18 Offset: 0x2474C18 VA: 0x2478C18 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x2478C58 Offset: 0x2474C58 VA: 0x2478C58 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2478F00 Offset: 0x2474F00 VA: 0x2478F00
	public void .ctor(string placement, string packName, double price, string currency) { }
}

