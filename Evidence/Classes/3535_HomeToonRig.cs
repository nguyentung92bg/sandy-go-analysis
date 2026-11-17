// Namespace: Dino.BusSand.App.UI
internal sealed class HomeToonRig // TypeDefIndex: 3535
{
	// Fields
	public const float Size = 1.45;
	public const float HalfWidth = 1.05;
	public const float HalfLength = 2.06;
	public const float MidZ = -0.164;
	public const float Roof = 2.62;
	public const float WheelRadius = 0.5;
	public static readonly Vector3 BodyAt; // 0x0
	public static readonly Vector3 HeadL; // 0xC
	public static readonly Vector3 HeadR; // 0x18
	public static readonly Vector3 Pipe; // 0x24
	public const float FrontAxle = 0.61;
	public const float RearAxle = -1.2;
	public const float Track = 0.86;
	private static readonly Vector3 HeapAt; // 0x30
	private static readonly Vector3 HeapSize; // 0x3C
	private const float CapFrom = 1.1;
	private const float CapDrop = 0.5;
	private const float CapPitch = 6;
	private const float CapRoll = -3;
	private static readonly Vector3 EyesAt; // 0x48
	private const float LidDown = 0.46;
	private const float LidUp = 0.3;
	private const float SlantIn = 0.09;
	private const float SlantOut = 0.04;
	private const float IrisX = 0.09;
	private const float IrisUp = 0.05;
	private const float IrisDown = 0.07;
	private const float IrisBack = 0.06;
	private const float DepthBias = 0.12;
	private static readonly string[] SideNames; // 0x58
	public readonly Transform Root; // 0x10
	public readonly Transform Turn; // 0x18
	public readonly Transform Body; // 0x20
	public readonly Transform Eyes; // 0x28
	public readonly Material BodyMat; // 0x30
	public readonly Material EyeMat; // 0x38
	public readonly Material HeapMat; // 0x40
	private readonly Transform _lidMid; // 0x48
	private readonly Transform[,] _lids; // 0x50
	private readonly Transform[] _iris; // 0x58
	private readonly Vector3 _lidMidAt; // 0x60
	private readonly Vector3[,] _lidAt; // 0x70
	private readonly Vector3[] _irisAt; // 0x78
	private readonly Vector3[] _irisScale; // 0x80
	private readonly float[] _wheelHop; // 0x88
	private readonly float[] _wheelHopV; // 0x90
	private readonly Transform _heap; // 0x98
	private readonly Mesh _heapMesh; // 0xA0
	private readonly Transform _cap; // 0xA8
	private readonly Vector3 _capAt; // 0xB0
	private float _capT; // 0xBC
	private float _capSq; // 0xC0
	private float _capSqV; // 0xC4
	private bool _capOff; // 0xC8
	private float _sq; // 0xCC
	private float _sqV; // 0xD0
	private float _hop; // 0xD4
	private float _hopV; // 0xD8
	private float _pop; // 0xDC
	private float _popV; // 0xE0
	private float _yaw; // 0xE4
	private float _yawV; // 0xE8
	private Quaternion _lean; // 0xEC
	private Vector3 _offset; // 0xFC
	private float _breath; // 0x108
	private float _stretch; // 0x10C
	public float YawTo; // 0x110
	private static readonly int LightId; // 0x60
	private static readonly int BiasId; // 0x64
	[CompilerGenerated]
	private bool <CapLanded>k__BackingField; // 0x114

	// Properties
	public bool Valid { get; }
	public Vector3 LightDir { get; }
	public float Lift { get; }
	public float Yaw { get; }
	public bool HasCap { get; }
	public bool CapAway { get; }
	public bool CapFalling { get; }
	public bool CapLanded { get; set; }

	// Methods

	// RVA: 0x22F34D8 Offset: 0x22EF4D8 VA: 0x22F34D8
	public void .ctor(Transform root, HomeToonBusArt art) { }

	// RVA: 0x22F505C Offset: 0x22F105C VA: 0x22F505C
	public bool get_Valid() { }

	// RVA: 0x22F487C Offset: 0x22F087C VA: 0x22F487C
	private static void Quiet(Renderer r) { }

	// RVA: 0x22F5144 Offset: 0x22F1144 VA: 0x22F5144
	public void Light(Vector3 sun, Material beach) { }

	// RVA: 0x22F4780 Offset: 0x22F0780 VA: 0x22F4780
	private void MatchEyes() { }

	// RVA: 0x22F5300 Offset: 0x22F1300 VA: 0x22F5300
	public Vector3 get_LightDir() { }

	// RVA: 0x22F54F4 Offset: 0x22F14F4 VA: 0x22F54F4
	public void Dispose() { }

	// RVA: 0x22F56BC Offset: 0x22F16BC VA: 0x22F56BC
	public Vector3 World(Vector3 model) { }

	// RVA: 0x22F57B4 Offset: 0x22F17B4 VA: 0x22F57B4
	public Vector3 Ground(Vector3 model) { }

	// RVA: 0x22F57E0 Offset: 0x22F17E0 VA: 0x22F57E0
	public float get_Lift() { }

	// RVA: 0x22F58AC Offset: 0x22F18AC VA: 0x22F58AC
	public float get_Yaw() { }

	// RVA: 0x22F58B4 Offset: 0x22F18B4 VA: 0x22F58B4
	public void Lean(float pitch, float roll, Vector3 offset, float stretch = 0, float breath = 0) { }

	// RVA: 0x22F5924 Offset: 0x22F1924 VA: 0x22F5924
	public void Hop(float height) { }

	// RVA: 0x22F5958 Offset: 0x22F1958 VA: 0x22F5958
	public void Kick(float squash) { }

	// RVA: 0x22F21E4 Offset: 0x22EE1E4 VA: 0x22F21E4
	public void Pop(float amount) { }

	// RVA: 0x22F5970 Offset: 0x22F1970 VA: 0x22F5970
	public void WheelHop(int i, float speed) { }

	// RVA: 0x22F59D0 Offset: 0x22F19D0 VA: 0x22F59D0
	public void Roll(float ground) { }

	// RVA: 0x22F2C54 Offset: 0x22EEC54 VA: 0x22F2C54
	public void Face(float closeL, float closeR, float slant, Vector2 look, float iris) { }

	// RVA: 0x22F59D4 Offset: 0x22F19D4 VA: 0x22F59D4
	private static float Drop(float close) { }

	// RVA: 0x22F5A0C Offset: 0x22F1A0C VA: 0x22F5A0C
	public void Step(float dt) { }

	// RVA: 0x22F4D98 Offset: 0x22F0D98 VA: 0x22F4D98
	private void Apply() { }

	// RVA: 0x22F5EA0 Offset: 0x22F1EA0 VA: 0x22F5EA0
	public void SetHeap(float fill, Color main, Color shadow) { }

	// RVA: 0x22F6084 Offset: 0x22F2084 VA: 0x22F6084
	public Vector3 HeapTop(float fill) { }

	// RVA: 0x22F6144 Offset: 0x22F2144 VA: 0x22F6144
	public bool get_HasCap() { }

	// RVA: 0x22F61A4 Offset: 0x22F21A4 VA: 0x22F61A4
	public void CapOff() { }

	// RVA: 0x22F6248 Offset: 0x22F2248 VA: 0x22F6248
	public void CapOn() { }

	// RVA: 0x22F62F4 Offset: 0x22F22F4 VA: 0x22F62F4
	public void CapSnap() { }

	// RVA: 0x22F63A4 Offset: 0x22F23A4 VA: 0x22F63A4
	public bool get_CapAway() { }

	// RVA: 0x22F6430 Offset: 0x22F2430 VA: 0x22F6430
	public bool get_CapFalling() { }

	[CompilerGenerated]
	// RVA: 0x22F6440 Offset: 0x22F2440 VA: 0x22F6440
	public bool get_CapLanded() { }

	[CompilerGenerated]
	// RVA: 0x22F6448 Offset: 0x22F2448 VA: 0x22F6448
	private void set_CapLanded(bool value) { }

	// RVA: 0x22F6450 Offset: 0x22F2450 VA: 0x22F6450
	private static float CapDown(float u) { }

	// RVA: 0x22F5BDC Offset: 0x22F1BDC VA: 0x22F5BDC
	private void StepCap(float dt) { }

	// RVA: 0x22F5CC8 Offset: 0x22F1CC8 VA: 0x22F5CC8
	private void ApplyCap() { }

	// RVA: 0x22F48CC Offset: 0x22F08CC VA: 0x22F48CC
	private static Mesh Dome() { }

	// RVA: 0x22F6474 Offset: 0x22F2474 VA: 0x22F6474
	private static void .cctor() { }
}

