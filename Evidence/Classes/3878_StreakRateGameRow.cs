// Namespace: Dino.BusSand.App.UI
public class StreakRateGameRow : MonoBehaviour // TypeDefIndex: 3878
{
	// Fields
	private const float DisappearShow = 0.3;
	private const float DisappearTime = 0.15;
	private const float MoveDelay = 0.2;
	private const float WordStep = 0.25;
	private const float LoopWait = 1;
	private StreakRateFeature _f; // 0x20
	private Transform _moveObj; // 0x28
	private Transform _moveMask; // 0x30
	private TMP_Text[] _moveText; // 0x38
	private Transform[] _rateItems; // 0x40
	private int _cur; // 0x48

	// Methods

	// RVA: 0x21DE0B0 Offset: 0x21DA0B0 VA: 0x21DE0B0
	public static StreakRateGameRow Attach(GameObject row, StreakRateFeature f, float delay) { }

	// RVA: 0x21DE1C4 Offset: 0x21DA1C4 VA: 0x21DE1C4
	private void Init(StreakRateFeature f, float delay) { }

	// RVA: 0x21DE76C Offset: 0x21DA76C VA: 0x21DE76C
	private void InitPlayData() { }

	[IteratorStateMachine(typeof(StreakRateGameRow.<Loop>d__14))]
	// RVA: 0x21DE6F0 Offset: 0x21DA6F0 VA: 0x21DE6F0
	private IEnumerator Loop(float delay) { }

	[IteratorStateMachine(typeof(StreakRateGameRow.<Punch>d__15))]
	// RVA: 0x21DEA14 Offset: 0x21DAA14 VA: 0x21DEA14
	private IEnumerator Punch() { }

	// RVA: 0x21DE914 Offset: 0x21DA914 VA: 0x21DE914
	private void SetMoveText(string s) { }

	// RVA: 0x21DE600 Offset: 0x21DA600 VA: 0x21DE600
	private static void SetText(Transform t, string s) { }

	// RVA: 0x21DEAA8 Offset: 0x21DAAA8 VA: 0x21DEAA8
	public void .ctor() { }
}

