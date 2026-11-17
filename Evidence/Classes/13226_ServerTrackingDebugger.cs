// Namespace: Dino.Tracking
[Debugable("Server Sink", "Tracking", 1)]
internal sealed class ServerTrackingDebugger : IDebugable // TypeDefIndex: 13226
{
	// Fields
	private const string Inactive = "inactive";

	// Properties
	private static ServerTrackingProvider Provider { get; }
	[DebugValue("Pending")]
	public string Pending { get; }
	[DebugValue("Last Send")]
	public string LastSend { get; }

	// Methods

	// RVA: 0x24628D4 Offset: 0x245E8D4 VA: 0x24628D4
	private static ServerTrackingProvider get_Provider() { }

	// RVA: 0x2462914 Offset: 0x245E914 VA: 0x2462914
	public string get_Pending() { }

	// RVA: 0x24629C0 Offset: 0x245E9C0 VA: 0x24629C0
	public string get_LastSend() { }

	[DebugButton("Flush Now")]
	// RVA: 0x2462A40 Offset: 0x245EA40 VA: 0x2462A40
	public void FlushNow() { }

	[DebugButton("Fire Sample Events")]
	// RVA: 0x2462B88 Offset: 0x245EB88 VA: 0x2462B88
	public void FireSampleEvents() { }

	// RVA: 0x2462D64 Offset: 0x245ED64 VA: 0x2462D64
	public void .ctor() { }
}

