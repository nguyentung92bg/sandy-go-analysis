// Namespace: Dino.Tracking
[Debugable("Tracking", "Tracking", 0)]
internal sealed class TrackingDebugger : IDebugable // TypeDefIndex: 13230
{
	// Fields
	private const string NA = "N/A";

	// Properties
	private static string ActiveSink { get; }
	[DebugValue("Sink")]
	public string Sink { get; }
	[DebugValue("User Id")]
	public string UserId { get; }
	[DebugValue("Server Remembered")]
	public string ServerRemembered { get; }

	// Methods

	// RVA: 0x2463AF8 Offset: 0x245FAF8 VA: 0x2463AF8
	private static string get_ActiveSink() { }

	// RVA: 0x2463B88 Offset: 0x245FB88 VA: 0x2463B88
	public string get_Sink() { }

	// RVA: 0x2463B8C Offset: 0x245FB8C VA: 0x2463B8C
	public string get_UserId() { }

	// RVA: 0x2463C88 Offset: 0x245FC88 VA: 0x2463C88
	public string get_ServerRemembered() { }

	[DebugButton("Override to Server")]
	// RVA: 0x2463CE8 Offset: 0x245FCE8 VA: 0x2463CE8
	public void OverrideToServer() { }

	[DebugButton("Reset to Default")]
	// RVA: 0x2463EAC Offset: 0x245FEAC VA: 0x2463EAC
	public void ResetToDefault() { }

	// RVA: 0x2463F1C Offset: 0x245FF1C VA: 0x2463F1C
	public void .ctor() { }
}

