// Namespace: Dino.BusSand.App
public class GameApp : MonoBehaviour // TypeDefIndex: 3311
{
	// Fields
	[CompilerGenerated]
	private static GameApp <I>k__BackingField; // 0x0
	public static bool TestMode; // 0x8
	public static Action SdkInstall; // 0x10
	[CompilerGenerated]
	private GameplayController <Gameplay>k__BackingField; // 0x20
	[CompilerGenerated]
	private UIManager <UI>k__BackingField; // 0x28
	[CompilerGenerated]
	private HallScene <Hall>k__BackingField; // 0x30
	[CompilerGenerated]
	private bool <InGame>k__BackingField; // 0x38
	[CompilerGenerated]
	private bool <InHall>k__BackingField; // 0x39
	[CompilerGenerated]
	private bool <IsBooted>k__BackingField; // 0x3A
	[CompilerGenerated]
	private EnterSource <Source>k__BackingField; // 0x3C
	[CompilerGenerated]
	private int <LastWinCoins>k__BackingField; // 0x40
	[CompilerGenerated]
	private int <LastWonLevel>k__BackingField; // 0x44
	private HudPanel _hud; // 0x48
	private bool _transitioning; // 0x50
	private int _steps; // 0x54
	private int _revives; // 0x58
	private int _reviveAdsWatched; // 0x5C
	[CompilerGenerated]
	private int <ChallengeLevel>k__BackingField; // 0x60
	public static bool LowMemoryRelief; // 0x18
	public static float MemoryReleaseGapS; // 0x1C
	private float _lowMemoryAt; // 0x64
	private float _adReleaseAt; // 0x68
	public const float AdReleaseMaxWaitS = 0.6;
	[CompilerGenerated]
	private static int <AdReleases>k__BackingField; // 0x20
	[CompilerGenerated]
	private static float <LastAdReleaseMs>k__BackingField; // 0x24
	private long _pausedAt; // 0x70
	private const float BootFrameMs = 12;
	private const float BootIdleMs = 16;
	private const float BootCapS = 12;
	public const float UpdateCheckTimeout = 3;
	private bool _wonBeforeHome; // 0x78
	private bool _quitting; // 0x79
	private Coroutine _hallQueue; // 0x80
	private Coroutine _homeQueue; // 0x88
	private Camera _homeCam; // 0x90

	// Properties
	public static GameApp I { get; set; }
	public GameplayController Gameplay { get; set; }
	public UIManager UI { get; set; }
	public HallScene Hall { get; set; }
	public bool InGame { get; set; }
	public bool InHall { get; set; }
	public bool IsBooted { get; set; }
	public EnterSource Source { get; set; }
	public int LastWinCoins { get; set; }
	public int LastWonLevel { get; set; }
	public int ChallengeLevel { get; set; }
	public bool InChallenge { get; }
	public int Revives { get; }
	public int ReviveAdsLeft { get; }
	public static int AdReleases { get; set; }
	public static float LastAdReleaseMs { get; set; }
	public static bool CanStartLevel { get; }
	public bool RateUsDue { get; }
	public bool HallQueueRunning { get; }
	public HomePanel Home { get; }
	public Camera HomeCam { get; }
	public HudPanel Hud { get; }
	private static bool QaRun { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x216415C Offset: 0x216015C VA: 0x216415C
	public static GameApp get_I() { }

	[CompilerGenerated]
	// RVA: 0x21641B4 Offset: 0x21601B4 VA: 0x21641B4
	private static void set_I(GameApp value) { }

	[CompilerGenerated]
	// RVA: 0x216421C Offset: 0x216021C VA: 0x216421C
	public GameplayController get_Gameplay() { }

	[CompilerGenerated]
	// RVA: 0x2164224 Offset: 0x2160224 VA: 0x2164224
	private void set_Gameplay(GameplayController value) { }

	[CompilerGenerated]
	// RVA: 0x216422C Offset: 0x216022C VA: 0x216422C
	public UIManager get_UI() { }

	[CompilerGenerated]
	// RVA: 0x2164234 Offset: 0x2160234 VA: 0x2164234
	private void set_UI(UIManager value) { }

	[CompilerGenerated]
	// RVA: 0x216423C Offset: 0x216023C VA: 0x216423C
	public HallScene get_Hall() { }

	[CompilerGenerated]
	// RVA: 0x2164244 Offset: 0x2160244 VA: 0x2164244
	private void set_Hall(HallScene value) { }

	[CompilerGenerated]
	// RVA: 0x216424C Offset: 0x216024C VA: 0x216424C
	public bool get_InGame() { }

	[CompilerGenerated]
	// RVA: 0x2164254 Offset: 0x2160254 VA: 0x2164254
	private void set_InGame(bool value) { }

	[CompilerGenerated]
	// RVA: 0x216425C Offset: 0x216025C VA: 0x216425C
	public bool get_InHall() { }

	[CompilerGenerated]
	// RVA: 0x2164264 Offset: 0x2160264 VA: 0x2164264
	private void set_InHall(bool value) { }

	[CompilerGenerated]
	// RVA: 0x216426C Offset: 0x216026C VA: 0x216426C
	public bool get_IsBooted() { }

	[CompilerGenerated]
	// RVA: 0x2164274 Offset: 0x2160274 VA: 0x2164274
	private void set_IsBooted(bool value) { }

	[CompilerGenerated]
	// RVA: 0x216427C Offset: 0x216027C VA: 0x216427C
	public EnterSource get_Source() { }

	[CompilerGenerated]
	// RVA: 0x2164284 Offset: 0x2160284 VA: 0x2164284
	private void set_Source(EnterSource value) { }

	[CompilerGenerated]
	// RVA: 0x216428C Offset: 0x216028C VA: 0x216428C
	public int get_LastWinCoins() { }

	[CompilerGenerated]
	// RVA: 0x2164294 Offset: 0x2160294 VA: 0x2164294
	private void set_LastWinCoins(int value) { }

	[CompilerGenerated]
	// RVA: 0x216429C Offset: 0x216029C VA: 0x216429C
	public int get_LastWonLevel() { }

	[CompilerGenerated]
	// RVA: 0x21642A4 Offset: 0x21602A4 VA: 0x21642A4
	private void set_LastWonLevel(int value) { }

	[CompilerGenerated]
	// RVA: 0x21642AC Offset: 0x21602AC VA: 0x21642AC
	public int get_ChallengeLevel() { }

	[CompilerGenerated]
	// RVA: 0x21642B4 Offset: 0x21602B4 VA: 0x21642B4
	private void set_ChallengeLevel(int value) { }

	// RVA: 0x21642BC Offset: 0x21602BC VA: 0x21642BC
	public bool get_InChallenge() { }

	// RVA: 0x21642CC Offset: 0x21602CC VA: 0x21642CC
	public void EnterChallenge(int level) { }

	// RVA: 0x21645EC Offset: 0x21605EC VA: 0x21645EC
	public int get_Revives() { }

	// RVA: 0x21645F4 Offset: 0x21605F4 VA: 0x21645F4
	public int get_ReviveAdsLeft() { }

	// RVA: 0x2164688 Offset: 0x2160688 VA: 0x2164688
	private void Awake() { }

	// RVA: 0x2164CFC Offset: 0x2160CFC VA: 0x2164CFC
	private void OnLowMemory() { }

	// RVA: 0x2164E04 Offset: 0x2160E04 VA: 0x2164E04
	private AsyncOperation ReleaseCaches(bool keepPanels) { }

	[CompilerGenerated]
	// RVA: 0x2164F3C Offset: 0x2160F3C VA: 0x2164F3C
	public static int get_AdReleases() { }

	[CompilerGenerated]
	// RVA: 0x2164F94 Offset: 0x2160F94 VA: 0x2164F94
	private static void set_AdReleases(int value) { }

	[CompilerGenerated]
	// RVA: 0x2164FF0 Offset: 0x2160FF0 VA: 0x2164FF0
	public static float get_LastAdReleaseMs() { }

	[CompilerGenerated]
	// RVA: 0x2165048 Offset: 0x2161048 VA: 0x2165048
	private static void set_LastAdReleaseMs(float value) { }

	// RVA: 0x21650AC Offset: 0x21610AC VA: 0x21650AC
	public void BeforeFullscreenAd(string what, DeviceMemory.Snapshot mem, Action show) { }

	[IteratorStateMachine(typeof(GameApp.<ReleaseThenShow>d__75))]
	// RVA: 0x216522C Offset: 0x216122C VA: 0x216522C
	private IEnumerator ReleaseThenShow(string what, DeviceMemory.Snapshot before, Action show) { }

	[IteratorStateMachine(typeof(GameApp.<Start>d__76))]
	// RVA: 0x21652E4 Offset: 0x21612E4 VA: 0x21652E4
	private IEnumerator Start() { }

	// RVA: 0x2165358 Offset: 0x2161358 VA: 0x2165358
	private void Update() { }

	// RVA: 0x2165404 Offset: 0x2161404 VA: 0x2165404
	private void OnApplicationPause(bool paused) { }

	// RVA: 0x2165724 Offset: 0x2161724 VA: 0x2165724
	private void OnApplicationQuit() { }

	[IteratorStateMachine(typeof(GameApp.<Boot>d__84))]
	// RVA: 0x2165774 Offset: 0x2161774 VA: 0x2165774
	public IEnumerator Boot() { }

	// RVA: 0x21657E8 Offset: 0x21617E8 VA: 0x21657E8
	private static void BootStep(string what, Action step) { }

	// RVA: 0x2165974 Offset: 0x2161974 VA: 0x2165974
	private void OnDestroy() { }

	// RVA: 0x2165AA8 Offset: 0x2161AA8 VA: 0x2165AA8
	private void OnLateUpdateAnswer(AppUpdate.Result r) { }

	[IteratorStateMachine(typeof(GameApp.<OfferSoftUpdate>d__89))]
	// RVA: 0x2165CA0 Offset: 0x2161CA0 VA: 0x2165CA0
	private IEnumerator OfferSoftUpdate() { }

	// RVA: 0x2165D14 Offset: 0x2161D14 VA: 0x2165D14
	public static bool get_CanStartLevel() { }

	// RVA: 0x21643C8 Offset: 0x21603C8 VA: 0x21643C8
	public bool HasHeartOrRefill(Action retry) { }

	// RVA: 0x21644C8 Offset: 0x21604C8 VA: 0x21644C8
	public void EnterLevel(EnterSource source) { }

	[IteratorStateMachine(typeof(GameApp.<EnterLevelRoutine>d__94))]
	// RVA: 0x2165EAC Offset: 0x2161EAC VA: 0x2165EAC
	private IEnumerator EnterLevelRoutine(EnterSource source) { }

	// RVA: 0x2165F30 Offset: 0x2161F30 VA: 0x2165F30
	private double Progress3() { }

	// RVA: 0x2165FE0 Offset: 0x2161FE0 VA: 0x2165FE0
	private void OnPlayState(PlayState s) { }

	[IteratorStateMachine(typeof(GameApp.<OnWin>d__97))]
	// RVA: 0x2166984 Offset: 0x2162984 VA: 0x2166984
	private IEnumerator OnWin() { }

	[IteratorStateMachine(typeof(GameApp.<ChallengeWin>d__98))]
	// RVA: 0x216752C Offset: 0x216352C VA: 0x216752C
	private IEnumerator ChallengeWin() { }

	// RVA: 0x21675A0 Offset: 0x21635A0 VA: 0x21675A0
	public bool get_RateUsDue() { }

	// RVA: 0x21675F8 Offset: 0x21635F8 VA: 0x21675F8
	public void RunPostWin() { }

	// RVA: 0x21677E0 Offset: 0x21637E0 VA: 0x21677E0
	public void WinContinue() { }

	// RVA: 0x2166AE0 Offset: 0x2162AE0 VA: 0x2166AE0
	private void OnFailed() { }

	// RVA: 0x2167F60 Offset: 0x2163F60 VA: 0x2167F60
	public bool ReviveWithCoins() { }

	// RVA: 0x2168530 Offset: 0x2164530 VA: 0x2168530
	public void ReviveWithAd(Action<bool> done) { }

	[IteratorStateMachine(typeof(GameApp.<DeclineNextFrame>d__107))]
	// RVA: 0x21669F8 Offset: 0x21629F8 VA: 0x21669F8
	private IEnumerator DeclineNextFrame() { }

	// RVA: 0x21686BC Offset: 0x21646BC VA: 0x21686BC
	public void ReviveWithOffer(int storeItemId) { }

	// RVA: 0x21681B0 Offset: 0x21641B0 VA: 0x21681B0
	private void CompleteRevive(string how) { }

	// RVA: 0x21688E0 Offset: 0x21648E0 VA: 0x21688E0
	public void GiveUp() { }

	// RVA: 0x2168B58 Offset: 0x2164B58 VA: 0x2168B58
	public void ReviveFromActivity(int buses) { }

	// RVA: 0x2168E04 Offset: 0x2164E04 VA: 0x2168E04
	public void OpenQuitConfirm(bool reset = False) { }

	// RVA: 0x2168F40 Offset: 0x2164F40 VA: 0x2168F40
	public void QuitClosed(bool quit, bool reset = False) { }

	// RVA: 0x2169860 Offset: 0x2165860 VA: 0x2169860
	public void PlayFromLevelEnter(LevelEnterPanel.Mode mode) { }

	// RVA: 0x21678C4 Offset: 0x21638C4 VA: 0x21678C4
	public void GoHall(bool fromGame) { }

	[IteratorStateMachine(typeof(GameApp.<RunHallQueue>d__119))]
	// RVA: 0x2169AD4 Offset: 0x2165AD4 VA: 0x2169AD4
	private IEnumerator RunHallQueue(bool fromGame) { }

	// RVA: 0x2169B5C Offset: 0x2165B5C VA: 0x2169B5C
	public bool get_HallQueueRunning() { }

	// RVA: 0x2169B6C Offset: 0x2165B6C VA: 0x2169B6C
	private void LeaveHall() { }

	// RVA: 0x2169A38 Offset: 0x2165A38 VA: 0x2169A38
	public HomePanel get_Home() { }

	// RVA: 0x2169CC8 Offset: 0x2165CC8 VA: 0x2169CC8
	public Camera get_HomeCam() { }

	// RVA: 0x2169884 Offset: 0x2165884 VA: 0x2169884
	private Camera HomeCamera() { }

	// RVA: 0x2169CD0 Offset: 0x2165CD0 VA: 0x2169CD0
	public void OnHallPlay() { }

	// RVA: 0x2168098 Offset: 0x2164098 VA: 0x2168098
	public void OpenStore(bool force = False) { }

	// RVA: 0x2165D9C Offset: 0x2161D9C VA: 0x2165D9C
	public void OpenPowerBuy(int count, Action<bool> done) { }

	// RVA: 0x2166A6C Offset: 0x2162A6C VA: 0x2166A6C
	public void Toast(string text) { }

	// RVA: 0x2169DC0 Offset: 0x2165DC0 VA: 0x2169DC0
	public void Toast(string text, float height) { }

	// RVA: 0x2169E3C Offset: 0x2165E3C VA: 0x2169E3C
	public void SetSound(bool on) { }

	// RVA: 0x2169F08 Offset: 0x2165F08 VA: 0x2169F08
	public void SetMusic(bool on) { }

	// RVA: 0x2169FD8 Offset: 0x2165FD8 VA: 0x2169FD8
	public void SetVibration(bool on) { }

	// RVA: 0x216A0DC Offset: 0x21660DC VA: 0x216A0DC
	public HudPanel get_Hud() { }

	// RVA: 0x216A0E4 Offset: 0x21660E4 VA: 0x216A0E4
	private static bool get_QaRun() { }

	// RVA: 0x216A0EC Offset: 0x21660EC VA: 0x216A0EC
	public void .ctor() { }

	// RVA: 0x216A104 Offset: 0x2166104 VA: 0x216A104
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x216A158 Offset: 0x2166158 VA: 0x216A158
	private void <Awake>b__58_0() { }

	[CompilerGenerated]
	// RVA: 0x216A1C0 Offset: 0x21661C0 VA: 0x216A1C0
	private void <Awake>b__58_1() { }

	[CompilerGenerated]
	// RVA: 0x216A1EC Offset: 0x21661EC VA: 0x216A1EC
	private void <Awake>b__58_2() { }

	[CompilerGenerated]
	// RVA: 0x216A268 Offset: 0x2166268 VA: 0x216A268
	private void <Awake>b__58_3() { }

	[CompilerGenerated]
	// RVA: 0x216A278 Offset: 0x2166278 VA: 0x216A278
	private bool <OfferSoftUpdate>g__Ready|89_0() { }

	[CompilerGenerated]
	// RVA: 0x216A2F8 Offset: 0x21662F8 VA: 0x216A2F8
	private void <ReviveWithOffer>b__108_0(Vector3 _) { }

	[CompilerGenerated]
	// RVA: 0x216A340 Offset: 0x2166340 VA: 0x216A340
	private void <GiveUp>b__110_0() { }

	[CompilerGenerated]
	// RVA: 0x216A358 Offset: 0x2166358 VA: 0x216A358
	private void <QuitClosed>b__114_0() { }
}

