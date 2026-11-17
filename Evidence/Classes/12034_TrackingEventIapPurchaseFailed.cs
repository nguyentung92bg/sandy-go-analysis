// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventIapPurchaseFailed : TrackingEventIapBase<TrackingEventIapPurchaseFailed> // TypeDefIndex: 12034
{
	// Fields
	private readonly string pack_name; // 0x30
	private readonly double price; // 0x38
	private readonly string currency; // 0x40
	private string fail_reason; // 0x48
	private string error_code; // 0x50

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x2478810 Offset: 0x2474810 VA: 0x2478810 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x2478850 Offset: 0x2474850 VA: 0x2478850 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x2478B48 Offset: 0x2474B48 VA: 0x2478B48
	public void .ctor(string placement, string packName, double price, string currency) { }

	// RVA: 0x2478BE0 Offset: 0x2474BE0 VA: 0x2478BE0
	public TrackingEventIapPurchaseFailed SetFailReason(string value) { }

	// RVA: 0x2478BFC Offset: 0x2474BFC VA: 0x2478BFC
	public TrackingEventIapPurchaseFailed SetErrorCode(string value) { }
}

