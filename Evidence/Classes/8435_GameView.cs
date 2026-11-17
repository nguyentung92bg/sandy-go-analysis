// Namespace: Dino.BusSand.View
public sealed class GameView : MonoBehaviour // TypeDefIndex: 8435
{
	// Fields
	[CompilerGenerated]
	private StageEngine <Engine>k__BackingField; // 0x20
	[CompilerGenerated]
	private StageOptions <StageOptions>k__BackingField; // 0x28
	[CompilerGenerated]
	private StageLayout <Layout>k__BackingField; // 0x30
	[CompilerGenerated]
	private Camera <Cam>k__BackingField; // 0x38
	public bool Paused; // 0x40
	public bool InputEnabled; // 0x41
	[CompilerGenerated]
	private float <GameSpeed>k__BackingField; // 0x44
	[CompilerGenerated]
	private Action<bool> Ended; // 0x48
	[CompilerGenerated]
	private Action RoadFullTapped; // 0x50
	[CompilerGenerated]
	private Action<byte> ColorCleared; // 0x58
	[CompilerGenerated]
	private Action<int> BusCompleted; // 0x60
	[CompilerGenerated]
	private Action<bool> FeverChanged; // 0x68
	public const float FeverSeconds = 6;
	public const float FeverSpeed = 1.3;
	public const float GarageEmergeDelay = 0.25;
	private float _feverT; // 0x70
	private SuctionBeams _beams; // 0x78
	private SkidMarks _skids; // 0x80
	public Func<int, bool> PickHandler; // 0x88
	public Func<int, bool> RoadPickHandler; // 0x90
	private Transform _root; // 0x98
	private WorldView _world; // 0xA0
	private SandBoardView _board; // 0xA8
	private GrainParticles _grains; // 0xB0
	private Fx _fx; // 0xB8
	private MechFx _mfx; // 0xC0
	private MechanicLayer _mech; // 0xC8
	private Light _light; // 0xD0
	private Volume _volume; // 0xD8
	private readonly Dictionary<int, VehicleView> _vehicles; // 0xE0
	private readonly List<PickUpClaw> _claws; // 0xE8
	private readonly Dictionary<int, GarageView> _garages; // 0xF0
	private readonly Dictionary<int, List<Vector3>> _routes; // 0xF8
	private readonly Dictionary<int, float> _simRouteLen; // 0x100
	private float _escapeSpeed; // 0x108
	private float _introT; // 0x10C
	private float _introDuration; // 0x110
	private bool _ended; // 0x114
	private float _arrowRefresh; // 0x118
	private float _shake; // 0x11C
	private Vector3 _camBase; // 0x120
	private float _kick; // 0x12C
	private float _kickV; // 0x130
	private float _shakeSeed; // 0x134
	private readonly Dictionary<int, float> _lastGulp; // 0x138
	[TupleElementNames(new[] { "pos", "yaw", "t" })]
	private readonly Dictionary<int, ValueTuple<Vector3, float, float>> _exitSteer; // 0x140
	private const float ExitSteerSeconds = 0.35;
	private float _endTimer; // 0x148
	private bool _endCleared; // 0x14C
	private bool _outro; // 0x14D
	private float _outroT; // 0x150
	public const float OutroSpeed = 2;
	public const float OutroMinSeconds = 0.9;
	public const float OutroMaxSeconds = 7;
	public static float TopReserve; // 0x0
	public static float BottomReserve; // 0x4
	public static int QaEndSuctionPct; // 0x8
	public static int QaEndSuctionDepth; // 0xC
	public static bool EndSuctionCueOn; // 0x10
	[CompilerGenerated]
	private Action EndSuctionStarted; // 0x158
	private EndSuctionCue _endCue; // 0x160
	private bool _endSuctionSeen; // 0x168
	private int _bandRows; // 0x16C
	public float TutorialSpeed; // 0x170
	public static float EscapeScreensPerSecond; // 0x14
	private readonly List<VehicleView> _escaping; // 0x178
	private readonly HashSet<long> _drafted; // 0x180
	private readonly List<VehicleView> _parked; // 0x188
	private Vector3 _padMin; // 0x190
	private Vector3 _padMax; // 0x19C
	[CompilerGenerated]
	private static Action<Vector2> TapMissed; // 0x18
	[CompilerGenerated]
	private Action<int> Tapped; // 0x1A8
	public float IdleHintAfter; // 0x1B0
	private float _idle; // 0x1B4
	private float _hintT; // 0x1B8
	private int _hintId; // 0x1BC
	[CompilerGenerated]
	private Action<int> HintShown; // 0x1C0
	[CompilerGenerated]
	private Action<int, List<SimEvent>> TapResolved; // 0x1C8
	public static float JamFeltFrom; // 0x20
	public static float JamReliefFrom; // 0x24
	public static bool JamPressureOn; // 0x28
	public static float JamPressureOverride; // 0x2C
	private float _jam; // 0x1D0
	private float _jamPeak; // 0x1D4
	private float _jamBeat; // 0x1D8
	public static float ApproachFrom; // 0x30
	public static float ApproachZoom; // 0x34
	private float _approach; // 0x1DC
	public static bool FreedPop; // 0x38
	private Vector3 _lastDepart; // 0x1E0
	public static bool UseBeams; // 0x39
	public static float StreamGlint; // 0x3C
	public static int CompletePuff; // 0x40
	private Action<int> _onGrainLanded; // 0x1F0
	private int _completeChain; // 0x1F8
	private float _completeTime; // 0x1FC
	[TupleElementNames(new[] { "id", "at" })]
	private readonly Dictionary<byte, ValueTuple<int, float>> _lastFeeder; // 0x200
	public static int ColourClearPuff; // 0x44
	private PaintingLayer _painting; // 0x208
	private int _initialGrains; // 0x210
	private int _paintSteps; // 0x214
	private readonly Dictionary<byte, Vector2> _lastBite; // 0x218
	private const int ShuffleRounds = 4;
	private const float ShuffleStep = 0.24;
	private const float ShuffleWave = 0.32;
	private float _boosterUntil; // 0x220
	public const float WandSeconds = 0.9;
	private const float ExtraSlotSeconds = 1;
	private const float PickUpSettle = 0.3;
	private static readonly Color JamTint; // 0x48
	private static readonly Color ReliefTint; // 0x58
	private LevelData _levelData; // 0x228
	private Coroutine _finale; // 0x230
	public Func<LevelData> NextPicture; // 0x238
	private float _finaleZoom; // 0x240
	private float _finaleLift; // 0x244
	private int _finaleGen; // 0x248
	private const float RocketRise = 0.55;
	private static readonly Color32 SparkWhite; // 0x68
	private static readonly Color32 SparkGold; // 0x6C
	private static readonly Color32 TrailWarm; // 0x70
	private static readonly Color32[] Festive; // 0x78
	private float _skyDepth; // 0x24C
	public static readonly Color NightTint; // 0x80
	private float _skyFlash; // 0x250
	private Color _skyFlashColor; // 0x254
	private bool _spotOn; // 0x264
	private float _hitStopSet; // 0x268
	private float _hitStopPrev; // 0x26C
	private float _kickReq; // 0x270
	public static float OutroHurry; // 0x90
	private bool _hurry; // 0x274

	// Properties
	public StageEngine Engine { get; set; }
	public StageOptions StageOptions { get; set; }
	public StageLayout Layout { get; set; }
	public Camera Cam { get; set; }
	public bool IntroPlaying { get; }
	public float GameSpeed { get; set; }
	public bool FeverActive { get; }
	public MechanicLayer Mechanics { get; }
	public PaintingLayer Painting { get; }
	public bool BoosterBusy { get; }
	public bool FinalePlaying { get; }
	public Transform BoardTransform { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x239A1C0 Offset: 0x23961C0 VA: 0x239A1C0
	public StageEngine get_Engine() { }

	[CompilerGenerated]
	// RVA: 0x239A1C8 Offset: 0x23961C8 VA: 0x239A1C8
	private void set_Engine(StageEngine value) { }

	[CompilerGenerated]
	// RVA: 0x239A1D0 Offset: 0x23961D0 VA: 0x239A1D0
	public StageOptions get_StageOptions() { }

	[CompilerGenerated]
	// RVA: 0x239A1D8 Offset: 0x23961D8 VA: 0x239A1D8
	private void set_StageOptions(StageOptions value) { }

	[CompilerGenerated]
	// RVA: 0x239A1E0 Offset: 0x23961E0 VA: 0x239A1E0
	public StageLayout get_Layout() { }

	[CompilerGenerated]
	// RVA: 0x239A1E8 Offset: 0x23961E8 VA: 0x239A1E8
	private void set_Layout(StageLayout value) { }

	[CompilerGenerated]
	// RVA: 0x239A1F0 Offset: 0x23961F0 VA: 0x239A1F0
	public Camera get_Cam() { }

	[CompilerGenerated]
	// RVA: 0x239A1F8 Offset: 0x23961F8 VA: 0x239A1F8
	private void set_Cam(Camera value) { }

	// RVA: 0x239A200 Offset: 0x2396200 VA: 0x239A200
	public bool get_IntroPlaying() { }

	[CompilerGenerated]
	// RVA: 0x239A214 Offset: 0x2396214 VA: 0x239A214
	public float get_GameSpeed() { }

	[CompilerGenerated]
	// RVA: 0x239A21C Offset: 0x239621C VA: 0x239A21C
	private void set_GameSpeed(float value) { }

	[CompilerGenerated]
	// RVA: 0x239A224 Offset: 0x2396224 VA: 0x239A224
	public void add_Ended(Action<bool> value) { }

	[CompilerGenerated]
	// RVA: 0x239A2D4 Offset: 0x23962D4 VA: 0x239A2D4
	public void remove_Ended(Action<bool> value) { }

	[CompilerGenerated]
	// RVA: 0x239A384 Offset: 0x2396384 VA: 0x239A384
	public void add_RoadFullTapped(Action value) { }

	[CompilerGenerated]
	// RVA: 0x239A420 Offset: 0x2396420 VA: 0x239A420
	public void remove_RoadFullTapped(Action value) { }

	[CompilerGenerated]
	// RVA: 0x239A4BC Offset: 0x23964BC VA: 0x239A4BC
	public void add_ColorCleared(Action<byte> value) { }

	[CompilerGenerated]
	// RVA: 0x239A56C Offset: 0x239656C VA: 0x239A56C
	public void remove_ColorCleared(Action<byte> value) { }

	[CompilerGenerated]
	// RVA: 0x239A61C Offset: 0x239661C VA: 0x239A61C
	public void add_BusCompleted(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x239A6CC Offset: 0x23966CC VA: 0x239A6CC
	public void remove_BusCompleted(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x239A77C Offset: 0x239677C VA: 0x239A77C
	public void add_FeverChanged(Action<bool> value) { }

	[CompilerGenerated]
	// RVA: 0x239A82C Offset: 0x239682C VA: 0x239A82C
	public void remove_FeverChanged(Action<bool> value) { }

	// RVA: 0x239A8DC Offset: 0x23968DC VA: 0x239A8DC
	public bool get_FeverActive() { }

	// RVA: 0x239A8EC Offset: 0x23968EC VA: 0x239A8EC
	public MechanicLayer get_Mechanics() { }

	// RVA: 0x239A8F4 Offset: 0x23968F4 VA: 0x239A8F4
	public static GameView Create(Transform parent) { }

	// RVA: 0x239A9C0 Offset: 0x23969C0 VA: 0x239A9C0
	private void BuildStatic() { }

	// RVA: 0x239ACA0 Offset: 0x2396CA0 VA: 0x239ACA0
	public void ApplyEnvironment() { }

	[CompilerGenerated]
	// RVA: 0x239AF94 Offset: 0x2396F94 VA: 0x239AF94
	public void add_EndSuctionStarted(Action value) { }

	[CompilerGenerated]
	// RVA: 0x239B030 Offset: 0x2397030 VA: 0x239B030
	public void remove_EndSuctionStarted(Action value) { }

	// RVA: 0x239B0CC Offset: 0x23970CC VA: 0x239B0CC
	private void CheckEndSuction() { }

	// RVA: 0x239B194 Offset: 0x2397194 VA: 0x239B194
	public void Load(LevelData level, StageOptions options) { }

	// RVA: 0x239C7A8 Offset: 0x23987A8 VA: 0x239C7A8
	public void Clear() { }

	// RVA: 0x239D0C8 Offset: 0x23990C8 VA: 0x239D0C8
	private void SpawnVehicle(int id) { }

	// RVA: 0x239CDE4 Offset: 0x2398DE4 VA: 0x239CDE4
	public static int PackMinGapGrains(StageLayout L) { }

	// RVA: 0x239D2B4 Offset: 0x23992B4 VA: 0x239D2B4
	private void BuildPad() { }

	// RVA: 0x239DCD0 Offset: 0x2399CD0 VA: 0x239DCD0
	private void PlanEscapeRoutes() { }

	// RVA: 0x239EEAC Offset: 0x239AEAC VA: 0x239EEAC
	private int EscapeTicks(int id) { }

	// RVA: 0x239EFAC Offset: 0x239AFAC VA: 0x239EFAC
	private void SpaceEscapes() { }

	// RVA: 0x239F6C0 Offset: 0x239B6C0 VA: 0x239F6C0
	private void Drafts() { }

	// RVA: 0x239FE64 Offset: 0x239BE64 VA: 0x239FE64
	private void LaunchShove(VehicleView a) { }

	// RVA: 0x239FDC8 Offset: 0x239BDC8 VA: 0x239FDC8
	private float DraftProximity(VehicleView a, VehicleView b, float lateral) { }

	// RVA: 0x239FB7C Offset: 0x239BB7C VA: 0x239FB7C
	private void CollectParked() { }

	// RVA: 0x239ED68 Offset: 0x239AD68 VA: 0x239ED68
	private static float RouteLength(List<Vector3> r) { }

	// RVA: 0x239E5A4 Offset: 0x239A5A4 VA: 0x239E5A4
	private List<Vector3> BuildEscape(Truck t, bool trainRun = True) { }

	// RVA: 0x23A01FC Offset: 0x239C1FC VA: 0x23A01FC
	private static List<Vector3> RoundCorners(List<Vector3> p, float radius, int seg) { }

	// RVA: 0x23A09A8 Offset: 0x239C9A8 VA: 0x23A09A8
	private void HandleInput() { }

	[CompilerGenerated]
	// RVA: 0x23A0C3C Offset: 0x239CC3C VA: 0x23A0C3C
	public static void add_TapMissed(Action<Vector2> value) { }

	[CompilerGenerated]
	// RVA: 0x23A0D30 Offset: 0x239CD30 VA: 0x23A0D30
	public static void remove_TapMissed(Action<Vector2> value) { }

	// RVA: 0x23A0B98 Offset: 0x239CB98 VA: 0x23A0B98
	public int Tap(Vector2 screen) { }

	// RVA: 0x23A1634 Offset: 0x239D634 VA: 0x23A1634
	public int PickVehicle(Vector2 screen) { }

	[CompilerGenerated]
	// RVA: 0x23A1680 Offset: 0x239D680 VA: 0x23A1680
	public void add_Tapped(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x23A1730 Offset: 0x239D730 VA: 0x23A1730
	public void remove_Tapped(Action<int> value) { }

	// RVA: 0x23A17E0 Offset: 0x239D7E0 VA: 0x23A17E0
	private void TickIdleHint(float dt) { }

	[CompilerGenerated]
	// RVA: 0x23A19F8 Offset: 0x239D9F8 VA: 0x23A19F8
	public void add_HintShown(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x23A1AA8 Offset: 0x239DAA8 VA: 0x23A1AA8
	public void remove_HintShown(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x23A1B58 Offset: 0x239DB58 VA: 0x23A1B58
	public void add_TapResolved(Action<int, List<SimEvent>> value) { }

	[CompilerGenerated]
	// RVA: 0x23A1C08 Offset: 0x239DC08 VA: 0x23A1C08
	public void remove_TapResolved(Action<int, List<SimEvent>> value) { }

	// RVA: 0x23A151C Offset: 0x239D51C VA: 0x23A151C
	public void TapVehicle(int id) { }

	// RVA: 0x23A2940 Offset: 0x239E940 VA: 0x23A2940
	private bool GroundPoint(Vector2 screen, float y, out Vector3 p) { }

	// RVA: 0x23A1138 Offset: 0x239D138 VA: 0x23A1138
	private int PickYard(Vector2 screen) { }

	// RVA: 0x23A0E24 Offset: 0x239CE24 VA: 0x23A0E24
	private int PickRoadBus(Vector2 screen) { }

	// RVA: 0x23A2B84 Offset: 0x239EB84 VA: 0x23A2B84
	private void Update() { }

	// RVA: 0x23A42DC Offset: 0x23A02DC VA: 0x23A42DC
	private void LateUpdate() { }

	// RVA: 0x23A3C6C Offset: 0x239FC6C VA: 0x23A3C6C
	private void TickJam(float dt) { }

	// RVA: 0x23A4698 Offset: 0x23A0698 VA: 0x23A4698
	private void JamBeat(float felt) { }

	// RVA: 0x23A4A10 Offset: 0x23A0A10 VA: 0x23A4A10
	private void JamReleased(float peak) { }

	// RVA: 0x23A3EF4 Offset: 0x239FEF4 VA: 0x23A3EF4
	private void TickApproach(float dt) { }

	// RVA: 0x23A332C Offset: 0x239F32C VA: 0x23A332C
	private void UpdateRoadVehicles(float vdt) { }

	// RVA: 0x239E0AC Offset: 0x239A0AC VA: 0x239E0AC
	private void RefreshArrows() { }

	// RVA: 0x239E460 Offset: 0x239A460 VA: 0x239E460
	private void RefreshCounter() { }

	// RVA: 0x23A1CB8 Offset: 0x239DCB8 VA: 0x23A1CB8
	public void Handle(List<SimEvent> evts) { }

	// RVA: 0x23A8ABC Offset: 0x23A4ABC VA: 0x23A8ABC
	public void CollectHighlights(string mechanic, List<Transform> into) { }

	// RVA: 0x23A7A28 Offset: 0x23A3A28 VA: 0x23A7A28
	private void UpdateRoute(int id) { }

	// RVA: 0x23A4C58 Offset: 0x23A0C58 VA: 0x23A4C58
	private void OnEscaped(int id, bool byPickup, bool fireTruck = False) { }

	// RVA: 0x23A5860 Offset: 0x23A1860 VA: 0x23A5860
	private void OnBlocked(int id, int blocker) { }

	// RVA: 0x23A5AA0 Offset: 0x23A1AA0 VA: 0x23A5AA0
	private void OnRoadFull(int id) { }

	// RVA: 0x23A5BD8 Offset: 0x23A1BD8 VA: 0x23A5BD8
	private float FillOf(int truckId) { }

	// RVA: 0x23A7184 Offset: 0x23A3184 VA: 0x23A7184
	private float PanOf(Vector3 world) { }

	// RVA: 0x23A5C1C Offset: 0x23A1C1C VA: 0x23A5C1C
	private float PanOfTruck(int id) { }

	// RVA: 0x23A5CB4 Offset: 0x23A1CB4 VA: 0x23A5CB4
	private void OnSuction(int truckId, int removed, GrainPoint[] samples, float flight, bool magic = False) { }

	// RVA: 0x23A8EFC Offset: 0x23A4EFC VA: 0x23A8EFC
	private void OnGrainLanded(int truckId) { }

	// RVA: 0x23A6888 Offset: 0x23A2888 VA: 0x23A6888
	private void OnCompleted(int id) { }

	// RVA: 0x23A6E7C Offset: 0x23A2E7C VA: 0x23A6E7C
	private void OnExiting(int id) { }

	// RVA: 0x23A7298 Offset: 0x23A3298 VA: 0x23A7298
	private void OnColorCleared(byte color) { }

	// RVA: 0x23A91A4 Offset: 0x23A51A4 VA: 0x23A91A4
	public PaintingLayer get_Painting() { }

	// RVA: 0x23A7B3C Offset: 0x23A3B3C VA: 0x23A7B3C
	private void OnRevealed(int id) { }

	// RVA: 0x23A7F40 Offset: 0x23A3F40 VA: 0x23A7F40
	private void OnShuffled() { }

	[IteratorStateMachine(typeof(GameView.<ShuffleBounce>d__197))]
	// RVA: 0x23A9248 Offset: 0x23A5248 VA: 0x23A9248
	private IEnumerator ShuffleBounce(VehicleView v, byte finalColor, float delay) { }

	// RVA: 0x23A92F0 Offset: 0x23A52F0 VA: 0x23A92F0
	public bool get_BoosterBusy() { }

	// RVA: 0x23A7260 Offset: 0x23A3260 VA: 0x23A7260
	public void HoldBoosters(float seconds) { }

	// RVA: 0x23A9314 Offset: 0x23A5314 VA: 0x23A9314
	private void StartFever() { }

	// RVA: 0x23A3288 Offset: 0x239F288 VA: 0x23A3288
	private void EndFever() { }

	// RVA: 0x23A8808 Offset: 0x23A4808 VA: 0x23A8808
	private void OnStageEnded(bool cleared) { }

	[IteratorStateMachine(typeof(GameView.<JamRipple>d__212))]
	// RVA: 0x23A95AC Offset: 0x23A55AC VA: 0x23A95AC
	private IEnumerator JamRipple() { }

	// RVA: 0x23A9620 Offset: 0x23A5620 VA: 0x23A9620
	public void ResumeAfterRevive() { }

	[IteratorStateMachine(typeof(GameView.<ReliefRipple>d__215))]
	// RVA: 0x23A4BD0 Offset: 0x23A0BD0 VA: 0x23A4BD0
	private IEnumerator ReliefRipple() { }

	// RVA: 0x23A97E0 Offset: 0x23A57E0 VA: 0x23A97E0
	private SandGrid NextPictureGrid() { }

	[IteratorStateMachine(typeof(GameView.<Finale>d__223))]
	// RVA: 0x23A94E8 Offset: 0x23A54E8 VA: 0x23A94E8
	private IEnumerator Finale() { }

	[IteratorStateMachine(typeof(GameView.<FireworkShow>d__230))]
	// RVA: 0x23A99A0 Offset: 0x23A59A0 VA: 0x23A99A0
	private IEnumerator FireworkShow(List<byte> cols) { }

	// RVA: 0x23A91AC Offset: 0x23A51AC VA: 0x23A91AC
	private static Color32 FireColor(byte c) { }

	// RVA: 0x23A906C Offset: 0x23A506C VA: 0x23A906C
	private static Color32 Vivid(Color32 c, int i) { }

	// RVA: 0x23A9A30 Offset: 0x23A5A30 VA: 0x23A9A30
	private static Color32 Accent(Color32 main, int i) { }

	// RVA: 0x23A9C88 Offset: 0x23A5C88 VA: 0x23A9C88
	public bool get_FinalePlaying() { }

	[IteratorStateMachine(typeof(GameView.<Spotlight>d__241))]
	// RVA: 0x23A9C98 Offset: 0x23A5C98 VA: 0x23A9C98
	private IEnumerator Spotlight() { }

	// RVA: 0x23A9D0C Offset: 0x23A5D0C VA: 0x23A9D0C
	private void SetRing(Vector3[] v, int at, Vector2 lo, Vector2 hi, float d) { }

	// RVA: 0x23A9EA8 Offset: 0x23A5EA8 VA: 0x23A9EA8
	private Vector3 SkyPoint(float vx, float vy, out float h) { }

	[IteratorStateMachine(typeof(GameView.<ShowRocket>d__244))]
	// RVA: 0x23A9FC4 Offset: 0x23A5FC4 VA: 0x23A9FC4
	private IEnumerator ShowRocket(float vx, float vy, Color32 a, Color32 b, GameView.Shell kind) { }

	// RVA: 0x23AA070 Offset: 0x23A6070 VA: 0x23AA070
	private void Burst(Vector3 c, GameView.Shell kind, Color32 a, Color32 b, float h) { }

	// RVA: 0x23AA7AC Offset: 0x23A67AC VA: 0x23AA7AC
	private void Sphere(Vector3 c, Color32 col, int n, float r, float size, float life, float h, float whiten = 0, float drag = 3.2) { }

	// RVA: 0x23AACD0 Offset: 0x23A6CD0 VA: 0x23AACD0
	private void Ring(Vector3 c, Color32 col, int n, float r, float size, float life, float h) { }

	// RVA: 0x23AAF64 Offset: 0x23A6F64 VA: 0x23AAF64
	private void Willow(Vector3 c, int n, float r, float h) { }

	// RVA: 0x23AA98C Offset: 0x23A698C VA: 0x23AA98C
	private void Glitter(Vector3 c, int n, float r, float h, bool crackle) { }

	[IteratorStateMachine(typeof(GameView.<CrackleLater>d__250))]
	// RVA: 0x23AB1AC Offset: 0x23A71AC VA: 0x23AB1AC
	private IEnumerator CrackleLater(Vector3 c, float delay) { }

	[IteratorStateMachine(typeof(GameView.<HitStop>d__251))]
	// RVA: 0x23A9460 Offset: 0x23A5460 VA: 0x23A9460
	private IEnumerator HitStop(float scale, float seconds) { }

	// RVA: 0x23AB248 Offset: 0x23A7248 VA: 0x23AB248
	private void EndHitStop() { }

	// RVA: 0x23AB300 Offset: 0x23A7300 VA: 0x23AB300
	private void OnDisable() { }

	// RVA: 0x23A955C Offset: 0x23A555C VA: 0x23A955C
	public void PunchCamera(float amount) { }

	// RVA: 0x23A4C44 Offset: 0x23A0C44 VA: 0x23A4C44
	public void Kick(float degrees) { }

	// RVA: 0x23A4240 Offset: 0x23A0240 VA: 0x23A4240
	public void HurryOutro() { }

	// RVA: 0x239E4BC Offset: 0x239A4BC VA: 0x239E4BC
	private void EndHurry() { }

	// RVA: 0x23A40EC Offset: 0x23A00EC VA: 0x23A40EC
	private static bool OverUi() { }

	// RVA: 0x23AB304 Offset: 0x23A7304 VA: 0x23AB304
	private void OnDestroy() { }

	// RVA: 0x23AB408 Offset: 0x23A7408 VA: 0x23AB408
	public VehicleView VehicleOf(int id) { }

	// RVA: 0x23AB480 Offset: 0x23A7480 VA: 0x23AB480
	public Transform get_BoardTransform() { }

	// RVA: 0x23AB508 Offset: 0x23A7508 VA: 0x23AB508
	public Vector2 ScreenOf(int id) { }

	// RVA: 0x23AB68C Offset: 0x23A768C VA: 0x23AB68C
	public void .ctor() { }

	// RVA: 0x23ABA5C Offset: 0x23A7A5C VA: 0x23ABA5C
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x23ABC18 Offset: 0x23A7C18 VA: 0x23ABC18
	private int <Load>b__100_0(byte x, byte y) { }

	[CompilerGenerated]
	// RVA: 0x239E4DC Offset: 0x239A4DC VA: 0x239E4DC
	internal static void <BuildPad>g__Grow|104_0(double x, double z, ref GameView.<>c__DisplayClass104_0 ) { }
}

