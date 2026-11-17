// Namespace: Dino.Tracking
[Service(new[] { typeof(ITrackingService) }, Instantiate = True, DontDestroyOnLoad = True)]
public class TrackingService : MonoBehaviour<ITrackingProvider>, ITrackingService, IGlobalService<ITrackingService>, IStart // TypeDefIndex: 12105
{
	// Fields
	private const string Tag = "DinoTracking";
	private const int BufferCap = 64;
	private const int ScratchCap = 16;
	private bool _initialized; // 0x24
	private bool _providerOk; // 0x25
	private ITrackingProvider _provider; // 0x28
	private ITrackingProvider[] _extraSinks; // 0x30
	private Queue<TrackingService.PendingEvent> _buffer; // 0x38
	private Dictionary<string, object> _pendingProps; // 0x40
	private readonly List<DinoTrackingParameter> _scratch; // 0x48

	// Methods

	// RVA: 0x247F708 Offset: 0x247B708 VA: 0x247F708 Slot: 24
	protected override void Init(ITrackingProvider provider) { }

	// RVA: 0x247F710 Offset: 0x247B710 VA: 0x247F710
	private void OnEnable() { }

	// RVA: 0x247F858 Offset: 0x247B858 VA: 0x247F858 Slot: 31
	private void Sisus.Init.IStart.Start() { }

	// RVA: 0x247F87C Offset: 0x247B87C VA: 0x247F87C Slot: 26
	public void Init() { }

	[AsyncStateMachine(typeof(TrackingService.<InitAsync>d__15))]
	// RVA: 0x247F8A0 Offset: 0x247B8A0 VA: 0x247F8A0
	private UniTaskVoid InitAsync() { }

	// RVA: -1 Offset: -1 Slot: 27
	public void TrackEvent<T>(T script) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x28DA788 Offset: 0x28D6788 VA: 0x28DA788
	|-TrackingService.TrackEvent<object>
	|
	|-RVA: 0x28DA980 Offset: 0x28D6980 VA: 0x28DA980
	|-TrackingService.TrackEvent<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x247F930 Offset: 0x247B930 VA: 0x247F930 Slot: 28
	public void TrackEvent(string eventName, DinoTrackingParameter[] parameters) { }

	// RVA: 0x247FC78 Offset: 0x247BC78 VA: 0x247FC78 Slot: 29
	public void SetUserProperty(string propertyName, object value) { }

	// RVA: 0x247FE98 Offset: 0x247BE98 VA: 0x247FE98 Slot: 30
	public void OverrideProvider(ITrackingProvider provider) { }

	// RVA: 0x247FD2C Offset: 0x247BD2C VA: 0x247FD2C
	private void ForwardProperty(string propertyName, object value) { }

	// RVA: 0x247FEA0 Offset: 0x247BEA0 VA: 0x247FEA0
	private static ITrackingProvider[] SnapshotExtraSinks() { }

	// RVA: -1 Offset: -1
	private void Forward<T>(T script) { }
	/* GenericInstMethod :
	|
	|-RVA: 0x28DA390 Offset: 0x28D6390 VA: 0x28DA390
	|-TrackingService.Forward<object>
	|
	|-RVA: 0x28DA50C Offset: 0x28D650C VA: 0x28DA50C
	|-TrackingService.Forward<__Il2CppFullySharedGenericType>
	*/

	// RVA: 0x247F9A0 Offset: 0x247B9A0 VA: 0x247F9A0
	private void ForwardEvent(string eventName, DinoTrackingParameter[] parameters) { }

	// RVA: 0x247FB0C Offset: 0x247BB0C VA: 0x247FB0C
	private void Enqueue(string eventName, DinoTrackingParameter[] parameters) { }

	// RVA: 0x24801B8 Offset: 0x247C1B8 VA: 0x24801B8
	private void FlushBuffer() { }

	// RVA: 0x2480380 Offset: 0x247C380 VA: 0x2480380
	public void .ctor() { }
}

