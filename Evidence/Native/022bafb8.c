/* IL2CPP: Dino.BusSand.App.UI.DailyView$$get_SecondsLeft
int64_t Dino_BusSand_App_UI_DailyView__get_SecondsLeft (Dino_BusSand_App_UI_DailyView_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Dino.BusSand.App.UI.DailyView$$get_SecondsLeft
   int64_t Dino_BusSand_App_UI_DailyView__get_SecondsLeft (Dino_BusSand_App_UI_DailyView_o* __this,
   const MethodInfo* method); */

ulong Dino_BusSand_App_UI_DailyView__get_SecondsLeft_21bafb8(void)

{
  long lVar1;
  
  lVar1 = Dino_BusSand_App_Meta_LiveClock__get_UtcMs_22295c0(0);
  return (ulong)((((int)(SUB168(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),8) >> 0x19) -
                  (SUB164(SEXT816(lVar1) * SEXT816(0x636ba875fd33dc87),0xc) >> 0x1f)) * 86400000 -
                 (int)lVar1) + 86400000) / 1000;
}

