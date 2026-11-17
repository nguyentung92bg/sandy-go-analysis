// Namespace: Dino.Tracking
[Service(new[] {  }, Instantiate = True, DontDestroyOnLoad = True)]
[Preserve]
internal class UserPropertyAutoTracker : MonoBehaviour<IUserIdProvider, IDayActiveProvider> // TypeDefIndex: 12109
{
	// Fields
	private IUserIdProvider _userIdProvider; // 0x28
	private IDayActiveProvider _dayActiveProvider; // 0x30

	// Methods

	// RVA: 0x2481620 Offset: 0x247D620 VA: 0x2481620 Slot: 24
	protected override void Init(IUserIdProvider userIdProvider, IDayActiveProvider dayActiveProvider) { }

	// RVA: 0x2481650 Offset: 0x247D650 VA: 0x2481650
	private void Start() { }

	// RVA: 0x24818E0 Offset: 0x247D8E0 VA: 0x24818E0
	private void OnApplicationFocus(bool hasFocus) { }

	// RVA: 0x2481654 Offset: 0x247D654 VA: 0x2481654
	private void PushAll() { }

	// RVA: 0x24818EC Offset: 0x247D8EC VA: 0x24818EC
	private void PushConnectionType() { }

	// RVA: 0x2481A14 Offset: 0x247DA14 VA: 0x2481A14
	public void .ctor() { }
}

