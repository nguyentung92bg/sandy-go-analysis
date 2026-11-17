// Namespace: Dino.Tracking
internal sealed class ServerTrackingProvider : ITrackingProvider // TypeDefIndex: 13228
{
	// Fields
	private const string DebugTag = "ServerTrackingProvider";
	private const string ServerBaseUrl = "https://tracking-test.dinocyber.com";
	private const int BatchMaxEvents = 50;
	private const float BatchIntervalSeconds = 5;
	[CompilerGenerated]
	private static ServerTrackingProvider <Instance>k__BackingField; // 0x0
	private readonly IUserIdProvider _userIdProvider; // 0x10
	private readonly string _serverUrl; // 0x18
	private readonly ServerTrackingCore _core; // 0x20
	private bool _sending; // 0x28
	private bool _flushQueued; // 0x29
	private readonly List<DinoTrackingParameter> _scratch; // 0x30
	[CompilerGenerated]
	private string <LastSendResult>k__BackingField; // 0x38

	// Properties
	public static ServerTrackingProvider Instance { get; set; }
	public string UserId { get; }
	public string ServerUrl { get; }
	public int PendingCount { get; }
	public string LastSendResult { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x2462D6C Offset: 0x245ED6C VA: 0x2462D6C
	public static ServerTrackingProvider get_Instance() { }

	[CompilerGenerated]
	// RVA: 0x2462DB4 Offset: 0x245EDB4 VA: 0x2462DB4
	private static void set_Instance(ServerTrackingProvider value) { }

	// RVA: 0x2462E0C Offset: 0x245EE0C VA: 0x2462E0C
	public string get_UserId() { }

	// RVA: 0x2462ED4 Offset: 0x245EED4 VA: 0x2462ED4
	public string get_ServerUrl() { }

	// RVA: 0x24629B0 Offset: 0x245E9B0 VA: 0x24629B0
	public int get_PendingCount() { }

	[CompilerGenerated]
	// RVA: 0x2462EDC Offset: 0x245EEDC VA: 0x2462EDC
	public string get_LastSendResult() { }

	[CompilerGenerated]
	// RVA: 0x2462EE4 Offset: 0x245EEE4 VA: 0x2462EE4
	private void set_LastSendResult(string value) { }

	// RVA: 0x2460740 Offset: 0x245C740 VA: 0x2460740
	public void .ctor(IUserIdProvider userIdProvider) { }

	// RVA: 0x2462EEC Offset: 0x245EEEC VA: 0x2462EEC Slot: 4
	public UniTask<bool> WaitForReady() { }

	// RVA: -1 Offset: -1 Slot: 5
	public void TrackEvent<T>(T script) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x28AD604 Offset: 0x28A9604 VA: 0x28AD604
	|-ServerTrackingProvider.TrackEvent<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x2462F54 Offset: 0x245EF54 VA: 0x2462F54 Slot: 6
	public void TrackEvent(string eventName, DinoTrackingParameter[] parameters) { }

	// RVA: 0x2462FA8 Offset: 0x245EFA8 VA: 0x2462FA8 Slot: 7
	public void SetUserProperty(string propertyName, object value) { }

	// RVA: 0x2462FFC Offset: 0x245EFFC VA: 0x2462FFC
	public bool Tick(float deltaSeconds) { }

	// RVA: 0x2462AE0 Offset: 0x245EAE0 VA: 0x2462AE0
	public void FlushNow() { }

	// RVA: 0x2462C28 Offset: 0x245EC28 VA: 0x2462C28
	public void FireSampleEvents() { }

	[AsyncStateMachine(typeof(ServerTrackingProvider.<SendBatchAsync>d__32))]
	// RVA: 0x2463038 Offset: 0x245F038 VA: 0x2463038
	private UniTaskVoid SendBatchAsync(string baseUrl, string json) { }
}

