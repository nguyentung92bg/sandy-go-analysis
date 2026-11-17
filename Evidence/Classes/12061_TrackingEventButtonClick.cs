// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventButtonClick : TrackingEventBase // TypeDefIndex: 12061
{
	// Fields
	private readonly string button_name; // 0x18
	private readonly string screen_name; // 0x20

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x247A118 Offset: 0x2476118 VA: 0x247A118 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x247A158 Offset: 0x2476158 VA: 0x247A158 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x247A324 Offset: 0x2476324 VA: 0x247A324
	public void .ctor(string buttonName, string screenName) { }
}

