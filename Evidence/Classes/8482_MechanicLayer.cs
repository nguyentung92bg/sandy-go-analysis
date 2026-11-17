// Namespace: Dino.BusSand.View
public sealed class MechanicLayer : MonoBehaviour // TypeDefIndex: 8482
{
	// Fields
	private StageEngine _e; // 0x20
	private StageLayout _L; // 0x28
	private Func<int, VehicleView> _vehicle; // 0x30
	private Fx _fx; // 0x38
	private MechFx _mfx; // 0x40
	private GrainParticles _grains; // 0x48
	private float _cell; // 0x50
	private static readonly Color32 SparkGold; // 0x0
	private static readonly Color32 SparkCream; // 0x4
	private static readonly Color UnlockGold; // 0x8
	private readonly Dictionary<int, byte> _duneColor; // 0x58
	private readonly Dictionary<int, MechanicLayer.Deco> _deco; // 0x60
	private ChainRig _chain; // 0x68
	private readonly Dictionary<int, Transform> _objects; // 0x70
	[TupleElementNames(new[] { "heap", "r", "label", "shown" })]
	private readonly Dictionary<int, ValueTuple<Transform, MeshRenderer, TextMeshPro, float>> _dunes; // 0x78
	[TupleElementNames(new[] { "color", "r" })]
	private readonly List<ValueTuple<byte, MeshRenderer>> _gates; // 0x80
	private readonly Dictionary<int, MechanicLayer.LaneVis> _lanes; // 0x88
	[TupleElementNames(new[] { "plate", "label" })]
	private readonly Dictionary<int, ValueTuple<Transform, TextMeshPro>> _lifts; // 0x90
	private readonly Dictionary<int, Transform> _liftSigns; // 0x98
	private readonly Dictionary<int, MechanicLayer.Basement> _basements; // 0xA0
	private MaterialPropertyBlock _doorMpb; // 0xA8
	private float _time; // 0xB0
	private MaterialPropertyBlock _duneMpb; // 0xB8
	private readonly Dictionary<int, int> _duneLabel; // 0xC0
	private readonly Dictionary<int, Vector3> _duneBase; // 0xC8
	public float ViewSpeed; // 0xD0
	private readonly List<Mesh> _hoseMeshes; // 0xD8
	public static Func<string, string> Localize; // 0x18
	private const float HighwayClear = 2.9;
	public const float LaneMoveUpDelay = 0.3;
	private const float EdgeBadge = 1.4;
	private const double EdgeOut = 0.6;
	private const int BadgeQueue = 3600;
	private static Mesh _badgeQuad; // 0x20
	private static Material _badgeMat; // 0x28
	public const float DoorOpenSeconds = 0.22;
	public const float DoorCloseSeconds = 0.3;
	public const float LiftRiseSeconds = 0.5;
	private const float StationHalfL = 2.028;
	private const float StationHalfW = 2.122;
	private const float StationCentreX = -0.555;
	private const float StationDock = 2.55;
	private static readonly Vector3 StationSign; // 0x30
	private static readonly float[] StationScales; // 0x40
	private const float HoseUp = 0.15;
	private readonly List<BusObb> _stations; // 0xE0
	private MaterialPropertyBlock _pipeMpb; // 0xE8
	public int StationsPlaced; // 0xF0
	public int StationsMissing; // 0xF4
	private static readonly double[] StationShifts; // 0x48
	private const float LockScale = 1.15;
	private const float LockLift = 0.37;
	private const float KeyScale = 0.85;
	private const float KeyLift = 0.76;
	public static Action<SimEvent> Probe; // 0x50
	private readonly Dictionary<int, int> _liftFloorFrame; // 0xF8

	// Properties
	private MechFx LiveFx { get; }
	private float FxU { get; }
	private Fx FxLive { get; }
	private GrainParticles GrainsLive { get; }
	private static bool ArtHighway { get; }

	// Methods

	// RVA: 0x23BEC2C Offset: 0x23BAC2C VA: 0x23BEC2C
	private MechFx get_LiveFx() { }

	// RVA: 0x23BEC9C Offset: 0x23BAC9C VA: 0x23BEC9C
	private float get_FxU() { }

	// RVA: 0x23BED30 Offset: 0x23BAD30 VA: 0x23BED30
	private Fx get_FxLive() { }

	// RVA: 0x23BEDA0 Offset: 0x23BADA0 VA: 0x23BEDA0
	private GrainParticles get_GrainsLive() { }

	// RVA: 0x23BEE10 Offset: 0x23BAE10 VA: 0x23BEE10
	private void Awake() { }

	// RVA: 0x23BEE70 Offset: 0x23BAE70 VA: 0x23BEE70
	private void OnDestroy() { }

	// RVA: 0x23BF200 Offset: 0x23BB200 VA: 0x23BF200
	public static MechanicLayer Create(Transform parent, StageEngine e, StageLayout L, Func<int, VehicleView> vehicle, Fx fx, MechFx mfx, GrainParticles grains) { }

	// RVA: 0x23BF368 Offset: 0x23BB368 VA: 0x23BF368
	private void Build() { }

	// RVA: 0x23C2364 Offset: 0x23BE364 VA: 0x23C2364
	private Vector3 W(double x, double z) { }

	// RVA: 0x23C237C Offset: 0x23BE37C VA: 0x23C237C
	private Vector3 Dir(double cx, double cz, double hx, double hz) { }

	// RVA: 0x23C24AC Offset: 0x23BE4AC VA: 0x23C24AC
	private static Quaternion AlongX(Vector3 dir) { }

	// RVA: 0x23C2534 Offset: 0x23BE534 VA: 0x23C2534
	private Transform Prop(Mesh mesh, Vector3 pos, Quaternion rot, Vector3 scaleCells, Transform parent, string name) { }

	// RVA: 0x23C26B4 Offset: 0x23BE6B4 VA: 0x23C26B4
	private TextMeshPro Label(Transform parent, Vector3 world, float size, Color color) { }

	// RVA: 0x23C2A68 Offset: 0x23BEA68 VA: 0x23C2A68
	private void PopIn(Transform t, float delay, float dur = 0.38) { }

	// RVA: 0x23BF794 Offset: 0x23BB794 VA: 0x23BF794
	private void BuildObject(int index, LotObjectDef od) { }

	// RVA: 0x23C2C18 Offset: 0x23BEC18 VA: 0x23C2C18
	private void BuildDune(int index, LotObjectDef od, Vector3 c, Vector3 dir, Transform root, float delay) { }

	// RVA: 0x23C028C Offset: 0x23BC28C VA: 0x23C028C
	private void BuildLane(Lane lane) { }

	// RVA: 0x23C3738 Offset: 0x23BF738 VA: 0x23C3738
	private static Material LaneMaterial() { }

	// RVA: 0x23C4754 Offset: 0x23C0754 VA: 0x23C4754
	private static List<Vector3> TailCut(List<Vector3> path, float keep) { }

	// RVA: 0x23C35DC Offset: 0x23BF5DC VA: 0x23C35DC
	private static bool get_ArtHighway() { }

	// RVA: 0x23C39A4 Offset: 0x23BF9A4 VA: 0x23C39A4
	private void RebuildLane(MechanicLayer.LaneVis lv) { }

	// RVA: 0x23C4AAC Offset: 0x23C0AAC VA: 0x23C4AAC
	private void FillLaneFloor(Mesh m, List<Vector3> path, float width) { }

	// RVA: 0x23C56D4 Offset: 0x23C16D4 VA: 0x23C56D4
	private static void AlongPath(List<Vector3> path, float back, out Vector3 pos, out Vector3 fwd) { }

	// RVA: 0x23C43A4 Offset: 0x23C03A4 VA: 0x23C43A4
	private void PlaceLaneGhosts(Lane lane, MechanicLayer.LaneVis lv, bool animate, float delay = 0) { }

	// RVA: 0x23C5938 Offset: 0x23C1938 VA: 0x23C5938
	private string LiftText(Lift lift) { }

	// RVA: 0x23C0BB0 Offset: 0x23BCBB0 VA: 0x23C0BB0
	private void BuildLift(Lift lift) { }

	// RVA: 0x23C5CF4 Offset: 0x23C1CF4 VA: 0x23C5CF4
	private void BuildPlatform(Lift lift) { }

	// RVA: 0x23C6768 Offset: 0x23C2768 VA: 0x23C6768
	private Vector3 EdgePoint(int liftId, double cx, double cz, double ax, double az, double bx, double bz) { }

	// RVA: 0x23C6F04 Offset: 0x23C2F04 VA: 0x23C6F04
	private TextMeshPro EdgeCounter(int liftId, Transform root, Vector3 world) { }

	// RVA: 0x23C7494 Offset: 0x23C3494 VA: 0x23C7494
	private static Mesh BadgeQuad() { }

	// RVA: 0x23C7764 Offset: 0x23C3764 VA: 0x23C7764
	private static Material BadgeMaterial() { }

	// RVA: 0x23C62BC Offset: 0x23C22BC VA: 0x23C62BC
	private bool ArtBasement(int liftId, Vector3 c, Vector3 along, float lenCells, float widCells, Transform root, out Transform plate) { }

	// RVA: 0x23C7CDC Offset: 0x23C3CDC VA: 0x23C7CDC
	private void SetDoor(MechanicLayer.Basement b, float open) { }

	// RVA: 0x23C7E08 Offset: 0x23C3E08 VA: 0x23C7E08
	private void CycleDoor(int liftId) { }

	// RVA: 0x23C13B0 Offset: 0x23BD3B0 VA: 0x23C13B0
	private void Decorate(Truck t) { }

	// RVA: 0x23C7FAC Offset: 0x23C3FAC VA: 0x23C7FAC
	private bool PlaceGasStation(Truck t, VehicleView v, MechanicLayer.Deco d) { }

	// RVA: 0x23C94C8 Offset: 0x23C54C8 VA: 0x23C94C8
	private void BuildStation(Truck t, VehicleView v, MechanicLayer.Deco d, GameObject prefab, double px, double pz, float sc, bool flip, bool solid) { }

	// RVA: 0x23CA284 Offset: 0x23C6284 VA: 0x23CA284
	private void RetractHose(MechanicLayer.Deco d) { }

	// RVA: 0x23CA05C Offset: 0x23C605C VA: 0x23CA05C
	private static double ModelRear(BusKind k) { }

	// RVA: 0x23CA4B8 Offset: 0x23C64B8 VA: 0x23CA4B8
	private void ShrinkAway(Transform p) { }

	// RVA: 0x23CA618 Offset: 0x23C6618 VA: 0x23CA618
	private void FreeStation(MechanicLayer.Deco d) { }

	// RVA: 0x23CA084 Offset: 0x23C6084 VA: 0x23CA084
	private bool InsideLot(in BusObb o) { }

	// RVA: 0x23CA164 Offset: 0x23C6164 VA: 0x23CA164
	private void SetPipe(MeshRenderer r, float fuel) { }

	// RVA: 0x23CA6F4 Offset: 0x23C66F4 VA: 0x23CA6F4
	private void Gulp(MeshRenderer r, float dur = 0.5) { }

	// RVA: 0x23C8D90 Offset: 0x23C4D90 VA: 0x23C8D90
	private static GameObject ArtProp(GameObject[] tiers, int symbol) { }

	// RVA: 0x23C8DD4 Offset: 0x23C4DD4 VA: 0x23C8DD4
	private Transform Art(GameObject prefab, Vector3 pos, Quaternion rot, float worldScale, Transform parent, string name) { }

	// RVA: 0x23CA83C Offset: 0x23C683C VA: 0x23CA83C
	private static Quaternion KeyFacing(bool art, float swing) { }

	// RVA: 0x23C906C Offset: 0x23C506C VA: 0x23C906C
	private Transform KeyProp(int symbol, VehicleView v, Transform parent) { }

	// RVA: 0x23CAA6C Offset: 0x23C6A6C VA: 0x23CAA6C
	public void Handle(SimEvent e) { }

	// RVA: 0x23CAC08 Offset: 0x23C6C08 VA: 0x23CAC08
	private void OnFuelTick(int id, int left) { }

	// RVA: 0x23CAFE8 Offset: 0x23C6FE8 VA: 0x23CAFE8
	private void OnFuelDone(int id) { }

	// RVA: 0x23CB3C8 Offset: 0x23C73C8 VA: 0x23CB3C8
	private void OnKey(int keyTruck, int lockedTruck) { }

	// RVA: 0x23CE564 Offset: 0x23CA564 VA: 0x23CE564
	private void UnlockVisual(int id) { }

	// RVA: 0x23CE99C Offset: 0x23CA99C VA: 0x23CE99C
	private void UnlockBurst(Vector3 at) { }

	// RVA: 0x23CED40 Offset: 0x23CAD40 VA: 0x23CED40
	private void KeySparks(Vector3 a, Vector3 b) { }

	// RVA: 0x23CBC40 Offset: 0x23C7C40 VA: 0x23CBC40
	private void OnShift(int id, int newAngle) { }

	// RVA: 0x23CBF2C Offset: 0x23C7F2C VA: 0x23CBF2C
	private void OnLiftRaised(int liftId, int truckId) { }

	// RVA: 0x23CF23C Offset: 0x23CB23C VA: 0x23CF23C
	private void LiftWave(Lift lift) { }

	// RVA: 0x23CF0E8 Offset: 0x23CB0E8 VA: 0x23CF0E8
	private Lift FindLift(int id) { }

	// RVA: 0x23CC690 Offset: 0x23C8690 VA: 0x23CC690
	private void OnLiftSpent(int liftId) { }

	// RVA: 0x23CC9E8 Offset: 0x23C89E8 VA: 0x23CC9E8
	private void OnLaneAdvanced(int laneId, int truckId) { }

	// RVA: 0x23CCDC0 Offset: 0x23C8DC0 VA: 0x23CCDC0
	private void OnLaneSpent(int laneId) { }

	// RVA: 0x23CF3C0 Offset: 0x23CB3C0 VA: 0x23CF3C0
	private void AnimateBoom(MechanicLayer.LaneVis lv) { }

	// RVA: 0x23CD3DC Offset: 0x23C93DC VA: 0x23CD3DC
	private void OnDuneMelted(int index) { }

	// RVA: 0x23CF580 Offset: 0x23CB580 VA: 0x23CF580
	private void DuneBurst(Vector3 p, int index) { }

	// RVA: 0x23CD81C Offset: 0x23C981C VA: 0x23CD81C
	private void OnFireTruckSaved(int id) { }

	// RVA: 0x23CDC80 Offset: 0x23C9C80 VA: 0x23CDC80
	private void OnWaiting(int id, int reason) { }

	// RVA: 0x23CE410 Offset: 0x23CA410 VA: 0x23CE410
	private void OnBlockedByObject(int id) { }

	// RVA: 0x23CF8D4 Offset: 0x23CB8D4 VA: 0x23CF8D4
	private void Flash(Renderer r, Color glow) { }

	// RVA: 0x23CDF88 Offset: 0x23C9F88 VA: 0x23CDF88
	private void OnTruckLeft(int id) { }

	// RVA: 0x23CE308 Offset: 0x23CA308 VA: 0x23CE308
	private void OnChainReleased(int chain) { }

	// RVA: 0x23CFA30 Offset: 0x23CBA30 VA: 0x23CFA30
	private void LateUpdate() { }

	// RVA: 0x23D09B0 Offset: 0x23CC9B0 VA: 0x23D09B0
	public bool TryGetAnchor(string mechanic, int step, out Vector3 world, out int truckId) { }

	// RVA: 0x23D1E50 Offset: 0x23CDE50 VA: 0x23D1E50
	public void CollectHighlights(string mechanic, List<Transform> into) { }

	// RVA: 0x23D320C Offset: 0x23CF20C VA: 0x23D320C
	public void OnSpawned(int id) { }

	// RVA: 0x23D32A8 Offset: 0x23CF2A8 VA: 0x23D32A8
	public void .ctor() { }

	// RVA: 0x23D36DC Offset: 0x23CF6DC VA: 0x23D36DC
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x23D1DDC Offset: 0x23CDDDC VA: 0x23D1DDC
	private bool <TryGetAnchor>g__Better|136_0(Truck t, ref MechanicLayer.<>c__DisplayClass136_0 ) { }

	[CompilerGenerated]
	// RVA: 0x23D30D4 Offset: 0x23CF0D4 VA: 0x23D30D4
	private void <CollectHighlights>g__Car|137_0(Truck t, ref MechanicLayer.<>c__DisplayClass137_0 ) { }
}

