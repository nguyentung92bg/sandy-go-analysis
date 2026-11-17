// Namespace: Dino.Tracking
[Serializable]
public class TrackingEventScreenShow : TrackingEventBase // TypeDefIndex: 12063
{
	// Fields
	private readonly string screen_name; // 0x18
	private string button_name; // 0x20
	private string prev_screen_name; // 0x28
	private Nullable<int> duration_prev_screen; // 0x30

	// Properties
	public override string EventName { get; }

	// Methods

	// RVA: 0x247A458 Offset: 0x2476458 VA: 0x247A458 Slot: 6
	public override string get_EventName() { }

	// RVA: 0x247A498 Offset: 0x2476498 VA: 0x247A498 Slot: 8
	protected override void WriteEventParameters(List<DinoTrackingParameter> buffer) { }

	// RVA: 0x247A624 Offset: 0x2476624 VA: 0x247A624
	public void .ctor(string screenName) { }

	// RVA: 0x247A654 Offset: 0x2476654 VA: 0x247A654
	public TrackingEventScreenShow SetButtonName(string value) { }

	// RVA: 0x247A670 Offset: 0x2476670 VA: 0x247A670
	public TrackingEventScreenShow SetPrevScreenName(string value) { }

	// RVA: 0x247A68C Offset: 0x247668C VA: 0x247A68C
	public TrackingEventScreenShow SetDurationPrevScreen(Nullable<int> value) { }
}

