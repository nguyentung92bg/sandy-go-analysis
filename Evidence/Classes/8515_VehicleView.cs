// Namespace: Dino.BusSand.View
public sealed class VehicleView : MonoBehaviour // TypeDefIndex: 8515
{
	// Fields
	[CompilerGenerated]
	private int <Id>k__BackingField; // 0x20
	[CompilerGenerated]
	private BusKind <Kind>k__BackingField; // 0x24
	[CompilerGenerated]
	private byte <Color>k__BackingField; // 0x28
	[CompilerGenerated]
	private VehicleView.State <Mode>k__BackingField; // 0x2C
	[CompilerGenerated]
	private bool <Hidden>k__BackingField; // 0x30
	private Transform _pivot; // 0x38
	private Transform _body; // 0x40
	private MeshRenderer _closed; // 0x48
	private MeshRenderer _open; // 0x50
	private MeshRenderer _pile; // 0x58
	private Transform _pileTf; // 0x60
	private Transform _arrow; // 0x68
	private MeshRenderer _arrowFace; // 0x70
	private Transform _shadow; // 0x78
	private TextMeshPro _question; // 0x80
	private Transform _labelTf; // 0x88
	private TextMeshPro _pct; // 0x90
	private Transform _tick; // 0x98
	private int _pctShown; // 0xA0
	private float _tickT; // 0xA4
	private float _scaleYard; // 0xA8
	private float _scaleRoad; // 0xAC
	private float _scale; // 0xB0
	private float _modelHeight; // 0xB4
	private bool _authored; // 0xB8
	private float _unit; // 0xBC
	private ModelEntry _model; // 0xC0
	private Material _glassLive; // 0xC8
	private int _glassSlot; // 0xD0
	private MeshRenderer _shadowProxy; // 0xD8
	private bool _batched; // 0xE0
	private bool _pack; // 0xE1
	private MeshRenderer _pkBody; // 0xE8
	private MeshRenderer _pkSand; // 0xF0
	private Transform _pkSandTf; // 0xF8
	private Vector3 _pkSandPos; // 0x100
	private Vector3 _pkSandScale; // 0x10C
	private SpriteRenderer _pkArrow; // 0x118
	private MaterialPropertyBlock _pkMpb; // 0x120
	private float _pkCover; // 0x128
	private float _pkCoverFrom; // 0x12C
	private float _pkCoverT; // 0x130
	public const float CoverOpenSeconds = 0.6;
	private bool _pkRoofOff; // 0x134
	private float _pkFillSent; // 0x138
	private bool _arrowCan; // 0x13C
	private float _lid; // 0x140
	private float _lidV; // 0x144
	private float _lidTarget; // 0x148
	private float _closeDelay; // 0x14C
	private bool _lidShutPlayed; // 0x150
	private Vector4 _paintCol; // 0x154
	private Vector4 _sandCol; // 0x164
	private bool _lightPaintCached; // 0x174
	private float _glassMinY; // 0x178
	private float _glassMaxY; // 0x17C
	public static float RoadDrawScale; // 0x0
	private float _labelCell; // 0x180
	private float _sq; // 0x184
	private float _sqV; // 0x188
	private float _lean; // 0x18C
	private float _leanV; // 0x190
	private float _pitch; // 0x194
	private float _pitchV; // 0x198
	private Vector3 _kPrevPos; // 0x19C
	private Vector3 _kVel; // 0x1A8
	private float _kPrevYaw; // 0x1B4
	private float _kSpeed; // 0x1B8
	private float _aLong; // 0x1BC
	private float _aLat; // 0x1C0
	private bool _kInit; // 0x1C4
	private float _escV; // 0x1C8
	private float _escD; // 0x1CC
	private float _escVmax; // 0x1D0
	private float _escAcc; // 0x1D4
	private float[] _curv; // 0x1D8
	private float _hop; // 0x1E0
	private float _pop; // 0x1E4
	private Vector3 _home; // 0x1E8
	private Quaternion _homeRot; // 0x1F4
	private Vector3 _bumpDir; // 0x204
	private float _bumpDist; // 0x210
	private float _bumpT; // 0x214
	private float _bumpDur; // 0x218
	private bool _bumpHit; // 0x21C
	private Action _onImpact; // 0x220
	private Vector3 _wiggleDir; // 0x228
	private float _wiggleT; // 0x234
	private float _wiggleAmp; // 0x238
	private List<Vector3> _route; // 0x240
	private float[] _cum; // 0x248
	private float _routeLen; // 0x250
	private float _routeT; // 0x254
	private float _routeDur; // 0x258
	private Action _onArrive; // 0x260
	private float _lastYaw; // 0x268
	private float _dustT; // 0x26C
	private float _drift; // 0x270
	private float _fill; // 0x274
	private float _fillShown; // 0x278
	private float _gulp; // 0x27C
	private float _pileStart; // 0x280
	private float _pileFullY; // 0x284
	private float _pileScaleMul; // 0x288
	private Vector3 _pileOffset; // 0x28C
	private bool _complete; // 0x298
	private float _introDelay; // 0x29C
	private float _introT; // 0x2A0
	private static Mesh _arrowMesh; // 0x8
	private static Mesh _arrowOutlineMesh; // 0x10
	private static Mesh _quad; // 0x18
	private static readonly Dictionary<string, Mesh> ShadowMeshes; // 0x20
	private static readonly Dictionary<string, Vector2> GlassBands; // 0x28
	public static float NearFull; // 0x30
	public static float SwirlTurns; // 0x34
	private MaterialPropertyBlock _pkSandMpb; // 0x2A8
	private float _pkLitSent; // 0x2B0
	private float _pkPourSent; // 0x2B4
	private float _pkSwirlSent; // 0x2B8
	private float _pour; // 0x2BC
	private float _swirl; // 0x2C0
	private float _heapLit; // 0x2C4
	private bool _heapShader; // 0x2C8
	private Vector4 _heapExt; // 0x2CC
	private bool _heapExtOwn; // 0x2DC
	private static Material s_heapMat; // 0x38
	private static Mesh s_heapMesh; // 0x40
	private static readonly Dictionary<string, Mesh> PackedMeshes; // 0x48
	private static readonly string[] DetailSlots; // 0x50
	private static Material _detail; // 0x58
	private static readonly Dictionary<string, Vector4> Meta; // 0x60
	[TupleElementNames(new[] { "hinge", "pile", "max", "closed", "openZ" })]
	private static readonly Dictionary<string, ValueTuple<Vector2, Vector2, float, float, float>> Cargo; // 0x68
	private static readonly Quaternion UprightDecal; // 0x70
	private static Mesh s_tickFill; // 0x80
	private static Mesh s_tickEdge; // 0x88
	private const float TickSize = 0.48;
	[CompilerGenerated]
	private bool <ArrowSuppressed>k__BackingField; // 0x2DD
	public Nullable<Color> MainOverride; // 0x2E0
	public Nullable<Color> ShadowOverride; // 0x2F4
	private Transform _pkOutline; // 0x308
	[CompilerGenerated]
	private Transform <ShiftBadge>k__BackingField; // 0x310
	public static readonly Color FireMain; // 0x90
	public static readonly Color FireShadow; // 0xA0
	public const float ArrowBlockedAlpha = 0.7058824;
	private float _pkArrowAlpha; // 0x318
	private Vector3 _emergeFrom; // 0x31C
	private float _emergeT; // 0x328
	private float _emergeWait; // 0x32C
	private float _emergeScale; // 0x330
	private bool _emergeDeep; // 0x334
	public static float DraftRoll; // 0xB0
	public static float DraftPitch; // 0xB4
	private float _flashT; // 0x338
	private float _flashAmt; // 0x33C
	private Color _flashTint; // 0x340
	private const float FlashSeconds = 0.26;
	private static readonly Color FlashTint; // 0xB8
	private static readonly Color HeapLitTint; // 0xC8
	private float _freedT; // 0x350
	private float _freedDelay; // 0x354
	private Vector3 _arrowBase; // 0x358
	private const float FreedSeconds = 0.34;
	private float _hold; // 0x364
	private float _carryYaw; // 0x368
	private bool _carried; // 0x36C
	private float _hopV; // 0x370
	public float EscapeCap; // 0x374
	public bool Towed; // 0x378
	public bool TowReleasing; // 0x379
	private Vector3 _towLast; // 0x37C
	private bool _towInit; // 0x388
	private Vector3 _shadowFit; // 0x38C

	// Properties
	public int Id { get; set; }
	public BusKind Kind { get; set; }
	public byte Color { get; set; }
	public VehicleView.State Mode { get; set; }
	public bool Hidden { get; set; }
	private float CellYard { get; }
	private float CellRoad { get; }
	public Vector3 Velocity { get; }
	private float ArrowScale { get; }
	private Bounds ModelBounds { get; }
	private static Material DetailMaterial { get; }
	private bool HasCargo { get; }
	private bool LightPaint { get; }
	public float CoverAmount { get; }
	public static Mesh BlobQuad { get; }
	public bool BatchBlobVisible { get; }
	public Matrix4x4 BatchBlobMatrix { get; }
	public bool ArrowSuppressed { get; set; }
	public Transform ShiftBadge { get; set; }
	public Transform BodyTransform { get; }
	public Transform PivotTransform { get; }
	public bool Escapable { get; }
	public Vector3 PileWorldTop { get; }
	public Vector3 RoofWorld { get; }
	public float ModelHeightWorld { get; }
	public float LengthWorld { get; }
	public float WidthWorld { get; }
	public float ModelScale { get; }
	public Vector3 IntakeLocal { get; }
	public float EscapeSpeed { get; }
	public bool EscapeLate { get; }
	public float CellWorld { get; }
	public bool BatchVisible { get; }
	public Matrix4x4 BatchMatrix { get; }
	public Vector4 BatchPaint { get; }
	public Vector4 BatchSand { get; }
	public float BatchSlosh { get; }
	public bool BatchOpen { get; }
	public Matrix4x4 BatchLidLocal { get; }
	public bool BatchPileVisible { get; }
	public Matrix4x4 BatchPileLocal { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x23F3A5C Offset: 0x23EFA5C VA: 0x23F3A5C
	public int get_Id() { }

	[CompilerGenerated]
	// RVA: 0x23F3A64 Offset: 0x23EFA64 VA: 0x23F3A64
	private void set_Id(int value) { }

	[CompilerGenerated]
	// RVA: 0x23F3A6C Offset: 0x23EFA6C VA: 0x23F3A6C
	public BusKind get_Kind() { }

	[CompilerGenerated]
	// RVA: 0x23F3A74 Offset: 0x23EFA74 VA: 0x23F3A74
	private void set_Kind(BusKind value) { }

	[CompilerGenerated]
	// RVA: 0x23F3A7C Offset: 0x23EFA7C VA: 0x23F3A7C
	public byte get_Color() { }

	[CompilerGenerated]
	// RVA: 0x23F3A84 Offset: 0x23EFA84 VA: 0x23F3A84
	private void set_Color(byte value) { }

	[CompilerGenerated]
	// RVA: 0x23F3A8C Offset: 0x23EFA8C VA: 0x23F3A8C
	public VehicleView.State get_Mode() { }

	[CompilerGenerated]
	// RVA: 0x23F3A94 Offset: 0x23EFA94 VA: 0x23F3A94
	private void set_Mode(VehicleView.State value) { }

	[CompilerGenerated]
	// RVA: 0x23F3A9C Offset: 0x23EFA9C VA: 0x23F3A9C
	public bool get_Hidden() { }

	[CompilerGenerated]
	// RVA: 0x23F3AA4 Offset: 0x23EFAA4 VA: 0x23F3AA4
	private void set_Hidden(bool value) { }

	// RVA: 0x23F3AAC Offset: 0x23EFAAC VA: 0x23F3AAC
	private float get_CellYard() { }

	// RVA: 0x23F3ABC Offset: 0x23EFABC VA: 0x23F3ABC
	private float get_CellRoad() { }

	// RVA: 0x23F3ACC Offset: 0x23EFACC VA: 0x23F3ACC
	public Vector3 get_Velocity() { }

	// RVA: 0x23F3B48 Offset: 0x23EFB48 VA: 0x23F3B48
	public static VehicleView Create(Transform parent, int id, BusKind kind, byte color, bool hidden, float yardCell, float roadCell) { }

	// RVA: 0x23F44A0 Offset: 0x23F04A0 VA: 0x23F44A0
	private static string MeshName(BusKind k) { }

	// RVA: 0x23F4524 Offset: 0x23F0524 VA: 0x23F4524
	private static string ModelName(BusKind k) { }

	// RVA: 0x23F45A8 Offset: 0x23F05A8 VA: 0x23F45A8
	private static string PileMeshName(BusKind k) { }

	// RVA: 0x23F462C Offset: 0x23F062C VA: 0x23F462C
	private static int ColorSlot(BusKind k, bool open) { }

	// RVA: 0x23F3CC4 Offset: 0x23EFCC4 VA: 0x23F3CC4
	private void Build(int id, BusKind kind, byte color, bool hidden, float yardCell, float roadCell) { }

	// RVA: 0x23F4644 Offset: 0x23F0644 VA: 0x23F4644
	private void BuildPack() { }

	// RVA: 0x23F770C Offset: 0x23F370C VA: 0x23F770C
	private void ApplyPackColors() { }

	// RVA: 0x23F79E8 Offset: 0x23F39E8 VA: 0x23F79E8
	private void UpdatePackSand() { }

	// RVA: 0x23F723C Offset: 0x23F323C VA: 0x23F723C
	private void UseHeapShader() { }

	// RVA: 0x23F80B0 Offset: 0x23F40B0 VA: 0x23F80B0
	private void TickPour(float dt) { }

	// RVA: 0x23F82E8 Offset: 0x23F42E8 VA: 0x23F82E8
	private float get_ArrowScale() { }

	// RVA: 0x23F8314 Offset: 0x23F4314 VA: 0x23F8314
	private Bounds get_ModelBounds() { }

	// RVA: 0x23F4D88 Offset: 0x23F0D88 VA: 0x23F4D88
	private void BuildAuthored() { }

	// RVA: 0x23F9B20 Offset: 0x23F5B20 VA: 0x23F9B20
	private static Material SlotMaterial(string slot) { }

	// RVA: 0x23F9D94 Offset: 0x23F5D94 VA: 0x23F9D94
	private static string SlotName(ModelEntry m, int i) { }

	// RVA: 0x23F9E48 Offset: 0x23F5E48 VA: 0x23F9E48
	private void ApplyAuthoredMaterials() { }

	// RVA: 0x23FA278 Offset: 0x23F6278 VA: 0x23FA278
	private static Material get_DetailMaterial() { }

	// RVA: 0x23F86A0 Offset: 0x23F46A0 VA: 0x23F86A0
	private static Mesh PackedMesh(ModelEntry m) { }

	// RVA: 0x23F9014 Offset: 0x23F5014 VA: 0x23F9014
	private static Mesh ShadowMesh(ModelEntry m) { }

	// RVA: 0x23FA6A0 Offset: 0x23F66A0 VA: 0x23FA6A0
	private bool get_HasCargo() { }

	// RVA: 0x23F83F4 Offset: 0x23F43F4 VA: 0x23F83F4
	private static Vector2 GlassBand(ModelEntry m) { }

	// RVA: 0x23F92EC Offset: 0x23F52EC VA: 0x23F92EC
	private void BuildAuthoredArrow() { }

	// RVA: 0x23FA1DC Offset: 0x23F61DC VA: 0x23FA1DC
	private bool get_LightPaint() { }

	// RVA: 0x23FACEC Offset: 0x23F6CEC VA: 0x23FACEC
	private Material ArrowMaterial(bool can) { }

	// RVA: 0x23F5A08 Offset: 0x23F1A08 VA: 0x23F5A08
	private MeshRenderer MakeModel(string meshName, bool open, int lod) { }

	// RVA: 0x23F6F64 Offset: 0x23F2F64 VA: 0x23F6F64
	public void ApplyBodyColor() { }

	// RVA: 0x23FAF08 Offset: 0x23F6F08 VA: 0x23FAF08
	private void ApplyHiddenMark() { }

	// RVA: 0x23FB3DC Offset: 0x23F73DC VA: 0x23FB3DC
	public void SetColor(byte color, bool hidden) { }

	// RVA: 0x23FB444 Offset: 0x23F7444 VA: 0x23FB444
	public float get_CoverAmount() { }

	// RVA: 0x23FB44C Offset: 0x23F744C VA: 0x23FB44C
	private void TickArrowAlpha(float dt) { }

	// RVA: 0x23FB618 Offset: 0x23F7618 VA: 0x23FB618
	private void TickCover(float dt) { }

	// RVA: 0x23F5E6C Offset: 0x23F1E6C VA: 0x23F5E6C
	private void BuildArrow() { }

	// RVA: 0x23FA840 Offset: 0x23F6840 VA: 0x23FA840
	private static Mesh MakeArrowMesh(float k) { }

	// RVA: 0x23F647C Offset: 0x23F247C VA: 0x23F647C
	private void BuildShadow(Bounds b) { }

	// RVA: 0x23FB74C Offset: 0x23F774C VA: 0x23FB74C
	public static Mesh get_BlobQuad() { }

	// RVA: 0x23F2DDC Offset: 0x23EEDDC VA: 0x23F2DDC
	public bool get_BatchBlobVisible() { }

	// RVA: 0x23F2E78 Offset: 0x23EEE78 VA: 0x23F2E78
	public Matrix4x4 get_BatchBlobMatrix() { }

	// RVA: 0x23FB7A4 Offset: 0x23F77A4 VA: 0x23FB7A4
	private void EnsureLabel() { }

	// RVA: 0x23FBC08 Offset: 0x23F7C08 VA: 0x23FBC08
	private Transform TickMark() { }

	// RVA: 0x23FC580 Offset: 0x23F8580 VA: 0x23FC580
	private static void AddTickPart(Transform root, string name, Mesh mesh, Material mat, float back) { }

	// RVA: 0x23FC010 Offset: 0x23F8010 VA: 0x23FC010
	private static Mesh TickMesh(float w) { }

	// RVA: 0x23FB9C4 Offset: 0x23F79C4 VA: 0x23FB9C4
	private TextMeshPro LabelText(string name, float size, Color face, Color32 outline, float outlineWidth) { }

	// RVA: 0x23FBEB4 Offset: 0x23F7EB4 VA: 0x23FBEB4
	private void SetPercent(float k) { }

	// RVA: 0x23F6B40 Offset: 0x23F2B40 VA: 0x23F6B40
	private void SetMode(VehicleView.State m) { }

	[CompilerGenerated]
	// RVA: 0x23FC7D4 Offset: 0x23F87D4 VA: 0x23FC7D4
	public bool get_ArrowSuppressed() { }

	[CompilerGenerated]
	// RVA: 0x23FC7DC Offset: 0x23F87DC VA: 0x23FC7DC
	private void set_ArrowSuppressed(bool value) { }

	// RVA: 0x23FC7E4 Offset: 0x23F87E4 VA: 0x23FC7E4
	public void SuppressArrow(bool off) { }

	// RVA: 0x23FC898 Offset: 0x23F8898 VA: 0x23FC898
	public void SetOutline(bool on) { }

	[CompilerGenerated]
	// RVA: 0x23FC968 Offset: 0x23F8968 VA: 0x23FC968
	public Transform get_ShiftBadge() { }

	[CompilerGenerated]
	// RVA: 0x23FC970 Offset: 0x23F8970 VA: 0x23FC970
	private void set_ShiftBadge(Transform value) { }

	// RVA: 0x23FC980 Offset: 0x23F8980 VA: 0x23FC980
	public bool UseShiftMark() { }

	// RVA: 0x23FCBD0 Offset: 0x23F8BD0 VA: 0x23FCBD0
	public bool UseFireTruckModel() { }

	// RVA: 0x23FD35C Offset: 0x23F935C VA: 0x23FD35C
	public Transform get_BodyTransform() { }

	// RVA: 0x23FD364 Offset: 0x23F9364 VA: 0x23FD364
	public Transform get_PivotTransform() { }

	// RVA: 0x23FD36C Offset: 0x23F936C VA: 0x23FD36C
	public void TurnParkedTo(int angle, float duration) { }

	// RVA: 0x23FD4E0 Offset: 0x23F94E0 VA: 0x23FD4E0
	public void PlaceParked(Vector3 world, int angle) { }

	// RVA: 0x23FD5F8 Offset: 0x23F95F8 VA: 0x23FD5F8
	public void SetEscapable(bool can) { }

	// RVA: 0x23FD64C Offset: 0x23F964C VA: 0x23FD64C
	public void IntroDrop(float delay) { }

	// RVA: 0x23FD6B4 Offset: 0x23F96B4 VA: 0x23FD6B4
	public void EmergeFrom(Vector3 world, float delay = 0, bool fromDepth = False) { }

	// RVA: 0x23FD8A0 Offset: 0x23F98A0 VA: 0x23FD8A0
	public void Kick(float squash, float pop = 0) { }

	// RVA: 0x23FD8CC Offset: 0x23F98CC VA: 0x23FD8CC
	public void PlayBump(Vector3 dirWorld, float dist, Action onImpact) { }

	// RVA: 0x23FDA78 Offset: 0x23F9A78 VA: 0x23FDA78
	public void Wiggle(Vector3 dirWorld, float amp) { }

	// RVA: 0x23FDB94 Offset: 0x23F9B94 VA: 0x23FDB94
	public void Draft(Vector3 awayWorld, float strength) { }

	// RVA: 0x23FDD58 Offset: 0x23F9D58 VA: 0x23FDD58
	public void Flash(float amount) { }

	// RVA: 0x23FDDCC Offset: 0x23F9DCC VA: 0x23FDDCC
	public void Flash(float amount, Color tint) { }

	// RVA: 0x23FDE88 Offset: 0x23F9E88 VA: 0x23FDE88
	private void TickFlash(float dt) { }

	// RVA: 0x23FE160 Offset: 0x23FA160 VA: 0x23FE160
	public bool get_Escapable() { }

	// RVA: 0x23FE168 Offset: 0x23FA168 VA: 0x23FE168
	public void Freed(float delay) { }

	// RVA: 0x23FE22C Offset: 0x23FA22C VA: 0x23FE22C
	private void TickFreed(float dt) { }

	// RVA: 0x23FE410 Offset: 0x23FA410 VA: 0x23FE410
	public void Nudge() { }

	// RVA: 0x23FE454 Offset: 0x23FA454 VA: 0x23FE454
	public void ExitLaunch() { }

	// RVA: 0x23FE4A0 Offset: 0x23FA4A0 VA: 0x23FE4A0
	public void StartEscape(List<Vector3> route, float duration, Action onArrive, float hold = 0, bool carried = False) { }

	// RVA: 0x23FEB40 Offset: 0x23FAB40 VA: 0x23FEB40
	public void EnterRoad() { }

	// RVA: 0x23FEBD4 Offset: 0x23FABD4 VA: 0x23FEBD4
	public void SetWaiting() { }

	// RVA: 0x23FEBDC Offset: 0x23FABDC VA: 0x23FEBDC
	public void SetLidOpen(bool open) { }

	// RVA: 0x23FEC68 Offset: 0x23FAC68 VA: 0x23FEC68
	public void Hide() { }

	// RVA: 0x23FEC70 Offset: 0x23FAC70 VA: 0x23FEC70
	public void SetRoadPose(Vector3 pos, float yaw, float yawRate) { }

	// RVA: 0x23FED2C Offset: 0x23FAD2C VA: 0x23FED2C
	public void SetFill(float progress, bool complete) { }

	// RVA: 0x23FEDC0 Offset: 0x23FADC0 VA: 0x23FEDC0
	public void Gulp(float amount) { }

	// RVA: 0x23FEDDC Offset: 0x23FADDC VA: 0x23FEDDC
	public Vector3 get_PileWorldTop() { }

	// RVA: 0x23FEF10 Offset: 0x23FAF10 VA: 0x23FEF10
	public Vector3 get_RoofWorld() { }

	// RVA: 0x23FEFB0 Offset: 0x23FAFB0 VA: 0x23FEFB0
	public float get_ModelHeightWorld() { }

	// RVA: 0x23FEFBC Offset: 0x23FAFBC VA: 0x23FEFBC
	public float get_LengthWorld() { }

	// RVA: 0x23FF030 Offset: 0x23FB030 VA: 0x23FF030
	public float get_WidthWorld() { }

	// RVA: 0x23FF0A4 Offset: 0x23FB0A4 VA: 0x23FF0A4
	public float get_ModelScale() { }

	// RVA: 0x23FF0AC Offset: 0x23FB0AC VA: 0x23FF0AC
	public Vector3 get_IntakeLocal() { }

	// RVA: 0x23FF20C Offset: 0x23FB20C VA: 0x23FF20C
	public void Tick(float dt) { }

	// RVA: 0x2400098 Offset: 0x23FC098 VA: 0x2400098
	private void RestoreShadow() { }

	// RVA: 0x2400C24 Offset: 0x23FCC24 VA: 0x2400C24
	private void BodyDynamics(float dt) { }

	// RVA: 0x24001E8 Offset: 0x23FC1E8 VA: 0x24001E8
	private void TickBump(float dt) { }

	// RVA: 0x2400FA4 Offset: 0x23FCFA4 VA: 0x2400FA4
	public float get_EscapeSpeed() { }

	// RVA: 0x2400FBC Offset: 0x23FCFBC VA: 0x2400FBC
	public bool get_EscapeLate() { }

	// RVA: 0x2400FF8 Offset: 0x23FCFF8 VA: 0x2400FF8
	public float get_CellWorld() { }

	// RVA: 0x2401008 Offset: 0x23FD008 VA: 0x2401008
	private void TickTowed(float dt) { }

	// RVA: 0x240039C Offset: 0x23FC39C VA: 0x240039C
	private void TickEscape(float dt) { }

	// RVA: 0x24012EC Offset: 0x23FD2EC VA: 0x24012EC
	private void Sample(float d, out Vector3 pos, out Vector3 dir) { }

	// RVA: 0x23F27DC Offset: 0x23EE7DC VA: 0x23F27DC
	public bool get_BatchVisible() { }

	// RVA: 0x23F2810 Offset: 0x23EE810 VA: 0x23F2810
	public Matrix4x4 get_BatchMatrix() { }

	// RVA: 0x23F2850 Offset: 0x23EE850 VA: 0x23F2850
	public Vector4 get_BatchPaint() { }

	// RVA: 0x23F293C Offset: 0x23EE93C VA: 0x23F293C
	public Vector4 get_BatchSand() { }

	// RVA: 0x23F2960 Offset: 0x23EE960 VA: 0x23F2960
	public float get_BatchSlosh() { }

	// RVA: 0x23F29B0 Offset: 0x23EE9B0 VA: 0x23F29B0
	public bool get_BatchOpen() { }

	// RVA: 0x23F2A84 Offset: 0x23EEA84 VA: 0x23F2A84
	public Matrix4x4 get_BatchLidLocal() { }

	// RVA: 0x23F2C0C Offset: 0x23EEC0C VA: 0x23F2C0C
	public bool get_BatchPileVisible() { }

	// RVA: 0x23F2C24 Offset: 0x23EEC24 VA: 0x23F2C24
	public Matrix4x4 get_BatchPileLocal() { }

	// RVA: 0x24016D0 Offset: 0x23FD6D0 VA: 0x24016D0
	private void OnDestroy() { }

	// RVA: 0x2401854 Offset: 0x23FD854 VA: 0x2401854
	public void .ctor() { }

	// RVA: 0x2401944 Offset: 0x23FD944 VA: 0x2401944
	private static void .cctor() { }
}

