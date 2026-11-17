// Namespace: Dino.BusSand.App.UI
internal sealed class HomeToonFace // TypeDefIndex: 3534
{
	// Fields
	private const int N = 5;
	public static readonly HomeToonFace.Pose Calm; // 0x0
	public static readonly HomeToonFace.Pose Grin; // 0x14
	public static readonly HomeToonFace.Pose Joy; // 0x28
	public static readonly HomeToonFace.Pose Wow; // 0x3C
	public static readonly HomeToonFace.Pose Bold; // 0x50
	public static readonly HomeToonFace.Pose Squint; // 0x64
	public static readonly HomeToonFace.Pose Sleepy; // 0x78
	public static readonly HomeToonFace.Pose Yawn; // 0x8C
	public static readonly HomeToonFace.Pose Meep; // 0xA0
	public static readonly HomeToonFace.Pose Pout; // 0xB4
	public static readonly HomeToonFace.Pose Ooh; // 0xC8
	private readonly HomeToonRig _rig; // 0x10
	private readonly Random _rng; // 0x18
	private readonly float[] _cur; // 0x20
	private readonly float[] _vel; // 0x28
	private readonly float[] _to; // 0x30
	private float[] _mood; // 0x38
	private readonly float[][] _line; // 0x40
	private readonly float[] _lineFor; // 0x48
	private int _lineN; // 0x50
	private float _lineT; // 0x54
	private float _now; // 0x58
	private float _blinkAt; // 0x5C
	private float _blinkT; // 0x60
	private float _winkT; // 0x64
	private bool _winkLeft; // 0x68
	private bool _again; // 0x69
	private Vector2 _look; // 0x6C
	private Vector2 _lookV; // 0x74
	private Vector2 _lookTo; // 0x7C
	private Nullable<Vector3> _target; // 0x84
	private float _targetUntil; // 0x94
	private float _glanceAt; // 0x98
	public Func<int, Nullable<Vector3>> Spot; // 0xA0
	public Nullable<Vector3> Follow; // 0xA8
	public bool Lively; // 0xB8

	// Properties
	public bool Playing { get; }
	public string Qa { get; }

	// Methods

	// RVA: 0x22F1A18 Offset: 0x22EDA18 VA: 0x22F1A18
	private static float[] Pack(HomeToonFace.Pose p) { }

	// RVA: 0x22F1AC0 Offset: 0x22EDAC0 VA: 0x22F1AC0
	public void .ctor(HomeToonRig rig) { }

	// RVA: 0x22F1F7C Offset: 0x22EDF7C VA: 0x22F1F7C
	private float Range(float a, float b) { }

	// RVA: 0x22F1FC0 Offset: 0x22EDFC0 VA: 0x22F1FC0
	public void Mood(HomeToonFace.Pose p) { }

	// RVA: 0x22F2048 Offset: 0x22EE048 VA: 0x22F2048
	public void Play(ValueTuple<HomeToonFace.Pose, float>[] beats) { }

	// RVA: 0x22F21FC Offset: 0x22EE1FC VA: 0x22F21FC
	public void Clear() { }

	// RVA: 0x22F2204 Offset: 0x22EE204 VA: 0x22F2204
	public bool get_Playing() { }

	// RVA: 0x22E52DC Offset: 0x22E12DC VA: 0x22E52DC
	public void Blink(bool twice = False) { }

	// RVA: 0x22E51AC Offset: 0x22E11AC VA: 0x22E51AC
	public void Wink(bool left = False) { }

	// RVA: 0x22E500C Offset: 0x22E100C VA: 0x22E500C
	public void LookAt(Vector3 world, float seconds) { }

	// RVA: 0x22E5200 Offset: 0x22E1200 VA: 0x22E5200
	public void Glance(Vector2 dir, float seconds) { }

	// RVA: 0x22F2214 Offset: 0x22EE214 VA: 0x22F2214
	public void Step(float dt, float now) { }

	// RVA: 0x22F24D0 Offset: 0x22EE4D0 VA: 0x22F24D0
	private static void Spring(ref float x, ref float v, float to, float k, float d, float dt) { }

	// RVA: 0x22F2B28 Offset: 0x22EEB28 VA: 0x22F2B28
	private static bool Finite(float f) { }

	// RVA: 0x22F28A8 Offset: 0x22EE8A8 VA: 0x22F28A8
	private void Settle() { }

	// RVA: 0x22F251C Offset: 0x22EE51C VA: 0x22F251C
	private void Gaze(float dt) { }

	// RVA: 0x22F2B3C Offset: 0x22EEB3C VA: 0x22F2B3C
	private Vector2 Toward(Vector3 world) { }

	// RVA: 0x22F1CC8 Offset: 0x22EDCC8 VA: 0x22F1CC8
	private void Push(float dt) { }

	// RVA: 0x22F30AC Offset: 0x22EF0AC VA: 0x22F30AC
	public string get_Qa() { }

	// RVA: 0x22F33AC Offset: 0x22EF3AC VA: 0x22F33AC
	private static void .cctor() { }
}

