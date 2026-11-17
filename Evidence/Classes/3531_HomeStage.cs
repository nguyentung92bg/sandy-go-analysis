// Namespace: Dino.BusSand.App.UI
[DefaultExecutionOrder(50)]
public sealed class HomeStage : MonoBehaviour // TypeDefIndex: 3531
{
	// Fields
	public static bool Enabled; // 0x0
	public const int Layer = 29;
	private static readonly Vector3 Origin; // 0x4
	private const float Heading = -30;
	private const float HFov = 22;
	private const float BusLength = 640;
	private const float FootGap = 130;
	private const float HorizonUnderLine = 150;
	private const float Tall = 0.8;
	private const float Across = 5.35;
	private const float Shore = 7.5;
	private const float RunUp = 2.8;
	private const float WavePeriod = 6.5;
	private const float SunMinUp = 0.25;
	private const int TrackN = 1024;
	private const float TrackUnit = 0.25;
	private const float TrackFade = 40;
	private Camera _cam; // 0x20
	private HomeAtelier _atelier; // 0x28
	private Func<Nullable<Vector3>> _buttonTop; // 0x30
	private Transform _back; // 0x38
	private Material _seaside; // 0x40
	private Mesh _backMesh; // 0x48
	private Texture2D _tracks; // 0x50
	private Texture2D _noise; // 0x58
	private readonly float[] _track; // 0x60
	private readonly Color32[] _trackPx; // 0x68
	private float _trackAt; // 0x70
	private HomeBus _bus; // 0x78
	private HomePuffs _puffs; // 0x80
	private float _now; // 0x88
	private float _perLevel; // 0x8C
	private float _camX; // 0x90
	private float _roofY; // 0x94
	private float _len; // 0x98
	private float _pitch; // 0x9C
	private float _dist; // 0xA0
	private static float s_sea; // 0x10
	private bool _framed; // 0xA4
	private readonly Vector3[] _c8; // 0xA8
	private static HomeStage s_live; // 0x18
	private const float InFrom = -22;
	private const float Load = 0.78;
	private bool _enterWhenClear; // 0xB0
	private readonly float[] _frames; // 0xB8
	private int _frameN; // 0xC0

	// Properties
	private Vector3 Sun { get; }
	private static bool LoadingUp { get; }
	public string QaFrame { get; }
	public string QaBus { get; }
	public bool Arriving { get; }
	private Camera UiCam { get; }
	public Rect ScreenRect { get; }

	// Methods

	// RVA: 0x22EE3E8 Offset: 0x22EA3E8 VA: 0x22EE3E8
	private Vector3 get_Sun() { }

	// RVA: 0x22E9A20 Offset: 0x22E5A20 VA: 0x22E9A20
	public static HomeStage Build(HomeAtelier atelier, Camera cam, Func<Nullable<Vector3>> levelButtonTop) { }

	// RVA: 0x22EE628 Offset: 0x22EA628 VA: 0x22EE628
	private void Init(Shader shader) { }

	// RVA: 0x22EEEF0 Offset: 0x22EAEF0 VA: 0x22EEEF0
	private static Texture2D Noise4() { }

	// RVA: 0x22EF448 Offset: 0x22EB448 VA: 0x22EF448
	private static void SetLayer(Transform t, int layer) { }

	// RVA: 0x22EB058 Offset: 0x22E7058 VA: 0x22EB058
	public void Enter(float delay = 0.15) { }

	// RVA: 0x22EF734 Offset: 0x22EB734 VA: 0x22EF734
	private static bool get_LoadingUp() { }

	// RVA: 0x22EF820 Offset: 0x22EB820 VA: 0x22EF820
	public float ComeHome(Color main, Color shadow) { }

	// RVA: 0x22EF8A8 Offset: 0x22EB8A8 VA: 0x22EF8A8
	public void Offstage() { }

	// RVA: 0x22EF8D0 Offset: 0x22EB8D0 VA: 0x22EF8D0
	public void Settle() { }

	// RVA: 0x22EF8E8 Offset: 0x22EB8E8 VA: 0x22EF8E8
	public void Pouring(float left, Color main, Color shadow) { }

	// RVA: 0x22EF938 Offset: 0x22EB938 VA: 0x22EF938
	public void Buck(float strength) { }

	// RVA: 0x22EF950 Offset: 0x22EB950 VA: 0x22EF950
	public void CloseRoof() { }

	// RVA: 0x22EF968 Offset: 0x22EB968 VA: 0x22EF968
	public void Ready() { }

	// RVA: 0x22EF9A0 Offset: 0x22EB9A0 VA: 0x22EF9A0
	public void DriveOff() { }

	// RVA: 0x22EF9B8 Offset: 0x22EB9B8 VA: 0x22EF9B8
	public void ComeBack() { }

	// RVA: 0x22EFA38 Offset: 0x22EBA38 VA: 0x22EFA38
	public void Honk() { }

	// RVA: 0x22EFA70 Offset: 0x22EBA70 VA: 0x22EFA70
	public void Gust(float delay) { }

	// RVA: 0x22EFA88 Offset: 0x22EBA88 VA: 0x22EFA88
	public string get_QaFrame() { }

	// RVA: 0x22EFCF8 Offset: 0x22EBCF8 VA: 0x22EFCF8
	public string get_QaBus() { }

	// RVA: 0x22EFD10 Offset: 0x22EBD10 VA: 0x22EFD10
	public void QaFace(string pose, float seconds, Nullable<Vector2> look) { }

	// RVA: 0x22EFD2C Offset: 0x22EBD2C VA: 0x22EFD2C
	public bool get_Arriving() { }

	// RVA: 0x22EFD44 Offset: 0x22EBD44 VA: 0x22EFD44
	public float PlanRoof(float minRoof) { }

	// RVA: 0x22EFEA4 Offset: 0x22EBEA4 VA: 0x22EFEA4
	private Camera get_UiCam() { }

	// RVA: 0x22EFF74 Offset: 0x22EBF74 VA: 0x22EFF74
	public Vector2 TopIn(RectTransform space) { }

	// RVA: 0x22EFFAC Offset: 0x22EBFAC VA: 0x22EFFAC
	private Vector2 ToLocal(Vector3 world, RectTransform space) { }

	// RVA: 0x22F0074 Offset: 0x22EC074 VA: 0x22F0074
	public Rect get_ScreenRect() { }

	// RVA: 0x22F019C Offset: 0x22EC19C VA: 0x22F019C
	public bool Hits(Vector2 screen) { }

	// RVA: 0x22F0210 Offset: 0x22EC210 VA: 0x22F0210
	public float FootUnderTop(RectTransform space) { }

	// RVA: 0x22F02E8 Offset: 0x22EC2E8 VA: 0x22F02E8
	private void LateUpdate() { }

	// RVA: 0x22F0FF8 Offset: 0x22ECFF8 VA: 0x22F0FF8
	private void Watch() { }

	// RVA: 0x22F0810 Offset: 0x22EC810 VA: 0x22F0810
	private bool Frame() { }

	// RVA: 0x22F0D3C Offset: 0x22ECD3C VA: 0x22F0D3C
	private void Ruts(float dt) { }

	// RVA: 0x22F11E8 Offset: 0x22ED1E8 VA: 0x22F11E8
	private static int Ring(float x) { }

	// RVA: 0x22F125C Offset: 0x22ED25C VA: 0x22F125C
	private void OnDestroy() { }

	// RVA: 0x22F162C Offset: 0x22ED62C VA: 0x22F162C
	public void .ctor() { }

	// RVA: 0x22F1724 Offset: 0x22ED724 VA: 0x22F1724
	private static void .cctor() { }
}

