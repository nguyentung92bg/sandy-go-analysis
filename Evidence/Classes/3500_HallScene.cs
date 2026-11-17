// Namespace: Dino.BusSand.App.UI
public class HallScene : MonoBehaviour // TypeDefIndex: 3500
{
	// Fields
	public static readonly Vector3 Origin; // 0x0
	private static readonly Vector3 CamPosition; // 0xC
	private static readonly Vector3 CamEuler; // 0x18
	private static readonly Color CamBackground; // 0x24
	private const float DesignFov = 60;
	private const float CamNear = 0.3;
	private const float CamFar = 1000;
	private const int CamCullingMask = -1073741825;
	private const float CanvasPlaneDistance = 100;
	private const float BgDesignWidth = 1944;
	private const float BgDesignHeight = 2640;
	private const float MinOneToOneCoverScale = 0.65;
	private const string CupChangePath = "scene/scaleroot/cuproot/fbx_scene_t1_cup";
	private const string CupChangePathLegacy = "scene/scaleroot/fbx_scene_t1_cup";
	private const string ChangeClip12 = "ani_hallEnv_change_1-2";
	private const string ChangeClip21 = "ani_hallEnv_change_2-1";
	private const string ChangeClip12Gp3 = "ani_hallEnv_change_1-2_gp3";
	private const string ChangeClip21Gp3 = "ani_hallEnv_change_2-1_gp3";
	private const string RotateClip = "ani_hallEnv_rotate_01";
	private const string RotateClipGp3 = "ani_hallEnv_rotate_01_gp3";
	private const float LabelSwitchDelay = 0.3;
	private const float EffChangeOnTime = 1.45;
	[CompilerGenerated]
	private Camera <Cam>k__BackingField; // 0x20
	[CompilerGenerated]
	private float <SequenceEndTime>k__BackingField; // 0x28
	private GameObject _env; // 0x30
	private Animation _changeAnim; // 0x38
	private Animation _rotateAnim; // 0x40
	private Transform _effChange; // 0x48
	private readonly List<TMP_Text> _titles; // 0x50
	private readonly List<TMP_Text> _numbers; // 0x58
	private readonly List<CanvasScaler> _bgScalers; // 0x60
	private readonly List<Light> _mutedLights; // 0x68
	private Coroutine _seq; // 0x70
	private int _lastW; // 0x78
	private int _lastH; // 0x7C
	private bool _renderSaved; // 0x80
	private AmbientMode _savedAmbientMode; // 0x84
	private Color _savedSky; // 0x88
	private Color _savedEquator; // 0x98
	private Color _savedGround; // 0xA8
	private float _savedAmbientIntensity; // 0xB8
	private bool _savedFog; // 0xBC
	private static readonly string[] CupCars; // 0x38
	private static readonly byte[] CupColors; // 0x40

	// Properties
	public Camera Cam { get; set; }
	public float SequenceEndTime { get; set; }
	public bool IsChanging { get; }
	public GameObject Environment { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x22D0C48 Offset: 0x22CCC48 VA: 0x22D0C48
	public Camera get_Cam() { }

	[CompilerGenerated]
	// RVA: 0x22D0C50 Offset: 0x22CCC50 VA: 0x22D0C50
	private void set_Cam(Camera value) { }

	[CompilerGenerated]
	// RVA: 0x22D0C58 Offset: 0x22CCC58 VA: 0x22D0C58
	public float get_SequenceEndTime() { }

	[CompilerGenerated]
	// RVA: 0x22D0C60 Offset: 0x22CCC60 VA: 0x22D0C60
	private void set_SequenceEndTime(float value) { }

	// RVA: 0x22D0C68 Offset: 0x22CCC68 VA: 0x22D0C68
	public bool get_IsChanging() { }

	// RVA: 0x22D0C78 Offset: 0x22CCC78 VA: 0x22D0C78
	public GameObject get_Environment() { }

	// RVA: 0x22D0C80 Offset: 0x22CCC80 VA: 0x22D0C80
	public static HallScene Create(Transform parent) { }

	// RVA: 0x22D0E24 Offset: 0x22CCE24 VA: 0x22D0E24
	private void ApplyCameraPreset() { }

	// RVA: 0x22D0FD8 Offset: 0x22CCFD8 VA: 0x22D0FD8
	public void Show(int level, int previousLevel) { }

	// RVA: 0x22D2B64 Offset: 0x22CEB64 VA: 0x22D2B64
	public void Hide() { }

	// RVA: 0x22D2FE0 Offset: 0x22CEFE0 VA: 0x22D2FE0
	private void OnDestroy() { }

	// RVA: 0x22D2FF8 Offset: 0x22CEFF8 VA: 0x22D2FF8
	private void Update() { }

	// RVA: 0x22D3098 Offset: 0x22CF098 VA: 0x22D3098
	private static void ReplaceCupProps(Transform root) { }

	// RVA: 0x22D1250 Offset: 0x22CD250 VA: 0x22D1250
	private void LoadEnvironment() { }

	// RVA: 0x22D2E48 Offset: 0x22CEE48 VA: 0x22D2E48
	private void UnloadEnvironment() { }

	// RVA: 0x22D3AE8 Offset: 0x22CFAE8 VA: 0x22D3AE8
	private static void FixZeroScaleRects(Transform root) { }

	// RVA: 0x22D1C6C Offset: 0x22CDC6C VA: 0x22D1C6C
	private void ApplyCanvases() { }

	// RVA: 0x22D1F04 Offset: 0x22CDF04 VA: 0x22D1F04
	private void AdaptBackground() { }

	// RVA: 0x22D1934 Offset: 0x22CD934 VA: 0x22D1934
	private void ApplyRenderSettings() { }

	// RVA: 0x22D2DD8 Offset: 0x22CEDD8 VA: 0x22D2DD8
	private void RestoreRenderSettings() { }

	// RVA: 0x22D1A28 Offset: 0x22CDA28 VA: 0x22D1A28
	private void MuteGameplayLights() { }

	// RVA: 0x22D2C20 Offset: 0x22CEC20 VA: 0x22D2C20
	private void RestoreLights() { }

	// RVA: 0x22D2248 Offset: 0x22CE248 VA: 0x22D2248
	public void SetLabel(int level) { }

	// RVA: 0x22D2650 Offset: 0x22CE650 VA: 0x22D2650
	public void SetCupIdle(int level) { }

	// RVA: 0x22D28E4 Offset: 0x22CE8E4 VA: 0x22D28E4
	private string ChangeName(int level) { }

	// RVA: 0x22D26D0 Offset: 0x22CE6D0 VA: 0x22D26D0
	private string RotateName() { }

	[IteratorStateMachine(typeof(HallScene.<CupChange>d__74))]
	// RVA: 0x22D2AE4 Offset: 0x22CEAE4 VA: 0x22D2AE4
	private IEnumerator CupChange(int previousLevel, int level) { }

	// RVA: 0x22D1224 Offset: 0x22CD224 VA: 0x22D1224
	private void StopSequence() { }

	// RVA: 0x22D2A10 Offset: 0x22CEA10 VA: 0x22D2A10
	private static float ClipLength(Animation anim, string clip) { }

	// RVA: 0x22D3CD0 Offset: 0x22CFCD0 VA: 0x22D3CD0
	private static void PlayFromStart(Animation anim, string clip) { }

	// RVA: 0x22D27B4 Offset: 0x22CE7B4 VA: 0x22D27B4
	private static bool SampleAt(Animation anim, string clip, float time) { }

	// RVA: 0x22D3DC8 Offset: 0x22CFDC8 VA: 0x22D3DC8
	public void .ctor() { }

	// RVA: 0x22D3F1C Offset: 0x22CFF1C VA: 0x22D3F1C
	private static void .cctor() { }
}

