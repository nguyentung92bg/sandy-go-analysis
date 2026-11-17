// Namespace: Dino.BusSand.App.Gameplay
public class GameplayController : MonoBehaviour // TypeDefIndex: 4202
{
	// Fields
	[CompilerGenerated]
	private static GameplayController <I>k__BackingField; // 0x0
	[CompilerGenerated]
	private PlayState <State>k__BackingField; // 0x20
	[CompilerGenerated]
	private int <ParkedBuses>k__BackingField; // 0x24
	[CompilerGenerated]
	private int <LevelNumber>k__BackingField; // 0x28
	public static float IdleHintSeconds; // 0x8
	[CompilerGenerated]
	private LevelData <Level>k__BackingField; // 0x30
	[CompilerGenerated]
	private GameView <View>k__BackingField; // 0x38
	[CompilerGenerated]
	private int <SandLeftPercent>k__BackingField; // 0x40
	[CompilerGenerated]
	private int <ItemsUsed>k__BackingField; // 0x44
	[CompilerGenerated]
	private int <PreItemsUsed>k__BackingField; // 0x48
	private int _initialGrains; // 0x4C
	[CompilerGenerated]
	private object[] <LastItemState>k__BackingField; // 0x50
	public bool HudReady; // 0x58
	[CompilerGenerated]
	private float <LevelStartTime>k__BackingField; // 0x5C
	[CompilerGenerated]
	private int <ArmedItem>k__BackingField; // 0x60
	[CompilerGenerated]
	private Action<int> ParkedBusesChanged; // 0x68
	[CompilerGenerated]
	private Action<PlayState> StateChanged; // 0x70
	[CompilerGenerated]
	private Action LevelBuilt; // 0x78
	[CompilerGenerated]
	private Action BusSent; // 0x80
	[CompilerGenerated]
	private Action<int> ItemConsumed; // 0x88
	[CompilerGenerated]
	private Action RoadFull; // 0x90
	public const int MaxRoadSlots = 8;
	[CompilerGenerated]
	private Action<bool> FeverChanged; // 0x98
	private int _inputLocks; // 0xA0
	public bool BoosterShopOpen; // 0xA4
	private bool _jamHeld; // 0xA5
	private readonly HashSet<object> _pausers; // 0xA8

	// Properties
	public static GameplayController I { get; set; }
	public PlayState State { get; set; }
	public int ParkedBuses { get; set; }
	public int CarsLeft { get; }
	public int CarsRoad { get; }
	public int LevelNumber { get; set; }
	public LevelData Level { get; set; }
	public Camera Cam { get; }
	public GameView View { get; set; }
	public StageEngine Engine { get; }
	public int SandLeftPercent { get; set; }
	public float Progress01 { get; }
	public int ItemsUsed { get; set; }
	public int PreItemsUsed { get; set; }
	public object[] LastItemState { get; set; }
	public bool InputBlocked { get; }
	public float LevelStartTime { get; set; }
	public string FailType { get; }
	public static float RescueReviveSeconds { get; }
	public float RescueSecondsLeft { get; }
	public bool RescuePending { get; }
	public int ArmedItem { get; set; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x229B130 Offset: 0x2297130 VA: 0x229B130
	public static GameplayController get_I() { }

	[CompilerGenerated]
	// RVA: 0x229B188 Offset: 0x2297188 VA: 0x229B188
	private static void set_I(GameplayController value) { }

	[CompilerGenerated]
	// RVA: 0x229B1F0 Offset: 0x22971F0 VA: 0x229B1F0
	public PlayState get_State() { }

	[CompilerGenerated]
	// RVA: 0x229B1F8 Offset: 0x22971F8 VA: 0x229B1F8
	private void set_State(PlayState value) { }

	[CompilerGenerated]
	// RVA: 0x229B200 Offset: 0x2297200 VA: 0x229B200
	public int get_ParkedBuses() { }

	[CompilerGenerated]
	// RVA: 0x229B208 Offset: 0x2297208 VA: 0x229B208
	private void set_ParkedBuses(int value) { }

	// RVA: 0x229B210 Offset: 0x2297210 VA: 0x229B210
	public int get_CarsLeft() { }

	// RVA: 0x229B2C8 Offset: 0x22972C8 VA: 0x229B2C8
	public int get_CarsRoad() { }

	[CompilerGenerated]
	// RVA: 0x229B308 Offset: 0x2297308 VA: 0x229B308
	public int get_LevelNumber() { }

	[CompilerGenerated]
	// RVA: 0x229B310 Offset: 0x2297310 VA: 0x229B310
	private void set_LevelNumber(int value) { }

	[CompilerGenerated]
	// RVA: 0x229B318 Offset: 0x2297318 VA: 0x229B318
	public LevelData get_Level() { }

	[CompilerGenerated]
	// RVA: 0x229B320 Offset: 0x2297320 VA: 0x229B320
	private void set_Level(LevelData value) { }

	// RVA: 0x229B328 Offset: 0x2297328 VA: 0x229B328
	public Camera get_Cam() { }

	[CompilerGenerated]
	// RVA: 0x229B3A8 Offset: 0x22973A8 VA: 0x229B3A8
	public GameView get_View() { }

	[CompilerGenerated]
	// RVA: 0x229B3B0 Offset: 0x22973B0 VA: 0x229B3B0
	private void set_View(GameView value) { }

	// RVA: 0x229B248 Offset: 0x2297248 VA: 0x229B248
	public StageEngine get_Engine() { }

	[CompilerGenerated]
	// RVA: 0x229B3B8 Offset: 0x22973B8 VA: 0x229B3B8
	public int get_SandLeftPercent() { }

	[CompilerGenerated]
	// RVA: 0x229B3C0 Offset: 0x22973C0 VA: 0x229B3C0
	private void set_SandLeftPercent(int value) { }

	// RVA: 0x229B3C8 Offset: 0x22973C8 VA: 0x229B3C8
	public float get_Progress01() { }

	[CompilerGenerated]
	// RVA: 0x229B438 Offset: 0x2297438 VA: 0x229B438
	public int get_ItemsUsed() { }

	[CompilerGenerated]
	// RVA: 0x229B440 Offset: 0x2297440 VA: 0x229B440
	private void set_ItemsUsed(int value) { }

	[CompilerGenerated]
	// RVA: 0x229B448 Offset: 0x2297448 VA: 0x229B448
	public int get_PreItemsUsed() { }

	[CompilerGenerated]
	// RVA: 0x229B450 Offset: 0x2297450 VA: 0x229B450
	private void set_PreItemsUsed(int value) { }

	[CompilerGenerated]
	// RVA: 0x229B458 Offset: 0x2297458 VA: 0x229B458
	public object[] get_LastItemState() { }

	[CompilerGenerated]
	// RVA: 0x229B460 Offset: 0x2297460 VA: 0x229B460
	private void set_LastItemState(object[] value) { }

	// RVA: 0x229B468 Offset: 0x2297468 VA: 0x229B468
	private void CaptureItemState(int targetId = -1, bool roadTarget = False) { }

	// RVA: 0x229BF48 Offset: 0x2297F48 VA: 0x229BF48
	public bool get_InputBlocked() { }

	[CompilerGenerated]
	// RVA: 0x229BF78 Offset: 0x2297F78 VA: 0x229BF78
	public float get_LevelStartTime() { }

	[CompilerGenerated]
	// RVA: 0x229BF80 Offset: 0x2297F80 VA: 0x229BF80
	private void set_LevelStartTime(float value) { }

	// RVA: 0x229BF88 Offset: 0x2297F88 VA: 0x229BF88
	public string get_FailType() { }

	// RVA: 0x229C068 Offset: 0x2298068 VA: 0x229C068
	public static float get_RescueReviveSeconds() { }

	// RVA: 0x229C080 Offset: 0x2298080 VA: 0x229C080
	public float get_RescueSecondsLeft() { }

	// RVA: 0x229C0E0 Offset: 0x22980E0 VA: 0x229C0E0
	public bool get_RescuePending() { }

	[CompilerGenerated]
	// RVA: 0x229C134 Offset: 0x2298134 VA: 0x229C134
	public int get_ArmedItem() { }

	[CompilerGenerated]
	// RVA: 0x229C13C Offset: 0x229813C VA: 0x229C13C
	private void set_ArmedItem(int value) { }

	[CompilerGenerated]
	// RVA: 0x229C144 Offset: 0x2298144 VA: 0x229C144
	public void add_ParkedBusesChanged(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x229C1F4 Offset: 0x22981F4 VA: 0x229C1F4
	public void remove_ParkedBusesChanged(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x229C2A4 Offset: 0x22982A4 VA: 0x229C2A4
	public void add_StateChanged(Action<PlayState> value) { }

	[CompilerGenerated]
	// RVA: 0x229C354 Offset: 0x2298354 VA: 0x229C354
	public void remove_StateChanged(Action<PlayState> value) { }

	[CompilerGenerated]
	// RVA: 0x229C404 Offset: 0x2298404 VA: 0x229C404
	public void add_LevelBuilt(Action value) { }

	[CompilerGenerated]
	// RVA: 0x229C4A0 Offset: 0x22984A0 VA: 0x229C4A0
	public void remove_LevelBuilt(Action value) { }

	[CompilerGenerated]
	// RVA: 0x229C53C Offset: 0x229853C VA: 0x229C53C
	public void add_BusSent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x229C5D8 Offset: 0x22985D8 VA: 0x229C5D8
	public void remove_BusSent(Action value) { }

	[CompilerGenerated]
	// RVA: 0x229C674 Offset: 0x2298674 VA: 0x229C674
	public void add_ItemConsumed(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x229C724 Offset: 0x2298724 VA: 0x229C724
	public void remove_ItemConsumed(Action<int> value) { }

	[CompilerGenerated]
	// RVA: 0x229C7D4 Offset: 0x22987D4 VA: 0x229C7D4
	public void add_RoadFull(Action value) { }

	[CompilerGenerated]
	// RVA: 0x229C870 Offset: 0x2298870 VA: 0x229C870
	public void remove_RoadFull(Action value) { }

	[CompilerGenerated]
	// RVA: 0x229C90C Offset: 0x229890C VA: 0x229C90C
	public void add_FeverChanged(Action<bool> value) { }

	[CompilerGenerated]
	// RVA: 0x229C9BC Offset: 0x22989BC VA: 0x229C9BC
	public void remove_FeverChanged(Action<bool> value) { }

	// RVA: 0x229CA6C Offset: 0x2298A6C VA: 0x229CA6C
	public static GameplayController Create(Transform parent) { }

	// RVA: 0x229CB24 Offset: 0x2298B24 VA: 0x229CB24
	private void Awake() { }

	// RVA: 0x229D068 Offset: 0x2299068 VA: 0x229D068
	private void OnDestroy() { }

	// RVA: 0x229D194 Offset: 0x2299194 VA: 0x229D194
	public void LoadLevel(int displayLevel, LevelData overrideData) { }

	// RVA: 0x229D5E4 Offset: 0x22995E4 VA: 0x229D5E4
	private void ReserveHudSpace() { }

	[IteratorStateMachine(typeof(GameplayController.<StartWhenIntroDone>d__100))]
	// RVA: 0x229D838 Offset: 0x2299838 VA: 0x229D838
	private IEnumerator StartWhenIntroDone() { }

	// RVA: 0x229D580 Offset: 0x2299580 VA: 0x229D580
	private void SetState(PlayState s) { }

	// RVA: 0x229D8CC Offset: 0x22998CC VA: 0x229D8CC
	private void Update() { }

	// RVA: 0x229D9BC Offset: 0x22999BC VA: 0x229D9BC
	private void UpdateJamHold() { }

	// RVA: 0x229DAE8 Offset: 0x2299AE8 VA: 0x229DAE8
	public void ResetJamClock() { }

	// RVA: 0x229D6BC Offset: 0x22996BC VA: 0x229D6BC
	private void RefreshCounters(bool force) { }

	// RVA: 0x229DB70 Offset: 0x2299B70 VA: 0x229DB70
	private void OnVehicleTapped(int id) { }

	// RVA: 0x229DB8C Offset: 0x2299B8C VA: 0x229DB8C
	private void OnEnded(bool cleared) { }

	// RVA: 0x229DD28 Offset: 0x2299D28 VA: 0x229DD28
	public void LockInput(bool on) { }

	// RVA: 0x229DD50 Offset: 0x2299D50 VA: 0x229DD50
	public void SetPaused(bool on) { }

	// RVA: 0x229DDA8 Offset: 0x2299DA8 VA: 0x229DDA8
	public void SetPaused(bool on, object owner) { }

	// RVA: 0x229DF0C Offset: 0x2299F0C VA: 0x229DF0C
	public bool TapScreen(Vector2 screen) { }

	// RVA: 0x229DFB0 Offset: 0x2299FB0 VA: 0x229DFB0
	public Vector3 GuideWorldAnchor() { }

	// RVA: 0x229E278 Offset: 0x229A278 VA: 0x229E278
	public Vector3 PictureWorldAnchor() { }

	// RVA: 0x229E3B4 Offset: 0x229A3B4 VA: 0x229E3B4
	public List<Transform> PourHighlights() { }

	// RVA: 0x229E734 Offset: 0x229A734 VA: 0x229E734
	public List<Transform> LotVehicles() { }

	// RVA: 0x229EA0C Offset: 0x229AA0C VA: 0x229EA0C
	public Vector3 RoadCounterWorldAnchor() { }

	// RVA: 0x229EADC Offset: 0x229AADC VA: 0x229EADC
	public bool BotStep() { }

	// RVA: 0x229EB88 Offset: 0x229AB88 VA: 0x229EB88
	public static int ShuffleSeed(LevelData level, bool guided, Func<int> random) { }

	// RVA: 0x229EBBC Offset: 0x229ABBC VA: 0x229EBBC
	public GameplayController.ItemResult UseItem(int id, out string reasonKey, bool guided = False) { }

	// RVA: 0x229F2D8 Offset: 0x229B2D8 VA: 0x229F2D8
	private GameplayController.ItemResult NotPossible(int id) { }

	// RVA: 0x229F360 Offset: 0x229B360 VA: 0x229F360
	private void BoosterRefused(int truck) { }

	// RVA: 0x229F5DC Offset: 0x229B5DC VA: 0x229F5DC
	private void Consumed(int id) { }

	// RVA: 0x229F630 Offset: 0x229B630 VA: 0x229F630
	public void CancelItems() { }

	// RVA: 0x229D4E4 Offset: 0x22994E4 VA: 0x229D4E4
	private void ClearHandlers() { }

	// RVA: 0x229F6C0 Offset: 0x229B6C0 VA: 0x229F6C0
	public void AddRoadSlot() { }

	[IteratorStateMachine(typeof(GameplayController.<HeadStart>d__130))]
	// RVA: 0x229F780 Offset: 0x229B780 VA: 0x229F780
	public IEnumerator HeadStart(int n) { }

	// RVA: 0x229F824 Offset: 0x229B824 VA: 0x229F824
	public bool TryCompleteRevive(int buses) { }

	// RVA: 0x229F9C4 Offset: 0x229B9C4 VA: 0x229F9C4
	public void DeclineRevive() { }

	// RVA: 0x229F9DC Offset: 0x229B9DC VA: 0x229F9DC
	public void GiveUpLevel() { }

	// RVA: 0x229F9F8 Offset: 0x229B9F8 VA: 0x229F9F8
	public void Unload() { }

	// RVA: 0x229FAB4 Offset: 0x229BAB4 VA: 0x229FAB4
	public void ForceFail() { }

	// RVA: 0x229FB40 Offset: 0x229BB40 VA: 0x229FB40
	public void ForceWin() { }

	// RVA: 0x229FC04 Offset: 0x229BC04 VA: 0x229FC04
	public void .ctor() { }

	// RVA: 0x229FCC4 Offset: 0x229BCC4 VA: 0x229FCC4
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x229BF0C Offset: 0x2297F0C VA: 0x229BF0C
	internal static int <CaptureItemState>g__Band|52_0(byte c, ref GameplayController.<>c__DisplayClass52_0 ) { }

	[CompilerGenerated]
	// RVA: 0x229FD10 Offset: 0x229BD10 VA: 0x229FD10
	private void <Awake>b__96_0() { }

	[CompilerGenerated]
	// RVA: 0x229FD2C Offset: 0x229BD2C VA: 0x229FD2C
	private void <Awake>b__96_1(bool on) { }

	[CompilerGenerated]
	// RVA: 0x229FD4C Offset: 0x229BD4C VA: 0x229FD4C
	private void <Awake>b__96_2(int id, List<SimEvent> evts) { }

	[CompilerGenerated]
	// RVA: 0x229FDCC Offset: 0x229BDCC VA: 0x229FDCC
	private void <Awake>b__96_3(int id) { }

	[CompilerGenerated]
	// RVA: 0x229FE44 Offset: 0x229BE44 VA: 0x229FE44
	private void <Awake>b__96_4() { }
}

