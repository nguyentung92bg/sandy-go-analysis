// Namespace: Dino.BusSand.App.UI
internal sealed class HomeBus // TypeDefIndex: 3516
{
	// Fields
	private const float S = 1.45;
	public const float RoofY = 3.799;
	private const float FrontAxle = 0.8845;
	private const float RearAxle = -1.7400001;
	private const float Track = 1.2470001;
	public static readonly Vector4 ShadowBox; // 0x0
	public static readonly Vector4 Foot; // 0x10
	private const float FaceYaw = 26;
	private static readonly Color Exhaust; // 0x20
	private static readonly Color Dust; // 0x30
	private static readonly HomeToonFace.Pose Calm; // 0x40
	private static readonly HomeToonFace.Pose Grin; // 0x54
	private static readonly HomeToonFace.Pose Joy; // 0x68
	private static readonly HomeToonFace.Pose Wow; // 0x7C
	private static readonly HomeToonFace.Pose Bold; // 0x90
	private static readonly HomeToonFace.Pose Ooh; // 0xA4
	public readonly Transform Root; // 0x10
	private readonly HomeToonRig _rig; // 0x18
	private readonly HomeToonFace _face; // 0x20
	private readonly HomePuffs _puffs; // 0x28
	private readonly Random _rng; // 0x30
	public Camera Cam; // 0x38
	public float X; // 0x40
	public float V; // 0x44
	public float A; // 0x48
	public float Target; // 0x4C
	private HomeBus.Mode _mode; // 0x50
	private float _from; // 0x54
	private float _t; // 0x58
	private float _dur; // 0x5C
	private float _pitch; // 0x60
	private float _pitchV; // 0x64
	private float _roll; // 0x68
	private float _rollV; // 0x6C
	private float _bump; // 0x70
	private float _bumpV; // 0x74
	private float _act; // 0x78
	private float _actV; // 0x7C
	private float _actTo; // 0x80
	private float _actUntil; // 0x84
	private float _now; // 0x88
	private float _puffAt; // 0x8C
	private float _creepAt; // 0x90
	private float _creep; // 0x94
	private float _creepT; // 0x98
	private float _flash; // 0x9C
	private float _gustAt; // 0xA0
	private float _gustT; // 0xA4
	private float _heap; // 0xA8
	private Color _heapMain; // 0xAC
	private Color _heapShadow; // 0xBC
	private bool _braked; // 0xCC
	private float _quietAt; // 0xD0
	private float _actAt; // 0xD4
	private float _tapAt; // 0xD8
	private int _taps; // 0xDC
	private bool _asleep; // 0xE0
	[TupleElementNames(new[] { "at", "act" })]
	private readonly List<ValueTuple<float, Action>> _later; // 0xE8
	public float TrackFrom; // 0xF0
	public float TrackTo; // 0xF4
	private float _qaUntil; // 0xF8
	private bool _rolling; // 0xFC
	private float _blinkAt; // 0x100

	// Properties
	public bool Valid { get; }
	public Vector3 LightDir { get; }
	public Vector4 Shadow { get; }
	public Vector3 Top { get; }
	public bool Away { get; }
	public bool Leaving { get; }
	public string Qa { get; }
	public bool Arriving { get; }

	// Methods

	// RVA: 0x22DFC30 Offset: 0x22DBC30 VA: 0x22DFC30
	public void .ctor(Transform parent, HomePuffs puffs) { }

	// RVA: 0x22DFF50 Offset: 0x22DBF50 VA: 0x22DFF50
	public bool get_Valid() { }

	// RVA: 0x22DFF60 Offset: 0x22DBF60 VA: 0x22DFF60
	public void Light(Vector3 sun, Material beach) { }

	// RVA: 0x22DFF74 Offset: 0x22DBF74 VA: 0x22DFF74
	public Vector3 get_LightDir() { }

	// RVA: 0x22DFFC8 Offset: 0x22DBFC8 VA: 0x22DFFC8
	public void Dispose() { }

	// RVA: 0x22DFFDC Offset: 0x22DBFDC VA: 0x22DFFDC
	public Vector4 get_Shadow() { }

	// RVA: 0x22E0078 Offset: 0x22DC078 VA: 0x22E0078
	public Vector3 get_Top() { }

	// RVA: 0x22E00CC Offset: 0x22DC0CC VA: 0x22E00CC
	public void Corners(Vector3[] c8) { }

	// RVA: 0x22E020C Offset: 0x22DC20C VA: 0x22E020C
	public bool get_Away() { }

	// RVA: 0x22E021C Offset: 0x22DC21C VA: 0x22E021C
	public bool get_Leaving() { }

	// RVA: 0x22E022C Offset: 0x22DC22C VA: 0x22E022C
	public string get_Qa() { }

	// RVA: 0x22E0304 Offset: 0x22DC304 VA: 0x22E0304
	public void QaFace(string pose, float seconds, Nullable<Vector2> look) { }

	// RVA: 0x22E0684 Offset: 0x22DC684 VA: 0x22E0684
	public void Arrive(float back, float seconds, float delay = 0) { }

	// RVA: 0x22E0974 Offset: 0x22DC974 VA: 0x22E0974
	public bool get_Arriving() { }

	// RVA: 0x22E0984 Offset: 0x22DC984 VA: 0x22E0984
	public void Settle() { }

	// RVA: 0x22E09EC Offset: 0x22DC9EC VA: 0x22E09EC
	public void Leave() { }

	// RVA: 0x22E0CE4 Offset: 0x22DCCE4 VA: 0x22E0CE4
	public void Honk(float pitch = 1) { }

	// RVA: 0x22E1574 Offset: 0x22DD574 VA: 0x22E1574
	public void Blink() { }

	// RVA: 0x22E1738 Offset: 0x22DD738 VA: 0x22E1738
	public void Heap(float fill, Color main, Color shadow) { }

	// RVA: 0x22E1888 Offset: 0x22DD888 VA: 0x22E1888
	public void CloseRoof() { }

	// RVA: 0x22E1910 Offset: 0x22DD910 VA: 0x22E1910
	private void Landed() { }

	// RVA: 0x22E1F78 Offset: 0x22DDF78 VA: 0x22E1F78
	public void Buck(float strength) { }

	// RVA: 0x22E22FC Offset: 0x22DE2FC VA: 0x22E22FC
	public void Gust(float delay) { }

	// RVA: 0x22E230C Offset: 0x22DE30C VA: 0x22E230C
	public void Step(float dt, float now, bool idle) { }

	// RVA: 0x22E3054 Offset: 0x22DF054 VA: 0x22E3054
	private static float Smooth(float t) { }

	// RVA: 0x22E2F20 Offset: 0x22DEF20 VA: 0x22E2F20
	private void Creep(float dt, bool idle) { }

	// RVA: 0x22E306C Offset: 0x22DF06C VA: 0x22E306C
	private void Act(bool idle) { }

	// RVA: 0x22E45F8 Offset: 0x22E05F8 VA: 0x22E45F8
	private void Later(float seconds, Action a) { }

	// RVA: 0x22E452C Offset: 0x22E052C VA: 0x22E452C
	private void Doze() { }

	// RVA: 0x22E0748 Offset: 0x22DC748 VA: 0x22E0748
	private void Wake(bool startled) { }

	// RVA: 0x22E4410 Offset: 0x22E0410 VA: 0x22E4410
	private Nullable<Vector3> Pointer() { }

	// RVA: 0x22E219C Offset: 0x22DE19C VA: 0x22E219C
	private Nullable<Vector3> Spot(int i) { }

	// RVA: 0x22E4704 Offset: 0x22E0704 VA: 0x22E4704
	private Vector3 EyeDepth(Vector2 screen) { }

	// RVA: 0x22E3BA0 Offset: 0x22DFBA0 VA: 0x22E3BA0
	private void Ride(float dt, float parked) { }

	// RVA: 0x22E40C0 Offset: 0x22E00C0 VA: 0x22E40C0
	private void Effects(float dt, bool idle) { }

	// RVA: 0x22E1234 Offset: 0x22DD234 VA: 0x22E1234
	private void Puff(bool big) { }

	// RVA: 0x22E0C84 Offset: 0x22DCC84 VA: 0x22E0C84
	private void Burst(int n) { }

	// RVA: 0x22E2BE8 Offset: 0x22DEBE8 VA: 0x22E2BE8
	private void DustAt(float axle, float strength) { }

	// RVA: 0x22E4850 Offset: 0x22E0850 VA: 0x22E4850
	private void Blow() { }

	// RVA: 0x22E1F34 Offset: 0x22DDF34 VA: 0x22E1F34
	private float Range(float a, float b) { }

	// RVA: 0x22E4B48 Offset: 0x22E0B48 VA: 0x22E4B48
	private static void .cctor() { }
}

