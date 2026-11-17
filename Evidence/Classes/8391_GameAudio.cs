// Namespace: Dino.BusSand
public sealed class GameAudio : MonoBehaviour // TypeDefIndex: 8391
{
	// Fields
	[CompilerGenerated]
	private static GameAudio <I>k__BackingField; // 0x0
	private float _flux; // 0x20
	private float _fluxSmooth; // 0x24
	private float _fillAcc; // 0x28
	private float _fillW; // 0x2C
	private float _fillSmooth; // 0x30
	private float _settle; // 0x34
	private float _settleSmooth; // 0x38
	private float _panAcc; // 0x3C
	private float _panSmooth; // 0x40
	private float _musicGain; // 0x44
	public const float SirenVolume = 0.3;
	private AudioClip _pourClip; // 0x48
	private AudioClip _whoosh; // 0x50
	private AudioClip _blip; // 0x58
	private AudioClip _thud; // 0x60
	private AudioClip _sparkle; // 0x68
	private AudioClip _fillClip; // 0x70
	private AudioClip _settleClip; // 0x78
	private AudioClip _thunk; // 0x80
	private AudioClip _vroom; // 0x88
	private AudioClip _gloop; // 0x90
	private AudioClip _ding; // 0x98
	private AudioClip _clickClack; // 0xA0
	private AudioClip _rattle; // 0xA8
	private AudioClip _pssh; // 0xB0
	private AudioClip _siren; // 0xB8
	private AudioClip _slump; // 0xC0
	private AudioClip _bonk; // 0xC8
	private AudioClip _clack; // 0xD0
	private AudioClip _fanfare; // 0xD8
	private AudioClip _firework; // 0xE0
	private AudioClip _uiPop; // 0xE8
	private AudioClip _uiTick; // 0xF0
	private AudioClip _plink; // 0xF8
	private AudioClip _whistle; // 0x100
	private AudioClip _crackle; // 0x108
	private readonly AudioClip[] _chimes; // 0x110
	private readonly Dictionary<string, AudioClip> _synth; // 0x118
	private int _combo; // 0x120
	private float _comboTime; // 0x124
	[TupleElementNames(new[] { "name", "data" })]
	private Task<List<ValueTuple<string, float[]>>> _synthJob; // 0x128
	[TupleElementNames(new[] { "name", "data" })]
	[ThreadStatic]
	private static List<ValueTuple<string, float[]>> t_synthOut; // 0x80000000
	public static Func<Vector3, float> Panner; // 0x8
	private float _uiCueAt; // 0x130
	private static readonly float[] PentaSemis; // 0x10
	private static readonly float[] PaintSemis; // 0x18
	private float _paintAt; // 0x134
	private float _tension; // 0x138
	private float _hush; // 0x13C
	private bool _sirenOn; // 0x140
	private float _sirenPan; // 0x144
	private float _sirenVol; // 0x148
	private AudioClip _sirenLoopClip; // 0x150
	private const float FullFlux = 2600;
	public static bool ShellOwnsMusic; // 0x20
	private const int Rate = 44100;
	private AudioClip _brush; // 0x158
	private AudioClip _heart; // 0x160
	private AudioClip _exhale; // 0x168
	private AudioClip _pencil; // 0x170
	private AudioClip _peg; // 0x178
	private AudioClip _paper; // 0x180
	private AudioClip _honk; // 0x188

	// Properties
	public static GameAudio I { get; set; }
	public bool SoundOn { get; set; }
	public bool MusicOn { get; set; }
	public float MusicGain { get; }

	// Methods

	[CompilerGenerated]
	// RVA: 0x237DB7C Offset: 0x2379B7C VA: 0x237DB7C
	public static GameAudio get_I() { }

	[CompilerGenerated]
	// RVA: 0x237DBD4 Offset: 0x2379BD4 VA: 0x237DBD4
	private static void set_I(GameAudio value) { }

	// RVA: 0x237DC3C Offset: 0x2379C3C VA: 0x237DC3C
	public bool get_SoundOn() { }

	// RVA: 0x237DCC4 Offset: 0x2379CC4 VA: 0x237DCC4
	public void set_SoundOn(bool value) { }

	// RVA: 0x237DD18 Offset: 0x2379D18 VA: 0x237DD18
	public bool get_MusicOn() { }

	// RVA: 0x237DDA0 Offset: 0x2379DA0 VA: 0x237DDA0
	public void set_MusicOn(bool value) { }

	// RVA: 0x237DDF4 Offset: 0x2379DF4 VA: 0x237DDF4
	public static GameAudio Create() { }

	// RVA: 0x237DF98 Offset: 0x2379F98 VA: 0x237DF98
	private void Awake() { }

	// RVA: 0x237E160 Offset: 0x237A160 VA: 0x237E160
	private void FinishSynth() { }

	// RVA: 0x23825D8 Offset: 0x237E5D8 VA: 0x23825D8
	private void OnDestroy() { }

	// RVA: 0x2382750 Offset: 0x237E750 VA: 0x2382750
	public static bool Play(string eventId, float volume = 1, float pitch = 1, float pan = 0) { }

	// RVA: 0x23828C0 Offset: 0x237E8C0 VA: 0x23828C0
	public void Button() { }

	// RVA: 0x2382930 Offset: 0x237E930 VA: 0x2382930
	public void Blip(float pitch = 1) { }

	// RVA: 0x23829AC Offset: 0x237E9AC VA: 0x23829AC
	public void Tap() { }

	// RVA: 0x2382A1C Offset: 0x237EA1C VA: 0x2382A1C
	public void Depart(float size, float pan = 0) { }

	// RVA: 0x2382AD0 Offset: 0x237EAD0 VA: 0x2382AD0
	public void Blocked(float pan = 0) { }

	// RVA: 0x2382B4C Offset: 0x237EB4C VA: 0x2382B4C
	public void Warning() { }

	// RVA: 0x2382BBC Offset: 0x237EBBC VA: 0x2382BBC
	public void Whoosh(float pitch = 1) { }

	// RVA: 0x2382C38 Offset: 0x237EC38 VA: 0x2382C38
	public void WhooshSoft(float volume, float pitch = 1) { }

	// RVA: 0x2382CB8 Offset: 0x237ECB8 VA: 0x2382CB8
	public void BusExit() { }

	// RVA: 0x2382D28 Offset: 0x237ED28 VA: 0x2382D28
	public void Sparkle() { }

	// RVA: 0x2382D98 Offset: 0x237ED98 VA: 0x2382D98
	public void Coin() { }

	// RVA: 0x2382E08 Offset: 0x237EE08 VA: 0x2382E08
	public void CoinsFly() { }

	// RVA: 0x2382E78 Offset: 0x237EE78 VA: 0x2382E78
	public void PopIn() { }

	// RVA: 0x2382EE8 Offset: 0x237EEE8 VA: 0x2382EE8
	public void NewLevel() { }

	// RVA: 0x2382F58 Offset: 0x237EF58 VA: 0x2382F58
	public void UiPop() { }

	// RVA: 0x2382FC8 Offset: 0x237EFC8 VA: 0x2382FC8
	public void PopupOpen() { }

	// RVA: 0x2383048 Offset: 0x237F048 VA: 0x2383048
	public void BoosterOffer() { }

	// RVA: 0x23830B8 Offset: 0x237F0B8 VA: 0x23830B8
	public void Purchase() { }

	// RVA: 0x2383128 Offset: 0x237F128 VA: 0x2383128
	public void UiTick(float progress01) { }

	// RVA: 0x23831CC Offset: 0x237F1CC VA: 0x23831CC
	public void NeedleTick(float mult01) { }

	// RVA: 0x2383270 Offset: 0x237F270 VA: 0x2383270
	public void CoinLand(int index) { }

	// RVA: 0x2383330 Offset: 0x237F330 VA: 0x2383330
	public void Nope() { }

	// RVA: 0x23833A0 Offset: 0x237F3A0 VA: 0x23833A0
	public void LidThunk(float pan = 0) { }

	// RVA: 0x238341C Offset: 0x237F41C VA: 0x238341C
	public void PopupClose() { }

	[IteratorStateMachine(typeof(GameAudio.<CloseCue>d__84))]
	// RVA: 0x238345C Offset: 0x237F45C VA: 0x238345C
	private IEnumerator CloseCue(float at) { }

	// RVA: 0x2383500 Offset: 0x237F500 VA: 0x2383500
	public void PopupNegative() { }

	// RVA: 0x2383580 Offset: 0x237F580 VA: 0x2383580
	public void Toast() { }

	// RVA: 0x23835F0 Offset: 0x237F5F0 VA: 0x23835F0
	public void Toggle(bool on) { }

	// RVA: 0x238368C Offset: 0x237F68C VA: 0x238368C
	public void Transition() { }

	// RVA: 0x238370C Offset: 0x237F70C VA: 0x238370C
	public void Fill(float to01 = 0.5) { }

	// RVA: 0x23837B0 Offset: 0x237F7B0 VA: 0x23837B0
	public void ClockTick(float urgency01) { }

	// RVA: 0x2383864 Offset: 0x237F864 VA: 0x2383864
	public void SuccessSoft() { }

	// RVA: 0x23838D4 Offset: 0x237F8D4 VA: 0x23838D4
	public void PopStep(int index, float volume = 1) { }

	// RVA: 0x23839A0 Offset: 0x237F9A0 VA: 0x23839A0
	public void Thud(float pitch = 1) { }

	// RVA: 0x2383A1C Offset: 0x237FA1C VA: 0x2383A1C
	public void HeartBreak() { }

	// RVA: 0x2383A8C Offset: 0x237FA8C VA: 0x2383A8C
	public void IapSuccess() { }

	// RVA: 0x2383C0C Offset: 0x237FC0C VA: 0x2383C0C
	public void ChestRattle() { }

	// RVA: 0x2383C7C Offset: 0x237FC7C VA: 0x2383C7C
	public void ChestOpen() { }

	// RVA: 0x2383CEC Offset: 0x237FCEC VA: 0x2383CEC
	public void BoosterUsed(GameAudio.Booster b, float pan = 0) { }

	// RVA: 0x2383E24 Offset: 0x237FE24 VA: 0x2383E24
	public void BoosterArmed() { }

	// RVA: 0x2383E94 Offset: 0x237FE94 VA: 0x2383E94
	public void BoosterDisarmed() { }

	// RVA: 0x2383F04 Offset: 0x237FF04 VA: 0x2383F04
	public void StageClear() { }

	// RVA: 0x2383FAC Offset: 0x237FFAC VA: 0x2383FAC
	public void StageFailed() { }

	// RVA: 0x2384038 Offset: 0x2380038 VA: 0x2384038
	public void LevelLost() { }

	// RVA: 0x23840A8 Offset: 0x23800A8 VA: 0x23840A8
	public void Revived() { }

	// RVA: 0x2384118 Offset: 0x2380118 VA: 0x2384118
	public void Tire() { }

	// RVA: 0x2384188 Offset: 0x2380188 VA: 0x2384188
	public void BusComplete(float pan = 0) { }

	// RVA: 0x23842CC Offset: 0x23802CC VA: 0x23842CC
	public void FinalePicture() { }

	// RVA: 0x238433C Offset: 0x238033C VA: 0x238433C
	public void Fanfare() { }

	// RVA: 0x23843AC Offset: 0x23803AC VA: 0x23843AC
	public void Firework(float pan = 0) { }

	// RVA: 0x2384428 Offset: 0x2380428 VA: 0x2384428
	public void FireworkBig(float pan = 0) { }

	// RVA: 0x23844A4 Offset: 0x23804A4 VA: 0x23844A4
	public void Whistle(float pan = 0) { }

	// RVA: 0x2384520 Offset: 0x2380520 VA: 0x2384520
	public void Crackle(float pan = 0) { }

	// RVA: 0x238459C Offset: 0x238059C VA: 0x238459C
	public void PaintBloom(int step, float pan = 0) { }

	[IteratorStateMachine(typeof(GameAudio.<PaintChord>d__117))]
	// RVA: 0x23846E0 Offset: 0x23806E0 VA: 0x23846E0
	private IEnumerator PaintChord(int top, float pan, int from) { }

	// RVA: 0x2384784 Offset: 0x2380784 VA: 0x2384784
	public void SetTension(float k) { }

	// RVA: 0x23847A4 Offset: 0x23807A4 VA: 0x23847A4
	public void SetHush(float k) { }

	// RVA: 0x23847C4 Offset: 0x23807C4 VA: 0x23847C4
	public void JamBeat(float k) { }

	// RVA: 0x2384878 Offset: 0x2380878 VA: 0x2384878
	public void JamRelief(float peak) { }

	// RVA: 0x2384944 Offset: 0x2380944 VA: 0x2384944
	public void Mechanic(GameAudio.Mech m, float level = 0, float pan = 0) { }

	// RVA: 0x2384D0C Offset: 0x2380D0C VA: 0x2384D0C
	public void AddFlux(int grains, float fill = 0.5, float pan = 0) { }

	// RVA: 0x2384D70 Offset: 0x2380D70 VA: 0x2384D70
	public void AddSettle(int moves) { }

	// RVA: 0x2383F90 Offset: 0x237FF90 VA: 0x2383F90
	private void StopPour() { }

	// RVA: 0x2384D84 Offset: 0x2380D84 VA: 0x2384D84
	public float get_MusicGain() { }

	// RVA: 0x2384D8C Offset: 0x2380D8C VA: 0x2384D8C
	public void SirenLoop(bool on, float pan = 0) { }

	// RVA: 0x2383B30 Offset: 0x237FB30 VA: 0x2383B30
	public void Duck(float level, float seconds) { }

	// RVA: 0x2384DB0 Offset: 0x2380DB0 VA: 0x2384DB0
	private void Update() { }

	// RVA: 0x23852EC Offset: 0x23812EC VA: 0x23852EC
	public void PlayMusic(bool gameplay = True) { }

	// RVA: 0x23853F8 Offset: 0x23813F8 VA: 0x23853F8
	public void SetMusic(bool on) { }

	// RVA: 0x238544C Offset: 0x238144C VA: 0x238544C
	public void SetSound(bool on) { }

	// RVA: 0x23854A0 Offset: 0x23814A0 VA: 0x23854A0
	public void Pencil(float level, float pitch = 1) { }

	// RVA: 0x23855F8 Offset: 0x23815F8 VA: 0x23855F8
	public void Peg(float pitch = 1) { }

	// RVA: 0x2385674 Offset: 0x2381674 VA: 0x2385674
	public void Paper(float volume = 1, float pitch = 1) { }

	// RVA: 0x23856F4 Offset: 0x23816F4 VA: 0x23856F4
	public void Honk(float pitch = 1) { }

	// RVA: 0x2385770 Offset: 0x2381770 VA: 0x2385770
	public void Vroom(float pitch = 1) { }

	// RVA: 0x23857EC Offset: 0x23817EC VA: 0x23857EC
	public void PaintPatter(float pan = 0) { }

	// RVA: 0x2385868 Offset: 0x2381868 VA: 0x2385868
	public void BusCreak(float pitch = 1) { }

	// RVA: 0x23858E4 Offset: 0x23818E4 VA: 0x23858E4
	public void SeaAmbience(float level) { }

	[IteratorStateMachine(typeof(GameAudio.<SynthClips>d__152))]
	// RVA: 0x2382558 Offset: 0x237E558 VA: 0x2382558
	public IEnumerable<AudioClip> SynthClips() { }

	// RVA: 0x2385A6C Offset: 0x2381A6C VA: 0x2385A6C
	private static void BandPass(float[] x, Func<int, float> fc, float damping) { }

	// RVA: 0x2385B54 Offset: 0x2381B54 VA: 0x2385B54
	private static void LowPass(float[] x, Func<int, float> fc) { }

	// RVA: 0x2385C14 Offset: 0x2381C14 VA: 0x2385C14
	private static float[] Noise(Random rng, int n) { }

	// RVA: 0x2385CDC Offset: 0x2381CDC VA: 0x2385CDC
	private static void LoopFade(float[] d, int len) { }

	// RVA: 0x237EEB4 Offset: 0x237AEB4 VA: 0x237EEB4
	private void BuildSynth() { }

	// RVA: 0x2385DF8 Offset: 0x2381DF8 VA: 0x2385DF8
	private static AudioClip Tone(string name, float seconds, Func<float, float> f) { }

	// RVA: 0x2385D70 Offset: 0x2381D70 VA: 0x2385D70
	private static void Normalize(float[] d, float peak) { }

	// RVA: 0x2382368 Offset: 0x237E368 VA: 0x2382368
	private static AudioClip Make(string name, float[] d) { }

	// RVA: 0x2385F80 Offset: 0x2381F80 VA: 0x2385F80
	public void .ctor() { }

	// RVA: 0x2386048 Offset: 0x2382048 VA: 0x2386048
	private static void .cctor() { }

	[CompilerGenerated]
	// RVA: 0x2386124 Offset: 0x2382124 VA: 0x2386124
	private List<ValueTuple<string, float[]>> <Awake>b__53_0() { }

	[CompilerGenerated]
	// RVA: 0x2386288 Offset: 0x2382288 VA: 0x2386288
	private float <Awake>b__53_1() { }

	[CompilerGenerated]
	// RVA: 0x23824E0 Offset: 0x237E4E0 VA: 0x23824E0
	internal static AudioClip <FinishSynth>g__C|54_1(string n, ref GameAudio.<>c__DisplayClass54_0 ) { }

	[CompilerGenerated]
	// RVA: 0x2386290 Offset: 0x2382290 VA: 0x2386290
	private AudioClip <FinishSynth>b__54_0(string n) { }
}

