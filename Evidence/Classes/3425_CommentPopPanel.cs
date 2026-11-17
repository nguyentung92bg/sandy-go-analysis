// Namespace: Dino.BusSand.App.UI
public class CommentPopPanel : UIPanel, IKitPanel // TypeDefIndex: 3425
{
	// Fields
	public const string PermanentlyDoneFlag = "CommentPopPermanentlyDone";
	public const int GoodStars = 5;
	public const int MaxBadRatings = 3;
	public const int RepeatFrom = 104;
	public const int RepeatEvery = 100;
	private readonly List<Image> _stars; // 0x38
	private int _count; // 0x40
	private bool _submitted; // 0x44
	private bool _feedbackStep; // 0x45
	private KitWindow _w; // 0x48
	private RectTransform _rate; // 0x50
	private RectTransform _send; // 0x58
	private TMP_Text _question; // 0x60
	private TMP_InputField _input; // 0x68

	// Properties
	public static int FirstLevel { get; }

	// Methods

	// RVA: 0x22A4F38 Offset: 0x22A0F38 VA: 0x22A4F38
	public static int get_FirstLevel() { }

	// RVA: 0x22A4F40 Offset: 0x22A0F40 VA: 0x22A4F40
	public static bool IsScheduledLevel(int level) { }

	// RVA: 0x22A4F84 Offset: 0x22A0F84 VA: 0x22A4F84
	public static bool ShouldShow(int level) { }

	// RVA: 0x22A513C Offset: 0x22A113C VA: 0x22A513C Slot: 4
	public override void OnOpen(object param) { }

	// RVA: 0x22A5CDC Offset: 0x22A1CDC VA: 0x22A5CDC
	private void SetStarCount(int n) { }

	// RVA: 0x22A608C Offset: 0x22A208C VA: 0x22A608C
	private void OnRateClick() { }

	// RVA: 0x22A6374 Offset: 0x22A2374 VA: 0x22A6374
	private void ShowFeedbackStep() { }

	// RVA: 0x22A68AC Offset: 0x22A28AC VA: 0x22A68AC
	private static TMP_InputField FeedbackBox(Transform parent, Vector2 size, float fromTop) { }

	// RVA: 0x22A6DEC Offset: 0x22A2DEC VA: 0x22A6DEC
	private void OnSendClick() { }

	// RVA: 0x22A7138 Offset: 0x22A3138 VA: 0x22A7138
	private void OnCloseClick() { }

	// RVA: 0x22A72C4 Offset: 0x22A32C4 VA: 0x22A72C4 Slot: 7
	public override bool OnBack() { }

	// RVA: 0x22A72D8 Offset: 0x22A32D8 VA: 0x22A72D8
	public void .ctor() { }

	[CompilerGenerated]
	// RVA: 0x22A6C24 Offset: 0x22A2C24 VA: 0x22A6C24
	internal static TMP_Text <FeedbackBox>g__Line|22_0(string name, string text, Color color, ref CommentPopPanel.<>c__DisplayClass22_0 ) { }
}

