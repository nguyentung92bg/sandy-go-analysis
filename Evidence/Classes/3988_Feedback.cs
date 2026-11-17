// Namespace: Dino.BusSand.App.Meta
public static class Feedback // TypeDefIndex: 3988
{
	// Fields
	public const string SupportMail = "support@dinogames.gg";
	public const int MaxLength = 1000;

	// Methods

	// RVA: 0x220FF60 Offset: 0x220BF60 VA: 0x220FF60
	public static void Send(string text, int stars) { }

	// RVA: 0x2210440 Offset: 0x220C440 VA: 0x2210440
	public static void OpenMail(string body = "", int stars = 0) { }

	// RVA: 0x221015C Offset: 0x220C15C VA: 0x221015C
	private static string Json(string text, int stars) { }

	[IteratorStateMachine(typeof(Feedback.<Post>d__5))]
	// RVA: 0x22103B8 Offset: 0x220C3B8 VA: 0x22103B8
	private static IEnumerator Post(string url, string json) { }
}

